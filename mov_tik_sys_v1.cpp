#include <iostream>
using namespace std; // TODO: add an input checker, make separate functions for every genre & age type, finish menu inputs, color inputer

void cls(), init_varb(), rset_varb(), npt_ckr(), shw_wlc_scr(), shw_bye_scr(), shw_ttl(), shw_int_pos(), mnu_fil(), shw_sts();
int mov_npt, tim_npt, wlc_npt;
string wlc_msg, bye_msg, mov_one, mov_two, mov_tre, rst_clr="\033[0m", sts_chc, gry(string gry_npt), bld_und_blk(string bld_und_blk_npt), itl(string itl_npt);
string clra1, clra2, clra3, clra4, clra5, clra6, clra7, clra8, clra9, clra10, clra11, clra12, clra13, clra14, clra15, clra16, clra17, clrb1, clrb2, clrb3, clrb4, clrb5, clrb6, clrb7, clrb8, clrb9, clrb10, clrb11, clrb12, clrb13, clrb14, clrb15, clrb16, clrb17, clrc1, clrc2, clrc3, clrc4, clrc5, clrc6, clrc7, clrc8, clrc9, clrc10, clrc11, clrc12, clrc13, clrc14, clrc15, clrc16, clrc17, clrd1, clrd2, clrd3, clrd4, clrd5, clrd6, clrd7, clrd8, clrd9, clrd10, clrd11, clrd12, clrd13, clrd14, clrd15, clrd16, clrd17, clre1, clre2, clre3, clre4, clre5, clre6, clre7, clre8, clre9, clre10, clre11, clre12, clre13, clre14, clre15, clre16, clre17, clrf1, clrf2, clrf3, clrf4, clrf5, clrf6, clrf7, clrf8, clrf9, clrf10, clrf11, clrf12, clrf13, clrf14, clrf15, clrf16, clrf17, clrg1, clrg2, clrg3, clrg4, clrg5, clrg6, clrg7, clrg8, clrg9, clrg10, clrg11, clrg12, clrg13, clrg14, clrg15, clrg16, clrg17;
bool sys_stt;
char mnu_chc, flt_gnr, flt_age;

