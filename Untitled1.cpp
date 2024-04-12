#include <iostream>
using namespace std;

int main()
{
	int num;
	char input;
	while (true)
	{
		cin >> input;
		cin >> num;
		/*for (int i=1; i<num+1; i++)
		{*/
			cout << "cout << \"       \" + clr" << input << num-4 << " + \" (=)   \" + rst_clr + clr" << input << num-3 << " + \"  (=)   \" + rst_clr + clr" << input << num-2 << " + \"  (=)   \" + rst_clr + clr" << input << num-1 << " + \"  (=)   \" + rst_clr + clr" << input << num << " + \"  (=)   \" + rst_clr << endl;" << endl;
			cout << "cout << \"   A   \" + clr" << input << num-4 << " + \"q| |p  \" + rst_clr + clr" << input << num-3 << " + \" q| |p  \" + rst_clr + clr" << input << num-2 << " + \" q| |p  \" + rst_clr + clr" << input << num-1 << " + \" q| |p  \" + rst_clr + clr" << input << num << " + \" q| |p  \" + rst_clr << endl;" << endl;
			cout << "cout << \"       \" + clr" << input << num-4 << " + \"M---M  \" + rst_clr + clr" << input << num-3 << " + \" M---M  \" + rst_clr + clr" << input << num-2 << " + \" M---M  \" + rst_clr + clr" << input << num-1 << " + \" M---M  \" + rst_clr + clr" << input << num << " + \" M---M  \" + rst_clr << endl;" << endl;
		//}
		cout << "\n";
	}
}
