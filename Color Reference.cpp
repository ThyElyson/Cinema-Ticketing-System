#include <iostream>
using namespace std;

int main ()
{
	cout<<"\033[31;1m"<<"Hello! World."<<endl; //Red
	cout<<"\033[31m"<<"Hello! World."<<endl;
	cout<<"\033[33m"<<"Hello! World."<<endl; //Yellow
	cout<<"\033[0m"<<"Hello! World."<<endl; //White/Reset
	cout<<"\033[32m"<<"Hello! World."<<endl; //Green
	cout<<"\033[34m"<<"Hello! World."<<endl; //Blue
	cout<<"\033[90m"<<"Hello! World."<<endl; //Grey
	cout<<"\033[35m"<<"Hello! World."<<endl; //Violet
	cout<<"\033[36m"<<"Hello! World."<<endl; //Light Blue
	
} 
