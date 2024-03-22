#include <iostream>
using namespace std;

int main()
{
	int chairs[5]={0, 0, 0, 0, 0};
	
	bool state=true;
	string clra1, clra2, rst="\033[0m", chair_input, color_input;
	
	do
	{
		system("cls");
		cout << "\n\n\n";
		cout << clra1 + " (==) " + rst + clra2 + " (==) " + rst << endl;
		cout << clra1 + "q|  |p" + rst + clra2 + "q|  |p" + rst << endl;
		cout << clra1 + "M----M" + rst + clra2 + "M----M" + rst << endl;
		cout << "\n\n\n";
		cout << "Type the chair name (a1 or a2): ";
		cin >> chair_input;
		cout << "\n\n" << "Type the color name (red or blue): ";
		cin >> color_input;
		if (chair_input == "a1")
		{
			if (color_input == "red")
				clra1 = "\033[31m";
			else if (color_input == "blue")
				clra1 = "\033[34m";
		} 
		else if (chair_input == "a2")
		{
			if (color_input == "red")
				clra2 = "\033[31m";
			else if (color_input == "blue")
				clra2 = "\033[34m";
		}
		
	} while (state == true);
}
