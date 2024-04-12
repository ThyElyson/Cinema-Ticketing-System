#include <iostream>
using namespace std;

int main()
{
	string input, clr;
	while (true)
	{
		system("cls");
		cout << clr << "Copper" << endl;
		cin >> input;
		if (input == "red")
			clr = "\033[33m";
		else if (input == "white")
			clr = "\033[0m";
		else if (input == "idk")
			clr = "\033[5m";
		
	}
}
