#include <iostream>
using namespace std; // TODO: add an input checker, make separate functions for every genre & age type, finish menu inputs

void cls(), init_varb(), rset_varb(), npt_ckr(), shw_wlc_scr(), shw_bye_scr(), shw_ttl(), shw_int_pos(), mnu_fil(), shw_sts();
int mov_npt, tim_npt, wlc_npt;
string wlc_msg, bye_msg, mov_one, mov_two, mov_tre, gry(string gry_npt), bld_und_blk(string bld_und_blk_npt), itl(string itl_npt);
bool sys_stt;
char mnu_chc, flt_gnr, flt_age;

int main()
{
	
	
	init_varb();
	
	do
	{
		shw_wlc_scr();
		while (wlc_npt != 0)
		{
			shw_ttl();
			shw_int_pos();
			do
			{
				mnu_fil();
			} while (mnu_chc =! 'P');
			wlc_npt = 0;
		}
		shw_bye_scr();
		rset_varb();
	} while (sys_stt == false);
	
	return 0;
}

void cls()
{
	system("cls");
}
string gry(string gry_npt)
{
	return "\033[0m\033[90m" + gry_npt + "\033[0m";
}
string bld_und_blk(string bld_und_blk_npt)
{
	return "\033[1m\033[4m\033[5m" + bld_und_blk_npt + "\033[0m";
}
string itl(string itl_npt)
{
	return "\033[3m" + itl_npt + "\033[0m";
}
void init_varb()
{
	wlc_msg = "Please use " + bld_und_blk("fullscreen") + " before entering";
	bye_msg = "Thank you for visiting Retarded Cinema";
	mov_one = "Happy Tree Friends";
	mov_two = "The Amazing World of Gumball";
	mov_tre = "The Martian";
}
void rset_varb()
{
	wlc_msg = "You can still edit your reservations";
	bye_msg = "Are you sure you are done finalizing?";
}
void shw_wlc_scr()
{
	cls();
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ";
	cout << wlc_msg << endl;
	cout << "\t\t\t\t\t\t  " << "Press \'1\' to enter:" << "\n\t\t\t\t\t\t\t   ";
	cin >> wlc_npt;
	if (wlc_npt == 1)
		wlc_npt = 1;
	else
		wlc_npt = 0;
}
void shw_bye_scr()
{
	cls();
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t     ";
	cout << bye_msg << endl;
	cout << "\t\t\t\t\t\t\t\t      " << "Press \'1\' to leave:" << "\n\t\t\t\t\t\t\t\t\t       ";
	cin >> sys_stt;
	if (sys_stt == 1)
		sys_stt = 1;
	else 
		sys_stt = 0;
}
void shw_ttl()
{
	cls();
	cout << "\n\n";
	cout << "\t  " << " ########  ######## ########    ###    ########  ########  ######## ########         ######  #### ##    ## ######## ##     ##    ###   " << endl;
	cout << "\t  " << " ##     ## ##          ##      ## ##   ##     ## ##     ## ##       ##     ##       ##    ##  ##  ###   ## ##       ###   ###   ## ##  " << endl;
	cout << "\t  " << " ##     ## ##          ##     ##   ##  ##     ## ##     ## ##       ##     ##       ##        ##  ####  ## ##       #### ####  ##   ## " << endl;
	cout << "\t  " << " ########  ######      ##    ##     ## ########  ##     ## ######   ##     ##       ##        ##  ## ## ## ######   ## ### ## ##     ##" << endl;
	cout << "\t  " << " ##   ##   ##          ##    ######### ##   ##   ##     ## ##       ##     ##       ##        ##  ##  #### ##       ##     ## #########" << endl;
	cout << "\t  " << " ##    ##  ##          ##    ##     ## ##    ##  ##     ## ##       ##     ##       ##    ##  ##  ##   ### ##       ##     ## ##     ##" << endl;
	cout << "\t  " << " ##     ## ########    ##    ##     ## ##     ## ########  ######## ########         ######  #### ##    ## ######## ##     ## ##     ##" << endl;
}
void shw_int_pos()
{
	cout << "\n\n" << "\t\t  " << "_______________________________" << "             " << "_______________________________" << "             " << "_______________________________" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|          G Comedy           |" << "             " << "|          G Action           |" << "             " << "|         PG Comedy           |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
	cout           << "\t\t  " << "-------------------------------" << "             " << "-------------------------------" << "             " << "-------------------------------" << endl;
	cout << "\n\n\n";
	cout << "          " << "Enter \'A\' -- " + itl(mov_one)           + "     " << "\'B\' -- " + itl(mov_two)            + "     " << "\'C\' -- " + itl(mov_tre) << "\n" << endl;
	cout << "          " << "Enter \'G\' -- " + itl("Genre Filtering") + "     " << "\'E\' -- " + itl("Edit reservation") + "     " << "\'R\' -- " + itl("reset screen")  << "\n\n\t\t";
	cin >> mnu_chc;
}

void mnu_fil()
{
	switch (mnu_chc)
	{
		case 'a':
		case 'A':
			
			mnu_chc = 'P';
			break;
		case 'b':
		case 'B':
			
			mnu_chc = 'P';
			break;
		case 'c':
		case 'C':
			
			mnu_chc = 'P';
			break;
		case 'g':
		case 'G':
			break;
		case 'e':
		case 'E':
			break;
		case 'r':
		case 'R':
			cls();
			shw_ttl();
			shw_int_pos();
			break;
		default:
			break;
				}
}
void shw_sts()
{
	cout<<"        (=)     (=)     (=)     (=)          (=)     (=)     (=)     (=)     (=)     (=)     (=)     (=)     (=)          (=)     (=)     (=)     (=)"<<endl;
	cout<<"       q| |p   q| |p   q| |p   q| |p        q| |p   q| |p   q| |p   q| |p   q| |p   q| |p   q| |p   q| |p   q| |p        q| |p   q| |p   q| |p   q| |p"<<endl;
	cout<<"       M---M   M---M   M---M   M---M        M---M   M---M   M---M   M---M   M---M   M---M   M---M   M---M   M---M        M---M   M---M   M---M   M---M"<<endl<<endl;
}














