int main()
{
	/*
	while (true)
	{
		init_varb();
		shw_sts();
	}
	*/
	
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
			shw_sts();
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
	cls();
	cout << "|EXIT|         |                                                                                                                               |      |EXIT|"<<endl;
	cout << "|    |         |                                                                                                                               |      |    |"<<endl;
	cout << "|    |         |_______________________________________________________________________________________________________________________________|      |    |"<<endl;
	cout << "|____|                                                                                                                                                |____|"<<endl;
	cout << "\n\n";
	
	cout << "       " + clra1 + " (=)   " + rst_clr + clra2 + "  (=)   " + rst_clr + clra3 + "  (=)   " + rst_clr + clra4 + "  (=)      " + rst_clr + clra5 + "    (=)   " + rst_clr + clra6 + "  (=)   " + rst_clr + clra7 + "  (=)   " + rst_clr + clra8 + "  (=)   " + rst_clr + clra9 + "  (=)   " + rst_clr + clra10 + "  (=)   " + rst_clr + clra11 + "  (=)   " + rst_clr + clra12 + "  (=)   " + rst_clr + clra13 + "  (=)       " + rst_clr + clra14 + "   (=)   " + rst_clr + clra15 + "  (=)   " + rst_clr + clra16 + "  (=)   " + rst_clr + clra17 + "  (=) "<<endl;
	cout << "       " + clra1 + "q| |p  " + rst_clr + clra2 + " q| |p  " + rst_clr + clra3 + " q| |p  " + rst_clr + clra4 + " q| |p     " + rst_clr + clra5 + "   q| |p  " + rst_clr + clra6 + " q| |p  " + rst_clr + clra7 + " q| |p  " + rst_clr + clra8 + " q| |p  " + rst_clr + clra9 + " q| |p  " + rst_clr + clra10 + " q| |p  " + rst_clr + clra11 + " q| |p  " + rst_clr + clra12 + " q| |p  " + rst_clr + clra13 + " q| |p      " + rst_clr + clra14 + "  q| |p  " + rst_clr + clra15 + " q| |p  " + rst_clr + clra16 + " q| |p  " + rst_clr + clra17 + " q| |p"<<endl;
	cout << "       " + clra1 + "M---M  " + rst_clr + clra2 + " M---M  " + rst_clr + clra3 + " M---M  " + rst_clr + clra4 + " M---M     " + rst_clr + clra5 + "   M---M  " + rst_clr + clra6 + " M---M  " + rst_clr + clra7 + " M---M  " + rst_clr + clra8 + " M---M  " + rst_clr + clra9 + " M---M  " + rst_clr + clra10 + " M---M  " + rst_clr + clra11 + " M---M  " + rst_clr + clra12 + " M---M  " + rst_clr + clra13 + " M---M      " + rst_clr + clra14 + "  M---M  " + rst_clr + clra15 + " M---M  " + rst_clr + clra16 + " M---M  " + rst_clr + clra17 + " M---M"<<endl<<endl;	
	cout << "       " + clrb1 + " (=)   " + rst_clr + clrb2 + "  (=)   " + rst_clr + clrb3 + "  (=)   " + rst_clr + clrb4 + "  (=)      " + rst_clr + clrb5 + "    (=)   " + rst_clr + clrb6 + "  (=)   " + rst_clr + clrb7 + "  (=)   " + rst_clr + clrb8 + "  (=)   " + rst_clr + clrb9 + "  (=)   " + rst_clr + clrb10 + "  (=)   " + rst_clr + clrb11 + "  (=)   " + rst_clr + clrb12 + "  (=)   " + rst_clr + clrb13 + "  (=)       " + rst_clr + clrb14 + "   (=)   " + rst_clr + clrb15 + "  (=)   " + rst_clr + clrb16 + "  (=)   " + rst_clr + clrb17 + "  (=) "<<endl;
	cout << "       " + clrb1 + "q| |p  " + rst_clr + clrb2 + " q| |p  " + rst_clr + clrb3 + " q| |p  " + rst_clr + clrb4 + " q| |p     " + rst_clr + clrb5 + "   q| |p  " + rst_clr + clrb6 + " q| |p  " + rst_clr + clrb7 + " q| |p  " + rst_clr + clrb8 + " q| |p  " + rst_clr + clrb9 + " q| |p  " + rst_clr + clrb10 + " q| |p  " + rst_clr + clrb11 + " q| |p  " + rst_clr + clrb12 + " q| |p  " + rst_clr + clrb13 + " q| |p      " + rst_clr + clrb14 + "  q| |p  " + rst_clr + clrb15 + " q| |p  " + rst_clr + clrb16 + " q| |p  " + rst_clr + clrb17 + " q| |p"<<endl;
	cout << "       " + clrb1 + "M---M  " + rst_clr + clrb2 + " M---M  " + rst_clr + clrb3 + " M---M  " + rst_clr + clrb4 + " M---M     " + rst_clr + clrb5 + "   M---M  " + rst_clr + clrb6 + " M---M  " + rst_clr + clrb7 + " M---M  " + rst_clr + clrb8 + " M---M  " + rst_clr + clrb9 + " M---M  " + rst_clr + clrb10 + " M---M  " + rst_clr + clrb11 + " M---M  " + rst_clr + clrb12 + " M---M  " + rst_clr + clrb13 + " M---M      " + rst_clr + clrb14 + "  M---M  " + rst_clr + clrb15 + " M---M  " + rst_clr + clrb16 + " M---M  " + rst_clr + clrb17 + " M---M"<<endl<<endl;	
	cout << "       " + clrc1 + " (=)   " + rst_clr + clrc2 + "  (=)   " + rst_clr + clrc3 + "  (=)   " + rst_clr + clrc4 + "  (=)      " + rst_clr + clrc5 + "    (=)   " + rst_clr + clrc6 + "  (=)   " + rst_clr + clrc7 + "  (=)   " + rst_clr + clrc8 + "  (=)   " + rst_clr + clrc9 + "  (=)   " + rst_clr + clrc10 + "  (=)   " + rst_clr + clrc11 + "  (=)   " + rst_clr + clrc12 + "  (=)   " + rst_clr + clrc13 + "  (=)       " + rst_clr + clrc14 + "   (=)   " + rst_clr + clrc15 + "  (=)   " + rst_clr + clrc16 + "  (=)   " + rst_clr + clrc17 + "  (=) "<<endl;
	cout << "       " + clrc1 + "q| |p  " + rst_clr + clrc2 + " q| |p  " + rst_clr + clrc3 + " q| |p  " + rst_clr + clrc4 + " q| |p     " + rst_clr + clrc5 + "   q| |p  " + rst_clr + clrc6 + " q| |p  " + rst_clr + clrc7 + " q| |p  " + rst_clr + clrc8 + " q| |p  " + rst_clr + clrc9 + " q| |p  " + rst_clr + clrc10 + " q| |p  " + rst_clr + clrc11 + " q| |p  " + rst_clr + clrc12 + " q| |p  " + rst_clr + clrc13 + " q| |p      " + rst_clr + clrc14 + "  q| |p  " + rst_clr + clrc15 + " q| |p  " + rst_clr + clrc16 + " q| |p  " + rst_clr + clrc17 + " q| |p"<<endl;
	cout << "       " + clrc1 + "M---M  " + rst_clr + clrc2 + " M---M  " + rst_clr + clrc3 + " M---M  " + rst_clr + clrc4 + " M---M     " + rst_clr + clrc5 + "   M---M  " + rst_clr + clrc6 + " M---M  " + rst_clr + clrc7 + " M---M  " + rst_clr + clrc8 + " M---M  " + rst_clr + clrc9 + " M---M  " + rst_clr + clrc10 + " M---M  " + rst_clr + clrc11 + " M---M  " + rst_clr + clrc12 + " M---M  " + rst_clr + clrc13 + " M---M      " + rst_clr + clrc14 + "  M---M  " + rst_clr + clrc15 + " M---M  " + rst_clr + clrc16 + " M---M  " + rst_clr + clrc17 + " M---M"<<endl<<endl;	
	cout << "       " + clrd1 + " (=)   " + rst_clr + clrd2 + "  (=)   " + rst_clr + clrd3 + "  (=)   " + rst_clr + clrd4 + "  (=)      " + rst_clr + clrd5 + "    (=)   " + rst_clr + clrd6 + "  (=)   " + rst_clr + clrd7 + "  (=)   " + rst_clr + clrd8 + "  (=)   " + rst_clr + clrd9 + "  (=)   " + rst_clr + clrd10 + "  (=)   " + rst_clr + clrd11 + "  (=)   " + rst_clr + clrd12 + "  (=)   " + rst_clr + clrd13 + "  (=)       " + rst_clr + clrd14 + "   (=)   " + rst_clr + clrd15 + "  (=)   " + rst_clr + clrd16 + "  (=)   " + rst_clr + clrd17 + "  (=) "<<endl;
	cout << "       " + clrd1 + "q| |p  " + rst_clr + clrd2 + " q| |p  " + rst_clr + clrd3 + " q| |p  " + rst_clr + clrd4 + " q| |p     " + rst_clr + clrd5 + "   q| |p  " + rst_clr + clrd6 + " q| |p  " + rst_clr + clrd7 + " q| |p  " + rst_clr + clrd8 + " q| |p  " + rst_clr + clrd9 + " q| |p  " + rst_clr + clrd10 + " q| |p  " + rst_clr + clrd11 + " q| |p  " + rst_clr + clrd12 + " q| |p  " + rst_clr + clrd13 + " q| |p      " + rst_clr + clrd14 + "  q| |p  " + rst_clr + clrd15 + " q| |p  " + rst_clr + clrd16 + " q| |p  " + rst_clr + clrd17 + " q| |p"<<endl;
	cout << "       " + clrd1 + "M---M  " + rst_clr + clrd2 + " M---M  " + rst_clr + clrd3 + " M---M  " + rst_clr + clrd4 + " M---M     " + rst_clr + clrd5 + "   M---M  " + rst_clr + clrd6 + " M---M  " + rst_clr + clrd7 + " M---M  " + rst_clr + clrd8 + " M---M  " + rst_clr + clrd9 + " M---M  " + rst_clr + clrd10 + " M---M  " + rst_clr + clrd11 + " M---M  " + rst_clr + clrd12 + " M---M  " + rst_clr + clrd13 + " M---M      " + rst_clr + clrd14 + "  M---M  " + rst_clr + clrd15 + " M---M  " + rst_clr + clrd16 + " M---M  " + rst_clr + clrd17 + " M---M"<<endl<<endl;	
	cout << "       " + clre1 + " (=)   " + rst_clr + clre2 + "  (=)   " + rst_clr + clre3 + "  (=)   " + rst_clr + clre4 + "  (=)      " + rst_clr + clre5 + "    (=)   " + rst_clr + clre6 + "  (=)   " + rst_clr + clre7 + "  (=)   " + rst_clr + clre8 + "  (=)   " + rst_clr + clre9 + "  (=)   " + rst_clr + clre10 + "  (=)   " + rst_clr + clre11 + "  (=)   " + rst_clr + clre12 + "  (=)   " + rst_clr + clre13 + "  (=)       " + rst_clr + clre14 + "   (=)   " + rst_clr + clre15 + "  (=)   " + rst_clr + clre16 + "  (=)   " + rst_clr + clre17 + "  (=) "<<endl;
	cout << "       " + clre1 + "q| |p  " + rst_clr + clre2 + " q| |p  " + rst_clr + clre3 + " q| |p  " + rst_clr + clre4 + " q| |p     " + rst_clr + clre5 + "   q| |p  " + rst_clr + clre6 + " q| |p  " + rst_clr + clre7 + " q| |p  " + rst_clr + clre8 + " q| |p  " + rst_clr + clre9 + " q| |p  " + rst_clr + clre10 + " q| |p  " + rst_clr + clre11 + " q| |p  " + rst_clr + clre12 + " q| |p  " + rst_clr + clre13 + " q| |p      " + rst_clr + clre14 + "  q| |p  " + rst_clr + clre15 + " q| |p  " + rst_clr + clre16 + " q| |p  " + rst_clr + clre17 + " q| |p"<<endl;
	cout << "       " + clre1 + "M---M  " + rst_clr + clre2 + " M---M  " + rst_clr + clre3 + " M---M  " + rst_clr + clre4 + " M---M     " + rst_clr + clre5 + "   M---M  " + rst_clr + clre6 + " M---M  " + rst_clr + clre7 + " M---M  " + rst_clr + clre8 + " M---M  " + rst_clr + clre9 + " M---M  " + rst_clr + clre10 + " M---M  " + rst_clr + clre11 + " M---M  " + rst_clr + clre12 + " M---M  " + rst_clr + clre13 + " M---M      " + rst_clr + clre14 + "  M---M  " + rst_clr + clre15 + " M---M  " + rst_clr + clre16 + " M---M  " + rst_clr + clre17 + " M---M"<<endl<<endl;	
	cout << "       " + clrf1 + " (=)   " + rst_clr + clrf2 + "  (=)   " + rst_clr + clrf3 + "  (=)   " + rst_clr + clrf4 + "  (=)      " + rst_clr + clrf5 + "    (=)   " + rst_clr + clrf6 + "  (=)   " + rst_clr + clrf7 + "  (=)   " + rst_clr + clrf8 + "  (=)   " + rst_clr + clrf9 + "  (=)   " + rst_clr + clrf10 + "  (=)   " + rst_clr + clrf11 + "  (=)   " + rst_clr + clrf12 + "  (=)   " + rst_clr + clrf13 + "  (=)       " + rst_clr + clrf14 + "   (=)   " + rst_clr + clrf15 + "  (=)   " + rst_clr + clrf16 + "  (=)   " + rst_clr + clrf17 + "  (=) "<<endl;
	cout << "       " + clrf1 + "q| |p  " + rst_clr + clrf2 + " q| |p  " + rst_clr + clrf3 + " q| |p  " + rst_clr + clrf4 + " q| |p     " + rst_clr + clrf5 + "   q| |p  " + rst_clr + clrf6 + " q| |p  " + rst_clr + clrf7 + " q| |p  " + rst_clr + clrf8 + " q| |p  " + rst_clr + clrf9 + " q| |p  " + rst_clr + clrf10 + " q| |p  " + rst_clr + clrf11 + " q| |p  " + rst_clr + clrf12 + " q| |p  " + rst_clr + clrf13 + " q| |p      " + rst_clr + clrf14 + "  q| |p  " + rst_clr + clrf15 + " q| |p  " + rst_clr + clrf16 + " q| |p  " + rst_clr + clrf17 + " q| |p"<<endl;
	cout << "       " + clrf1 + "M---M  " + rst_clr + clrf2 + " M---M  " + rst_clr + clrf3 + " M---M  " + rst_clr + clrf4 + " M---M     " + rst_clr + clrf5 + "   M---M  " + rst_clr + clrf6 + " M---M  " + rst_clr + clrf7 + " M---M  " + rst_clr + clrf8 + " M---M  " + rst_clr + clrf9 + " M---M  " + rst_clr + clrf10 + " M---M  " + rst_clr + clrf11 + " M---M  " + rst_clr + clrf12 + " M---M  " + rst_clr + clrf13 + " M---M      " + rst_clr + clrf14 + "  M---M  " + rst_clr + clrf15 + " M---M  " + rst_clr + clrf16 + " M---M  " + rst_clr + clrf17 + " M---M"<<endl<<endl;	
	cout << "       " + clrg1 + " (=)   " + rst_clr + clrg2 + "  (=)   " + rst_clr + clrg3 + "  (=)   " + rst_clr + clrg4 + "  (=)      " + rst_clr + clrg5 + "    (=)   " + rst_clr + clrg6 + "  (=)   " + rst_clr + clrg7 + "  (=)   " + rst_clr + clrg8 + "  (=)   " + rst_clr + clrg9 + "  (=)   " + rst_clr + clrg10 + "  (=)   " + rst_clr + clrg11 + "  (=)   " + rst_clr + clrg12 + "  (=)   " + rst_clr + clrg13 + "  (=)       " + rst_clr + clrg14 + "   (=)   " + rst_clr + clrg15 + "  (=)   " + rst_clr + clrg16 + "  (=)   " + rst_clr + clrg17 + "  (=) "<<endl;
	cout << "       " + clrg1 + "q| |p  " + rst_clr + clrg2 + " q| |p  " + rst_clr + clrg3 + " q| |p  " + rst_clr + clrg4 + " q| |p     " + rst_clr + clrg5 + "   q| |p  " + rst_clr + clrg6 + " q| |p  " + rst_clr + clrg7 + " q| |p  " + rst_clr + clrg8 + " q| |p  " + rst_clr + clrg9 + " q| |p  " + rst_clr + clrg10 + " q| |p  " + rst_clr + clrg11 + " q| |p  " + rst_clr + clrg12 + " q| |p  " + rst_clr + clrg13 + " q| |p      " + rst_clr + clrg14 + "  q| |p  " + rst_clr + clrg15 + " q| |p  " + rst_clr + clrg16 + " q| |p  " + rst_clr + clrg17 + " q| |p"<<endl;
	cout << "       " + clrg1 + "M---M  " + rst_clr + clrg2 + " M---M  " + rst_clr + clrg3 + " M---M  " + rst_clr + clrg4 + " M---M     " + rst_clr + clrg5 + "   M---M  " + rst_clr + clrg6 + " M---M  " + rst_clr + clrg7 + " M---M  " + rst_clr + clrg8 + " M---M  " + rst_clr + clrg9 + " M---M  " + rst_clr + clrg10 + " M---M  " + rst_clr + clrg11 + " M---M  " + rst_clr + clrg12 + " M---M  " + rst_clr + clrg13 + " M---M      " + rst_clr + clrg14 + "  M---M  " + rst_clr + clrg15 + " M---M  " + rst_clr + clrg16 + " M---M  " + rst_clr + clrg17 + " M---M"<<endl<<endl;	
	cin >> sts_chc;
}














































