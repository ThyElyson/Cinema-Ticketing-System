#include <iostream>
using namespace std;

void not_so_welcome_screen(), cls(), show_poster();

int main()
{
	not_so_welcome_screen();
	show_poster();
}

void cls()
{
	system("cls");
}
void not_so_welcome_screen()
{
	cls();
	int buffer;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t";
	cout << "Please make the console fullscreen" << endl;
	cout << "\t\t\t\t\t     ";
	cout << "Enter \'1\' to continue..." << endl;
	cout << "\t\t\t\t\t\t\t";
	cin >> buffer;
	if (buffer == 1)
		buffer = 0;
	else
		buffer = 0;
}
void show_poster()
{
	cls();
	int movie;
	cout << "\n\n  " << "";
	cout << "\n\n  " << "________________________________________________     ________________________________________________     ________________________________________________" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "|                                              |     |                                              |     |                                              |" << endl;
	cout <<     "  " << "------------------------------------------------     ------------------------------------------------     ------------------------------------------------" << endl;

	cin >> movie;
}
