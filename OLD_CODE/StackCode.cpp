#include <iostream>
#define MAX_SIZE 5 //Size of stack
using namespace std;
 
class Stack
{
	private:
	int mystack[MAX_SIZE], front, rear;
	public:
	Stack()
	{
		top = -1;
		bottom = -1;
    }
     
	bool isFull() //Check the queue is full or not
	{
		if(top == 0 && bottom == MAX_SIZE - 1)
		{
			return true;
	    }else{
	    	return false;	
		}
	}
	
	bool isEmpty() //Check the queue is empty or not 
	{
		if(top == -1)
		{
			return true;	
		}else{
			return false;	
		} 
	}
	     
	void enStack(int value) //insert values
	{
		if(isFull())
		{
			cout << endl<< "Stack is full!!";
		}else{
			if(front == -1)
			{
				front = 0;	
			}
			rear++;
			mystack[rear] = value;
	    }
	}

	int deQueue() //Delete value
	{
		int value;
		if(isEmpty())
		{
			cout << "Queue is empty!!" << endl; 
			return(-1); 
		}else{ 
			value = myqueue[front];
		}
		if(front >= rear)
		{      //only one element in queue
			front = -1;
			rear = -1;
		}else{
			front++;
		}
		cout << endl << "Deleted => " << value << " from myqueue";
		return(value);
	}
	int findQueue(int Value)
	{
		int count = 0;
		for(int i=front; i<=rear; i++)
		{
			if(Value == myqueue[i])
			{
				cout<<"The value in " << i << " index" << endl;	
				count++;
			}	
    	}
    	if(count==0)
			{
				cout<<"The value is not in my queue!" << endl;	
			}
	}
	     
	void displayQueue() //display all data
	{ 
		int i;
		if(isEmpty()) 
		{
			cout << endl << "Queue is Empty!!" << endl;
		}else{
			cout << endl << "Queue elements : ";
			for(i=front; i<=rear; i++)
			{
				cout << myqueue[i] << "\t";
	        }
	    }
	}
};

int main()
{
    Queue MyQ;
    int n, Value, FindValue, DelTime;
	do
	{
		if(MyQ.deQueue()==-1)
		{
			cout<< "Do you want to insert new value? " << endl;
			cout<< "Press 1 to insert or press 0 to end application" << endl;
			cin >> n;
			switch(n)
			{
				case 0:
					exit(0);
				case 1:
					system("cls");
					for(int i = 0; i < 5; i++)
					{
						Value = 0;
						cout << "Enter the " << i+1 << " value" <<endl;
						cin >> Value;
						MyQ.enQueue(Value);
					}
					break;
			} 
			cout << "All elements of my queue: "<<endl;
			MyQ.displayQueue();
			cout << endl <<"Enter the finding value: "<<endl;
			cin >> FindValue;
			MyQ.findQueue(FindValue);
			cout<< endl <<"Enter the number of times to delete value: " << endl;
			cin>> DelTime;
			for(int i = 0; i < DelTime; i++)
			{
				MyQ.deQueue();	
			}
			cout<<endl <<"My queue after deleting " << DelTime << " time:";
			MyQ.displayQueue();	
		}
	}while(n == 0);   	   
	return 0;
}
