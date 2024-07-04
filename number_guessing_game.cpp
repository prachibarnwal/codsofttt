#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int ch;
		
	do
	{
		cout<<"\n\n\n1 - Play the Number Guessing Game"<<endl;
		cout<<"2 - Exit"<<endl;
		cout<<"Enter your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"------------------------RULES------------------------"<<endl;
				cout<<"You'll get 7 chances to guess the Number !"<<endl;
				cout<<"You'll LOSE the game after 5 chances"<<endl;
				cout<<"-----------------------------------------------------"<<endl;
				int num = rand() % 100;
				int cnt;
				for(int i = 0;i<7;i++)
				{
					cout<<"\nWhat's Your Guess : ";
					int n;
					cnt = 0;
					cin>>n;
					cout<<endl;
					if(n == num)
					{
						cout<<"You Guessed the Correct Number !!!"<<endl;
						cnt++;
						break;
					}
					else if(n > num)
						cout<<"You Chose a Greater Number >_<"<<endl;
					else if(n < num)
						cout<<"Actual Number is More than your Guess"<<endl;
				}
				if(cnt == 0)
				{
					cout<<"\nYou Lose the Game !!"<<endl;
					cout<<"The Actual Number was : "<<num<<endl<<endl;
				}
				else
				cout<<"You Won the Game !!"<<endl;
				break;
		}
	}while(ch != 2);
	return 0;
}
