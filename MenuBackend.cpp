#include <iostream>
using namespace std;

void schedule_1();
void schedule_2();
void schedule_3();

int main ()
{
	float movie_input;
		cout<<" Movie 1                  Movie 2                  Movie 3"<<endl<<endl;
		cin>>movie_input;
		system("cls");
if (movie_input==1)
	{
			schedule_1();
	}
else if (movie_input==2)
	{
			schedule_2();
	}
else if (movie_input==3)
	{
			schedule_3();
	}
else
	{
	do
	{
			cout<<" Movie 1                  Movie 2                  Movie 3"<<endl<<endl;
			cout<<"\033[31;1m"<<"There is an error to your input. Try typing the number of your selected movie"<<"\033[0m"<<endl<<endl;
			cin>>movie_input;
			system("cls");
	}
	while (movie_input!=1&&movie_input!=2&&movie_input!=3);
	if (movie_input==1)
	{
			schedule_1();
	}
	else if (movie_input==2)
	{
			schedule_2();
	}
	else if (movie_input==3)
	{
			schedule_3();
	}
	}
}

void schedule_1()
{
		float time;
				cout<<" Movie 1                  Movie 2                  Movie 3"<<endl;
				cout<<"(1. Start - End)"<<endl;
				cout<<"(2. Start - End)"<<endl;
				cout<<"(3. Start - End)"<<endl;
				cout<<"(4. Start - End)"<<endl;
				cout<<endl;
				cin>>time;
				system("cls");
				
				if (time!=1&&time!=2&&time!=3&&time!=4)
				{
				do
				{
				
					cout<<" Movie 1                  Movie 2                  Movie 3"<<endl;
					cout<<"(1. Start - End)"<<endl;
					cout<<"(2. Start - End)"<<endl;
					cout<<"(3. Start - End)"<<endl;
					cout<<"(4. Start - End)"<<endl;
				cout<<endl;
				cout<<"\033[31;1m"<<"There is an error to your input. Try typing the letter of your selected schedule"<<"\033[0m"<<endl<<endl;
				cin>>time;
				system("cls");
				}
				while (time!=1&&time!=2&&time!=3&&time!=4);
				}
				else
				{
					system("cls");
				}
}

void schedule_2()
{
	float time;
				cout<<" Movie 1                  Movie 2                  Movie 3"<<endl;
				cout<<"                         (1. Start - End)"<<endl;
				cout<<"                         (2. Start - End)"<<endl;
				cout<<"                         (3. Start - End)"<<endl;
				cout<<"                         (4. Start - End)"<<endl;
				cout<<endl;
				cin>>time;
				system("cls");

				if (time!=1&&time!=2&&time!=3&&time!=4)
				{
				do
				{
				
					cout<<" Movie 1                  Movie 2                  Movie 3"<<endl;
					cout<<"                         (1. Start - End)"<<endl;
					cout<<"                         (2. Start - End)"<<endl;
					cout<<"                         (3. Start - End)"<<endl;
					cout<<"                         (4. Start - End)"<<endl;
				cout<<endl;
				cout<<"\033[31;1m"<<"There is an error to your input. Try typing the letter of your selected schedule"<<"\033[0m"<<endl<<endl;
				cin>>time;
				system("cls");
				}
				while (time!=1&&time!=2&&time!=3&&time!=4);
				}
				else
				{
					system("cls");
				}
}

void schedule_3()			
{
	float time;
				cout<<" Movie 1                  Movie 2                  Movie 3"<<endl;
				cout<<"                                                  (1. Start - End)"<<endl;
				cout<<"                                                  (2. Start - End)"<<endl;
				cout<<"                                                  (3. Start - End)"<<endl;
				cout<<"                                                  (4. Start - End)"<<endl;
				cout<<endl;
				cin>>time;
				system("cls");

				if (time!=1&&time!=2&&time!=3&&time!=4)
				{
				do
				{
				
					cout<<" Movie 1                  Movie 2                  Movie 3"<<endl;
					cout<<"                                                  (1. Start - End)"<<endl;
					cout<<"                                                  (2. Start - End)"<<endl;
					cout<<"                                                  (3. Start - End)"<<endl;
					cout<<"                                                  (4. Start - End)"<<endl;
				cout<<endl;
				cout<<"\033[31;1m"<<"There is an error to your input. Try typing the letter of your selected schedule"<<"\033[0m"<<endl<<endl;
				cin>>time;
				system("cls");
				}
				while (time!=1&&time!=2&&time!=3&&time!=4);
				}
				else
				{
					system("cls");
				}
}

