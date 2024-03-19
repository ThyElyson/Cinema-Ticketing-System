#include <iostream>
using namespace std;

//Variables
int y;
char x;
int seats[5][8]=
{
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0}	
};

//Pre-Functions
int row_conv(char row_input), column_conv(int column_input);
void reserve_seat(int seats[5][8]), show_seats();


//Main Function
int main()
{
	show_seats();
	reserve_seat(seats);
	return 0;
}

//Post-Functions
int row_conv(char row_input)
{
	switch(row_input)
	{
		case 'a':
		case 'A':
			return 0;
			break;
		case 'b':
		case 'B':
			return 1;
			break;
		case 'c':
		case 'C':
			return 2;
			break;
		case 'd':
		case 'D':
			return 3;
			break;
		case 'e':
		case 'E':
			return 4;
			break;
		default:
			cin >> row_input;
			row_conv(row_input);
			break;
	}
}
int column_conv(int column_input)
{
	return column_input - 1;
}
void reserve_seat(int seats[5][8])
{
	cout << "Enter your row (char): ";
	cin >> x;
	cout << "Enter your column (int): ";
	cin >> y;
	seats[row_conv(x)][column_conv(y)] = {1};
}
void show_seats()
{
	cout << "\t" << endl;
}















