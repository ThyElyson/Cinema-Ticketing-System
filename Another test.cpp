#include <iostream>
using namespace std;

int main()
{
	char i1, i2, i3, i4, i5, kek;
	int num;
	cin >> i1;
	cin >> i2;
	cin >> i3;
	cin >> i4;
	cin >> i5;
	cin >> num;
	
	for (int i=1; i != 6; i++)
	{
		if (i == 1)
			kek = i1;
		else if (i == 2)
			kek = i2;
		else if (i == 3)
			kek = i3;
		else if (i == 4)
			kek = i4;
		else if (i == 5)
			kek = i5;
		for (int j=1; j != 6; j++)
		{
			cout << "else if (seats_status[" << i-1 << "][" << j-1 << "] == 2)" << endl;
			cout << "{" << endl;
			cout << "	choices = \"Seat " << kek << j << " has already been reserved. \'CON\' -- Confirm, \'RET\' -- Return, \'REM\' -- Remove\";" << endl;
			cout << "}" << endl;
		}
	}
}
