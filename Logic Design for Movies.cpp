#include <iostream>
using namespace std;

int main ()
{
	int time;
	char movie; 
	

do
{
	cout <<"Choose which Movie would you like to Watch? (A-C)\n\nEnter: ";
	cin >> movie;
	cout <<endl <<endl;
	toupper(movie);
	
	switch(movie)
		{
			case ('A'):case('a'):
				{
				do
				{
					cout <<"Now Choose what Time would you like to Watch your preferred Movie? (1-4)\n\nEnter: ";
					cin >> time;
					cout <<endl <<endl;

					
					switch(time)
						{
							case (1):
								cout <<"Morning A";
							break;
							case (2):
								cout <<"Noon A";
							break;
							case (3):
								cout <<"Afternoon A";
							break;
							case (4):
								cout <<"Evening A";
							break;
							default:
								cout <<"Error";
							break;
						}
				}while (time !=1 && time !=2 && time !=3 && time !=4);
				}
			break;
			case ('B'):case('b'):
				{
				do
				{
					cout <<"Now Choose what Time would you like to Watch your preferred Movie? (1-4)\n\nEnter: ";
					cin >> time;
					cout <<endl <<endl;

					
					switch(time)
						{
							case (1):
								cout <<"Morning B";
								break;
							case (2):
								cout <<"Noon B";
								break;
							case (3):
								cout <<"Afternoon B";
								break;
							case (4):
								cout <<"Evening B";
								break;
							default:
								time = 0;
								cout <<"Error";
								break;
						}
				}while (time !=1 && time !=2 && time !=3 && time !=4);
				}
			break;
			case ('C'):case('c'):
				{
				do
				{
					cout <<"Now Choose what Time would you like to Watch your preferred Movie? (1-4)\n\nEnter: ";
					cin >> time;
					cout <<endl <<endl;

					
					switch(time)
						{
							case (1):
								cout <<"Morning C";
							break;
							case (2):
								cout <<"Noon C";
							break;
							case (3):
								cout <<"Afternoon C";
							break;
							case (4):
								cout <<"Evening C";
							break;
							default:
								cout <<"Error";
							break;
						}
				}while (time !=1 && time !=2 && time !=3 && time !=4);
				}
			break;				
			default:
				cout <<"Error Please Try Again!!!\n\n\n";
			break;
		}	
} while (movie !='A'&& movie !='a'&& movie !='B'&& movie !='b'&& movie !='C'&& movie !='c');
}
