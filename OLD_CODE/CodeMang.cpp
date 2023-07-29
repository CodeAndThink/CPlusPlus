#include <iostream>
#include <conio.h>

class PTLinkedList
{
    struct Node    // Khai báo 1 c?u trúc d? li?u cho 1 node
    {
        int data_;
        Node* p_next_;
    };
 
public:
    PTLinkedList() { p_head_ = NULL; }
    ~PTLinkedList()
    {
        Node* head = p_head_;
        while (head)
        {
            Node* temp = head;
            head = head->p_next_;
            delete temp;
            temp = NULL;
        }
    }
 
    void AddValue(int val)  // Thêm 1 ph?n t? m?i vào d?u danh sách
    {
        Node* new_node = new Node();
        new_node->data_ = val;
        new_node->p_next_ = p_head_;
        p_head_ = new_node;
    }
    void Remove()  // Lo?i b? ph?n t? d?u danh sách
    {
        if (p_head_ != NULL)
        {
            Node* temp = p_head_;
            p_head_ = p_head_->p_next_;
            delete temp;
        }
    }
    
    void Show()  // Vi?t thêm m?t hàm hi?n th?
    {
        Node* temp = p_head_;
        while (temp != NULL)
        {
            int value = temp->data_;
            std::cout << "  " << value;
            temp = temp->p_next_;
        }
    }
private:
    Node* p_head_;   // Luôn có 1 con tr? pHead qu?n lý ph?n t? d?u.
};

class Person
{
public:
    Person() { ; };
    Person(std::string name, unsigned int age, bool sex);
    ~Person() { ; };
    void operator =(Person& p);
    std::string get_name() const { return name_; }
    unsigned int get_age() const { return age_; }
    bool get_sex() const { return sex_; }
 
    void ShowInfo()
    {
        std::cout << "  Name = " << name_.c_str();
        std::cout << "  Age = " << age_;
        std::cout << "  Sex = " << ((sex_ == 1) ? "Male" : "Female");
    }
private:
    std::string name_;
    unsigned int age_;
    bool sex_;
};
 
Person::Person(std::string name, unsigned int age, bool sex)
{
    name_ = name;
    age_ = age;
    sex_ = sex;
}
 
void Person::operator =(Person& p) //Lýu ? là khi xây d?ng các lõp ð?i tý?ng, h?y d?ng các phép toán cho l?p.
{
    this->name_ = p.name_;
    this->age_ = p.age_;
    this->sex_ = p.sex_;
}
int main()
{
	PTLinkedList<Person> data_list;
    Person person1("Pham A", 20, 1);
    Person person2("Pham B", 20, 0);
    Person person3("Pham C", 20, 1);
    Person person4("Pham D", 20, 0);
 
    data_list.InsetFront(person1);
    data_list.InsetFront(person2);
    data_list.InsetFront(person3);
    data_list.InsetFront(person4);
 
    // In danh sách.
    NodeData<Person>* p_head = data_list.head();
    if (p_head != NULL)
    {
        NodeData<Person>* temp = p_head;
        while (temp != NULL)
        {
            temp->get_data().ShowInfo();
            std::cout << "\n\n\n";
            temp = temp->get_next();
        }
    }
}
