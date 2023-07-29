#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class student
{
	public:
	int ID;// data
	student *next; // this variable is used to link to next element
	student()// constructor funcion
	{
		ID=0;
		next=NULL;
	}
	void setstudent(int id) // set function
	{
		this->ID=id;
		this->next=NULL;
	}
	int getstudent() //get function
	{
		return this->ID;
	}
	void nextelement(student *ns)// this function moves to next element
	{
		this->next=ns;
	}
	student* getnextstudent() //this function returns the address of next element
	{
		return next;
	}
};

class StudentList// second class
{
	private:
	student *HeadStudent,*CurrentStudent; // define two variables of student
	public:
	StudentList() // Constructor function
	{
		HeadStudent = new student();
		HeadStudent->setstudent(0);
		CurrentStudent = NULL;
	}
	void Add_Student(int studentid) // Function to add students in list
	{
		student *NewStudent = new student();
		NewStudent->setstudent(studentid);
		NewStudent->nextelement(NULL);
	// we have 2 cases when we add new element to the student list
	if(CurrentStudent == NULL)// first case
	{
		HeadStudent = NewStudent;
		CurrentStudent = NewStudent;
	}
	else// second case
		CurrentStudent->nextelement(NewStudent);
		CurrentStudent= NewStudent;
	}
	void PrintList(StudentList S, int n)
	{
		StudentList P = S;
		if(P.HeadStudent != NULL)
		{
			cout<<"The ID of all students:" << endl;
			for(int i = 0; i < n; i++)
			{
				cout<<P.HeadStudent->getstudent() <<endl;
				P.HeadStudent = P.HeadStudent->getnextstudent();
			}
		}
	}
	void DeleteStudent(StudentList S, int ID, int n)
	{
		for(int i = 0; i < n; i++){
			if(S.HeadStudent->getstudent() == ID)
			{	
				S.HeadStudent=S.HeadStudent->getnextstudent();	
			}
		}
		cout<<"After Delete"<<endl;
		if(S.HeadStudent != NULL)
		{
			for(int i = 0; i < n; i++)
			{
				cout<<S.HeadStudent->getstudent() <<endl;
				S.HeadStudent = S.HeadStudent->getnextstudent();
			}
		}
    }
};

int main(int argc, char *argv[]) {
	StudentList S; 
	int ID, Number, DelID;
	cout<<"Enter the number of student: ";
	cin >> Number;
	for(int i = 0; i < Number; i++)
	{
		cout<<"Enter the " << i+1 << "th student ID: " << endl;
		cin >> ID;
		S.Add_Student(ID);
	}
	S.PrintList(S, Number);
	cout<<"Enter the delete ID:"<<endl;
	cin>>DelID;
	S.DeleteStudent(S,DelID,Number);
	return 0;
}
