#include<iostream>
#include<string>
using namespace std;

const int MT = 100;
class Task
{
	private:
		string t[MT];
		bool comp[MT];
		int cnt;
	public:
		Task()
		{
			cnt = 0;
		}
		void add(string task);
		void show();
		void mark(int num);
		void remove(int num);
};

int main()
{
	int ch, n;
	Task tdl;
	
	do
	{
		cout<<"\n\n\n--------------TO-DO-LIST--------------"<<endl;
		cout<<"1 - Add a Task"<<endl;
		cout<<"2 - Remove a Task"<<endl;
		cout<<"3 - View all the Tasks"<<endl;
		cout<<"4 - Mark Task as Completed"<<endl;
		cout<<"5 - Exit"<<endl;
		cout<<"--------------------------------------"<<endl<<endl<<endl;
		cout<<"Enter Your Choice : ";
		cin>>ch;
		cin.ignore();
		
		switch(ch)
		{
			case 3:
				tdl.show();
				break;
			case 4:
				cout<<"Enter the Task Number to be Marked as Completed : ";
				cin>>n;
				tdl.mark(n);
				break;
			case 2:
				cout<<"Enter the Task Number to be Removed : ";
				cin>>n;
				tdl.remove(n);
				break;
			case 1:
				string task;
                cout << "Enter the task: ";
                getline(cin, task);
                tdl.add(task);
				break;
		}
	}while(ch != 5);
	return 0;
}

void Task::show()
{
	if(cnt == 0)
	{
		cout<<"There isn't Any Task in the List"<<endl;
		return;
	}
	for(int i = 0;i<cnt;i++)
	{
		string st = comp[i] ? "Completed" : "Pending";
		cout<<i+1<<".) "<<t[i]<<" : "<<st<<endl;
	}
}
void Task::add(string task)
{
	if(cnt < MT)
	{
		t[cnt] = task;
		comp[cnt] = false;
		cnt++;
		cout<<"'"<<task<<"' Added !!"<<endl;
	}
	else
		cout<<"Aaj ke liye itna Task kaafi Hai"<<endl;
}
void Task::mark(int num)
{
	if(num > 0 && num <=cnt)
	{
		comp[num-1] = true;
		cout<<"Task '"<<t[num-1]<<"' has been Marked as Completed"<<endl;
	}
	else
	cout<<"Invalid Task Number"<<endl;
}
void Task::remove(int num)
{
	if(num >0 && num<=cnt)
	{
		cout<<"Task '"<<t[num-1]<<"' Removed!!"<<endl;
		for(int i = num-1; i<cnt;i++)
		{
			t[i] = t[i+1];
			comp[i] = comp[i+1];
		}
		cnt--;
	}
	else
	cout<<"Invalid Task Number"<<endl;
}
