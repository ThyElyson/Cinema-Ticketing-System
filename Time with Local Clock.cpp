#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	
//Initialization
	
	time_t CTime; //time_t is a Variable similar to int, char, bool [time_t (variable)]
	tm * NTime; // tm* is a Time Structure that allows to show the containing Calendar Time [tm * (variable)]
	char Date[100]; // Storage Size - Array
	
	
	
//Main Syntax
	
	time(&CTime); // time purpose is to get the Current Time Today [time(&Variable)
	NTime = localtime(&CTime); // Converts time_t to the chosen Time Structure
	
	strftime(Date,100, "%B %d, %Y %I:%M:%S %p", NTime); //strftime: String to Time Array: (Variable, ???, "String, tm*variable)
	
	cout << Date << endl; // The Current Time 
	
	return 0;
}
