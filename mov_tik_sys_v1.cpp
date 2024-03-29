#include <iostream>
using namespace std; // TODO: add an input checker, make separate functions for every genre & age type, finish menu inputs, color inputer, reservation editor, movie picker

void cls(), init_varb(), rset_varb(), npt_ckr(), shw_wlc_scr(), shw_bye_scr(), shw_ttl(), shw_int_pos(), mnu_fil(), shw_sts(), sts_fil(), sts_npt(), chr_fil();
int mov_npt, tim_npt, wlc_npt, sts_cnt=0;
string wlc_msg, bye_msg, mov_one, mov_two, mov_tre, rst_clr="\033[0m", sts_msg, sts_chc, res_chc, gry(string gry_npt), bld_und_blk(string bld_und_blk_npt), itl(string itl_npt);
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
			} while (mnu_chc != 'P');
			do
			{
				shw_sts();
				sts_npt();
				sts_fil();
			} while (sts_chc != "P");
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
	sts_msg = "Enter \'S\' -- \033[3mReserve seat/s\033[0m     \'E\' -- \033[3mEdit reservation\033[0m     \'F\' -- \033[3mFinalize order\033[0m     \'R\' -- \033[3mReset screen\033[0m\n\n\t\t"; 
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
void sts_npt()
{
	cout << "\n\n";
	cout << "\t\t" << sts_msg;
	cin >> sts_chc;
}
void shw_sts()
{
	cls();
	cout << "|EXIT|         |                                                                                                                               |      |EXIT|"<<endl;
	cout << "|    |         |                                                                                                                               |      |    |"<<endl;
	cout << "|    |         |_______________________________________________________________________________________________________________________________|      |    |"<<endl;
	cout << "|____|                                                                                                                                                |____|"<<endl;
	cout << "\n\n";
	cout << "         1       2       3       4            5       6       7       8       9       10      11      12      13           14      15      16      17";
	cout << "\n\n";
	cout << "       " + clra1 + " (=)   " + rst_clr + clra2 + "  (=)   " + rst_clr + clra3 + "  (=)   " + rst_clr + clra4 + "  (=)      " + rst_clr + clra5 + "    (=)   " + rst_clr + clra6 + "  (=)   " + rst_clr + clra7 + "  (=)   " + rst_clr + clra8 + "  (=)   " + rst_clr + clra9 + "  (=)   " + rst_clr + clra10 + "  (=)   " + rst_clr + clra11 + "  (=)   " + rst_clr + clra12 + "  (=)   " + rst_clr + clra13 + "  (=)       " + rst_clr + clra14 + "   (=)   " + rst_clr + clra15 + "  (=)   " + rst_clr + clra16 + "  (=)   " + rst_clr + clra17 + "  (=) " + rst_clr <<endl;
	cout << "   A   " + clra1 + "q| |p  " + rst_clr + clra2 + " q| |p  " + rst_clr + clra3 + " q| |p  " + rst_clr + clra4 + " q| |p     " + rst_clr + clra5 + "   q| |p  " + rst_clr + clra6 + " q| |p  " + rst_clr + clra7 + " q| |p  " + rst_clr + clra8 + " q| |p  " + rst_clr + clra9 + " q| |p  " + rst_clr + clra10 + " q| |p  " + rst_clr + clra11 + " q| |p  " + rst_clr + clra12 + " q| |p  " + rst_clr + clra13 + " q| |p      " + rst_clr + clra14 + "  q| |p  " + rst_clr + clra15 + " q| |p  " + rst_clr + clra16 + " q| |p  " + rst_clr + clra17 + " q| |p" + rst_clr <<endl;
	cout << "       " + clra1 + "M---M  " + rst_clr + clra2 + " M---M  " + rst_clr + clra3 + " M---M  " + rst_clr + clra4 + " M---M     " + rst_clr + clra5 + "   M---M  " + rst_clr + clra6 + " M---M  " + rst_clr + clra7 + " M---M  " + rst_clr + clra8 + " M---M  " + rst_clr + clra9 + " M---M  " + rst_clr + clra10 + " M---M  " + rst_clr + clra11 + " M---M  " + rst_clr + clra12 + " M---M  " + rst_clr + clra13 + " M---M      " + rst_clr + clra14 + "  M---M  " + rst_clr + clra15 + " M---M  " + rst_clr + clra16 + " M---M  " + rst_clr + clra17 + " M---M" + rst_clr <<endl<<endl;	
	cout << "       " + clrb1 + " (=)   " + rst_clr + clrb2 + "  (=)   " + rst_clr + clrb3 + "  (=)   " + rst_clr + clrb4 + "  (=)      " + rst_clr + clrb5 + "    (=)   " + rst_clr + clrb6 + "  (=)   " + rst_clr + clrb7 + "  (=)   " + rst_clr + clrb8 + "  (=)   " + rst_clr + clrb9 + "  (=)   " + rst_clr + clrb10 + "  (=)   " + rst_clr + clrb11 + "  (=)   " + rst_clr + clrb12 + "  (=)   " + rst_clr + clrb13 + "  (=)       " + rst_clr + clrb14 + "   (=)   " + rst_clr + clrb15 + "  (=)   " + rst_clr + clrb16 + "  (=)   " + rst_clr + clrb17 + "  (=) " + rst_clr <<endl;
	cout << "   B   " + clrb1 + "q| |p  " + rst_clr + clrb2 + " q| |p  " + rst_clr + clrb3 + " q| |p  " + rst_clr + clrb4 + " q| |p     " + rst_clr + clrb5 + "   q| |p  " + rst_clr + clrb6 + " q| |p  " + rst_clr + clrb7 + " q| |p  " + rst_clr + clrb8 + " q| |p  " + rst_clr + clrb9 + " q| |p  " + rst_clr + clrb10 + " q| |p  " + rst_clr + clrb11 + " q| |p  " + rst_clr + clrb12 + " q| |p  " + rst_clr + clrb13 + " q| |p      " + rst_clr + clrb14 + "  q| |p  " + rst_clr + clrb15 + " q| |p  " + rst_clr + clrb16 + " q| |p  " + rst_clr + clrb17 + " q| |p" + rst_clr <<endl;
	cout << "       " + clrb1 + "M---M  " + rst_clr + clrb2 + " M---M  " + rst_clr + clrb3 + " M---M  " + rst_clr + clrb4 + " M---M     " + rst_clr + clrb5 + "   M---M  " + rst_clr + clrb6 + " M---M  " + rst_clr + clrb7 + " M---M  " + rst_clr + clrb8 + " M---M  " + rst_clr + clrb9 + " M---M  " + rst_clr + clrb10 + " M---M  " + rst_clr + clrb11 + " M---M  " + rst_clr + clrb12 + " M---M  " + rst_clr + clrb13 + " M---M      " + rst_clr + clrb14 + "  M---M  " + rst_clr + clrb15 + " M---M  " + rst_clr + clrb16 + " M---M  " + rst_clr + clrb17 + " M---M" + rst_clr <<endl<<endl;	
	cout << "       " + clrc1 + " (=)   " + rst_clr + clrc2 + "  (=)   " + rst_clr + clrc3 + "  (=)   " + rst_clr + clrc4 + "  (=)      " + rst_clr + clrc5 + "    (=)   " + rst_clr + clrc6 + "  (=)   " + rst_clr + clrc7 + "  (=)   " + rst_clr + clrc8 + "  (=)   " + rst_clr + clrc9 + "  (=)   " + rst_clr + clrc10 + "  (=)   " + rst_clr + clrc11 + "  (=)   " + rst_clr + clrc12 + "  (=)   " + rst_clr + clrc13 + "  (=)       " + rst_clr + clrc14 + "   (=)   " + rst_clr + clrc15 + "  (=)   " + rst_clr + clrc16 + "  (=)   " + rst_clr + clrc17 + "  (=) " + rst_clr <<endl;
	cout << "   C   " + clrc1 + "q| |p  " + rst_clr + clrc2 + " q| |p  " + rst_clr + clrc3 + " q| |p  " + rst_clr + clrc4 + " q| |p     " + rst_clr + clrc5 + "   q| |p  " + rst_clr + clrc6 + " q| |p  " + rst_clr + clrc7 + " q| |p  " + rst_clr + clrc8 + " q| |p  " + rst_clr + clrc9 + " q| |p  " + rst_clr + clrc10 + " q| |p  " + rst_clr + clrc11 + " q| |p  " + rst_clr + clrc12 + " q| |p  " + rst_clr + clrc13 + " q| |p      " + rst_clr + clrc14 + "  q| |p  " + rst_clr + clrc15 + " q| |p  " + rst_clr + clrc16 + " q| |p  " + rst_clr + clrc17 + " q| |p" + rst_clr <<endl;
	cout << "       " + clrc1 + "M---M  " + rst_clr + clrc2 + " M---M  " + rst_clr + clrc3 + " M---M  " + rst_clr + clrc4 + " M---M     " + rst_clr + clrc5 + "   M---M  " + rst_clr + clrc6 + " M---M  " + rst_clr + clrc7 + " M---M  " + rst_clr + clrc8 + " M---M  " + rst_clr + clrc9 + " M---M  " + rst_clr + clrc10 + " M---M  " + rst_clr + clrc11 + " M---M  " + rst_clr + clrc12 + " M---M  " + rst_clr + clrc13 + " M---M      " + rst_clr + clrc14 + "  M---M  " + rst_clr + clrc15 + " M---M  " + rst_clr + clrc16 + " M---M  " + rst_clr + clrc17 + " M---M" + rst_clr <<endl<<endl;	
	cout << "       " + clrd1 + " (=)   " + rst_clr + clrd2 + "  (=)   " + rst_clr + clrd3 + "  (=)   " + rst_clr + clrd4 + "  (=)      " + rst_clr + clrd5 + "    (=)   " + rst_clr + clrd6 + "  (=)   " + rst_clr + clrd7 + "  (=)   " + rst_clr + clrd8 + "  (=)   " + rst_clr + clrd9 + "  (=)   " + rst_clr + clrd10 + "  (=)   " + rst_clr + clrd11 + "  (=)   " + rst_clr + clrd12 + "  (=)   " + rst_clr + clrd13 + "  (=)       " + rst_clr + clrd14 + "   (=)   " + rst_clr + clrd15 + "  (=)   " + rst_clr + clrd16 + "  (=)   " + rst_clr + clrd17 + "  (=) " + rst_clr <<endl;
	cout << "   D   " + clrd1 + "q| |p  " + rst_clr + clrd2 + " q| |p  " + rst_clr + clrd3 + " q| |p  " + rst_clr + clrd4 + " q| |p     " + rst_clr + clrd5 + "   q| |p  " + rst_clr + clrd6 + " q| |p  " + rst_clr + clrd7 + " q| |p  " + rst_clr + clrd8 + " q| |p  " + rst_clr + clrd9 + " q| |p  " + rst_clr + clrd10 + " q| |p  " + rst_clr + clrd11 + " q| |p  " + rst_clr + clrd12 + " q| |p  " + rst_clr + clrd13 + " q| |p      " + rst_clr + clrd14 + "  q| |p  " + rst_clr + clrd15 + " q| |p  " + rst_clr + clrd16 + " q| |p  " + rst_clr + clrd17 + " q| |p" + rst_clr <<endl;
	cout << "       " + clrd1 + "M---M  " + rst_clr + clrd2 + " M---M  " + rst_clr + clrd3 + " M---M  " + rst_clr + clrd4 + " M---M     " + rst_clr + clrd5 + "   M---M  " + rst_clr + clrd6 + " M---M  " + rst_clr + clrd7 + " M---M  " + rst_clr + clrd8 + " M---M  " + rst_clr + clrd9 + " M---M  " + rst_clr + clrd10 + " M---M  " + rst_clr + clrd11 + " M---M  " + rst_clr + clrd12 + " M---M  " + rst_clr + clrd13 + " M---M      " + rst_clr + clrd14 + "  M---M  " + rst_clr + clrd15 + " M---M  " + rst_clr + clrd16 + " M---M  " + rst_clr + clrd17 + " M---M" + rst_clr <<endl<<endl;	
	cout << "       " + clre1 + " (=)   " + rst_clr + clre2 + "  (=)   " + rst_clr + clre3 + "  (=)   " + rst_clr + clre4 + "  (=)      " + rst_clr + clre5 + "    (=)   " + rst_clr + clre6 + "  (=)   " + rst_clr + clre7 + "  (=)   " + rst_clr + clre8 + "  (=)   " + rst_clr + clre9 + "  (=)   " + rst_clr + clre10 + "  (=)   " + rst_clr + clre11 + "  (=)   " + rst_clr + clre12 + "  (=)   " + rst_clr + clre13 + "  (=)       " + rst_clr + clre14 + "   (=)   " + rst_clr + clre15 + "  (=)   " + rst_clr + clre16 + "  (=)   " + rst_clr + clre17 + "  (=) " + rst_clr <<endl;
	cout << "   E   " + clre1 + "q| |p  " + rst_clr + clre2 + " q| |p  " + rst_clr + clre3 + " q| |p  " + rst_clr + clre4 + " q| |p     " + rst_clr + clre5 + "   q| |p  " + rst_clr + clre6 + " q| |p  " + rst_clr + clre7 + " q| |p  " + rst_clr + clre8 + " q| |p  " + rst_clr + clre9 + " q| |p  " + rst_clr + clre10 + " q| |p  " + rst_clr + clre11 + " q| |p  " + rst_clr + clre12 + " q| |p  " + rst_clr + clre13 + " q| |p      " + rst_clr + clre14 + "  q| |p  " + rst_clr + clre15 + " q| |p  " + rst_clr + clre16 + " q| |p  " + rst_clr + clre17 + " q| |p" + rst_clr <<endl;
	cout << "       " + clre1 + "M---M  " + rst_clr + clre2 + " M---M  " + rst_clr + clre3 + " M---M  " + rst_clr + clre4 + " M---M     " + rst_clr + clre5 + "   M---M  " + rst_clr + clre6 + " M---M  " + rst_clr + clre7 + " M---M  " + rst_clr + clre8 + " M---M  " + rst_clr + clre9 + " M---M  " + rst_clr + clre10 + " M---M  " + rst_clr + clre11 + " M---M  " + rst_clr + clre12 + " M---M  " + rst_clr + clre13 + " M---M      " + rst_clr + clre14 + "  M---M  " + rst_clr + clre15 + " M---M  " + rst_clr + clre16 + " M---M  " + rst_clr + clre17 + " M---M" + rst_clr <<endl<<endl;	
	cout << "       " + clrf1 + " (=)   " + rst_clr + clrf2 + "  (=)   " + rst_clr + clrf3 + "  (=)   " + rst_clr + clrf4 + "  (=)      " + rst_clr + clrf5 + "    (=)   " + rst_clr + clrf6 + "  (=)   " + rst_clr + clrf7 + "  (=)   " + rst_clr + clrf8 + "  (=)   " + rst_clr + clrf9 + "  (=)   " + rst_clr + clrf10 + "  (=)   " + rst_clr + clrf11 + "  (=)   " + rst_clr + clrf12 + "  (=)   " + rst_clr + clrf13 + "  (=)       " + rst_clr + clrf14 + "   (=)   " + rst_clr + clrf15 + "  (=)   " + rst_clr + clrf16 + "  (=)   " + rst_clr + clrf17 + "  (=) " + rst_clr <<endl;
	cout << "   F   " + clrf1 + "q| |p  " + rst_clr + clrf2 + " q| |p  " + rst_clr + clrf3 + " q| |p  " + rst_clr + clrf4 + " q| |p     " + rst_clr + clrf5 + "   q| |p  " + rst_clr + clrf6 + " q| |p  " + rst_clr + clrf7 + " q| |p  " + rst_clr + clrf8 + " q| |p  " + rst_clr + clrf9 + " q| |p  " + rst_clr + clrf10 + " q| |p  " + rst_clr + clrf11 + " q| |p  " + rst_clr + clrf12 + " q| |p  " + rst_clr + clrf13 + " q| |p      " + rst_clr + clrf14 + "  q| |p  " + rst_clr + clrf15 + " q| |p  " + rst_clr + clrf16 + " q| |p  " + rst_clr + clrf17 + " q| |p" + rst_clr <<endl;
	cout << "       " + clrf1 + "M---M  " + rst_clr + clrf2 + " M---M  " + rst_clr + clrf3 + " M---M  " + rst_clr + clrf4 + " M---M     " + rst_clr + clrf5 + "   M---M  " + rst_clr + clrf6 + " M---M  " + rst_clr + clrf7 + " M---M  " + rst_clr + clrf8 + " M---M  " + rst_clr + clrf9 + " M---M  " + rst_clr + clrf10 + " M---M  " + rst_clr + clrf11 + " M---M  " + rst_clr + clrf12 + " M---M  " + rst_clr + clrf13 + " M---M      " + rst_clr + clrf14 + "  M---M  " + rst_clr + clrf15 + " M---M  " + rst_clr + clrf16 + " M---M  " + rst_clr + clrf17 + " M---M" + rst_clr <<endl<<endl;	
	cout << "       " + clrg1 + " (=)   " + rst_clr + clrg2 + "  (=)   " + rst_clr + clrg3 + "  (=)   " + rst_clr + clrg4 + "  (=)      " + rst_clr + clrg5 + "    (=)   " + rst_clr + clrg6 + "  (=)   " + rst_clr + clrg7 + "  (=)   " + rst_clr + clrg8 + "  (=)   " + rst_clr + clrg9 + "  (=)   " + rst_clr + clrg10 + "  (=)   " + rst_clr + clrg11 + "  (=)   " + rst_clr + clrg12 + "  (=)   " + rst_clr + clrg13 + "  (=)       " + rst_clr + clrg14 + "   (=)   " + rst_clr + clrg15 + "  (=)   " + rst_clr + clrg16 + "  (=)   " + rst_clr + clrg17 + "  (=) " + rst_clr <<endl;
	cout << "   G   " + clrg1 + "q| |p  " + rst_clr + clrg2 + " q| |p  " + rst_clr + clrg3 + " q| |p  " + rst_clr + clrg4 + " q| |p     " + rst_clr + clrg5 + "   q| |p  " + rst_clr + clrg6 + " q| |p  " + rst_clr + clrg7 + " q| |p  " + rst_clr + clrg8 + " q| |p  " + rst_clr + clrg9 + " q| |p  " + rst_clr + clrg10 + " q| |p  " + rst_clr + clrg11 + " q| |p  " + rst_clr + clrg12 + " q| |p  " + rst_clr + clrg13 + " q| |p      " + rst_clr + clrg14 + "  q| |p  " + rst_clr + clrg15 + " q| |p  " + rst_clr + clrg16 + " q| |p  " + rst_clr + clrg17 + " q| |p" + rst_clr <<endl;
	cout << "       " + clrg1 + "M---M  " + rst_clr + clrg2 + " M---M  " + rst_clr + clrg3 + " M---M  " + rst_clr + clrg4 + " M---M     " + rst_clr + clrg5 + "   M---M  " + rst_clr + clrg6 + " M---M  " + rst_clr + clrg7 + " M---M  " + rst_clr + clrg8 + " M---M  " + rst_clr + clrg9 + " M---M  " + rst_clr + clrg10 + " M---M  " + rst_clr + clrg11 + " M---M  " + rst_clr + clrg12 + " M---M  " + rst_clr + clrg13 + " M---M      " + rst_clr + clrg14 + "  M---M  " + rst_clr + clrg15 + " M---M  " + rst_clr + clrg16 + " M---M  " + rst_clr + clrg17 + " M---M" + rst_clr <<endl<<endl;	
}
void chr_fil()
{
        if (res_chc == "a1" || res_chc == "A1")
                clra1 = "\033[32m";
        else if (res_chc == "a2" || res_chc == "A2")
                clra2 = "\033[32m";
        else if (res_chc == "a3" || res_chc == "A3")
                clra3 = "\033[32m";
        else if (res_chc == "a4" || res_chc == "A4")
                clra4 = "\033[32m";
        else if (res_chc == "a5" || res_chc == "A5")
                clra5 = "\033[32m";
        else if (res_chc == "a6" || res_chc == "A6")
                clra6 = "\033[32m";
        else if (res_chc == "a7" || res_chc == "A7")
                clra7 = "\033[32m";
        else if (res_chc == "a8" || res_chc == "A8")
                clra8 = "\033[32m";
        else if (res_chc == "a9" || res_chc == "A9")
                clra9 = "\033[32m";
        else if (res_chc == "a10" || res_chc == "A10")
                clra10 = "\033[32m";
        else if (res_chc == "a11" || res_chc == "A11")
                clra11 = "\033[32m";
        else if (res_chc == "a12" || res_chc == "A12")
                clra12 = "\033[32m";
        else if (res_chc == "a13" || res_chc == "A13")
                clra13 = "\033[32m";
        else if (res_chc == "a14" || res_chc == "A14")
                clra14 = "\033[32m";
        else if (res_chc == "a15" || res_chc == "A15")
                clra15 = "\033[32m";
        else if (res_chc == "a16" || res_chc == "A16")
                clra16 = "\033[32m";
        else if (res_chc == "a17" || res_chc == "A17")
                clra17 = "\033[32m";
        else if (res_chc == "b1" || res_chc == "B1")
                clrb1 = "\033[32m";
        else if (res_chc == "b2" || res_chc == "B2")
                clrb2 = "\033[32m";
        else if (res_chc == "b3" || res_chc == "B3")
                clrb3 = "\033[32m";
        else if (res_chc == "b4" || res_chc == "B4")
                clrb4 = "\033[32m";
        else if (res_chc == "b5" || res_chc == "B5")
                clrb5 = "\033[32m";
        else if (res_chc == "b6" || res_chc == "B6")
                clrb6 = "\033[32m";
        else if (res_chc == "b7" || res_chc == "B7")
                clrb7 = "\033[32m";
        else if (res_chc == "b8" || res_chc == "B8")
                clrb8 = "\033[32m";
        else if (res_chc == "b9" || res_chc == "B9")
                clrb9 = "\033[32m";
        else if (res_chc == "b10" || res_chc == "B10")
                clrb10 = "\033[32m";
        else if (res_chc == "b11" || res_chc == "B11")
                clrb11 = "\033[32m";
        else if (res_chc == "b12" || res_chc == "B12")
                clrb12 = "\033[32m";
        else if (res_chc == "b13" || res_chc == "B13")
                clrb13 = "\033[32m";
        else if (res_chc == "b14" || res_chc == "B14")
                clrb14 = "\033[32m";
        else if (res_chc == "b15" || res_chc == "B15")
                clrb15 = "\033[32m";
        else if (res_chc == "b16" || res_chc == "B16")
                clrb16 = "\033[32m";
        else if (res_chc == "b17" || res_chc == "B17")
                clrb17 = "\033[32m";
        else if (res_chc == "c1" || res_chc == "C1")
                clrc1 = "\033[32m";
        else if (res_chc == "c2" || res_chc == "C2")
                clrc2 = "\033[32m";
        else if (res_chc == "c3" || res_chc == "C3")
                clrc3 = "\033[32m";
        else if (res_chc == "c4" || res_chc == "C4")
                clrc4 = "\033[32m";
        else if (res_chc == "c5" || res_chc == "C5")
                clrc5 = "\033[32m";
        else if (res_chc == "c6" || res_chc == "C6")
                clrc6 = "\033[32m";
        else if (res_chc == "c7" || res_chc == "C7")
                clrc7 = "\033[32m";
        else if (res_chc == "c8" || res_chc == "C8")
                clrc8 = "\033[32m";
        else if (res_chc == "c9" || res_chc == "C9")
                clrc9 = "\033[32m";
        else if (res_chc == "c10" || res_chc == "C10")
                clrc10 = "\033[32m";
        else if (res_chc == "c11" || res_chc == "C11")
                clrc11 = "\033[32m";
        else if (res_chc == "c12" || res_chc == "C12")
                clrc12 = "\033[32m";
        else if (res_chc == "c13" || res_chc == "C13")
                clrc13 = "\033[32m";
        else if (res_chc == "c14" || res_chc == "C14")
                clrc14 = "\033[32m";
        else if (res_chc == "c15" || res_chc == "C15")
                clrc15 = "\033[32m";
        else if (res_chc == "c16" || res_chc == "C16")
                clrc16 = "\033[32m";
        else if (res_chc == "c17" || res_chc == "C17")
                clrc17 = "\033[32m";
        else if (res_chc == "d1" || res_chc == "D1")
                clrd1 = "\033[32m";
        else if (res_chc == "d2" || res_chc == "D2")
                clrd2 = "\033[32m";
        else if (res_chc == "d3" || res_chc == "D3")
                clrd3 = "\033[32m";
        else if (res_chc == "d4" || res_chc == "D4")
                clrd4 = "\033[32m";
        else if (res_chc == "d5" || res_chc == "D5")
                clrd5 = "\033[32m";
        else if (res_chc == "d6" || res_chc == "D6")
                clrd6 = "\033[32m";
        else if (res_chc == "d7" || res_chc == "D7")
                clrd7 = "\033[32m";
        else if (res_chc == "d8" || res_chc == "D8")
                clrd8 = "\033[32m";
        else if (res_chc == "d9" || res_chc == "D9")
                clrd9 = "\033[32m";
        else if (res_chc == "d10" || res_chc == "D10")
                clrd10 = "\033[32m";
        else if (res_chc == "d11" || res_chc == "D11")
                clrd11 = "\033[32m";
        else if (res_chc == "d12" || res_chc == "D12")
                clrd12 = "\033[32m";
        else if (res_chc == "d13" || res_chc == "D13")
                clrd13 = "\033[32m";
        else if (res_chc == "d14" || res_chc == "D14")
                clrd14 = "\033[32m";
        else if (res_chc == "d15" || res_chc == "D15")
                clrd15 = "\033[32m";
        else if (res_chc == "d16" || res_chc == "D16")
                clrd16 = "\033[32m";
        else if (res_chc == "d17" || res_chc == "D17")
                clrd17 = "\033[32m";
        else if (res_chc == "e1" || res_chc == "E1")
                clre1 = "\033[32m";
        else if (res_chc == "e2" || res_chc == "E2")
                clre2 = "\033[32m";
        else if (res_chc == "e3" || res_chc == "E3")
                clre3 = "\033[32m";
        else if (res_chc == "e4" || res_chc == "E4")
                clre4 = "\033[32m";
        else if (res_chc == "e5" || res_chc == "E5")
                clre5 = "\033[32m";
        else if (res_chc == "e6" || res_chc == "E6")
                clre6 = "\033[32m";
        else if (res_chc == "e7" || res_chc == "E7")
                clre7 = "\033[32m";
        else if (res_chc == "e8" || res_chc == "E8")
                clre8 = "\033[32m";
        else if (res_chc == "e9" || res_chc == "E9")
                clre9 = "\033[32m";
        else if (res_chc == "e10" || res_chc == "E10")
                clre10 = "\033[32m";
        else if (res_chc == "e11" || res_chc == "E11")
                clre11 = "\033[32m";
        else if (res_chc == "e12" || res_chc == "E12")
                clre12 = "\033[32m";
        else if (res_chc == "e13" || res_chc == "E13")
                clre13 = "\033[32m";
        else if (res_chc == "e14" || res_chc == "E14")
                clre14 = "\033[32m";
        else if (res_chc == "e15" || res_chc == "E15")
                clre15 = "\033[32m";
        else if (res_chc == "e16" || res_chc == "E16")
                clre16 = "\033[32m";
        else if (res_chc == "e17" || res_chc == "E17")
                clre17 = "\033[32m";
        else if (res_chc == "f1" || res_chc == "F1")
                clrf1 = "\033[32m";
        else if (res_chc == "f2" || res_chc == "F2")
                clrf2 = "\033[32m";
        else if (res_chc == "f3" || res_chc == "F3")
                clrf3 = "\033[32m";
        else if (res_chc == "f4" || res_chc == "F4")
                clrf4 = "\033[32m";
        else if (res_chc == "f5" || res_chc == "F5")
                clrf5 = "\033[32m";
        else if (res_chc == "f6" || res_chc == "F6")
                clrf6 = "\033[32m";
        else if (res_chc == "f7" || res_chc == "F7")
                clrf7 = "\033[32m";
        else if (res_chc == "f8" || res_chc == "F8")
                clrf8 = "\033[32m";
        else if (res_chc == "f9" || res_chc == "F9")
                clrf9 = "\033[32m";
        else if (res_chc == "f10" || res_chc == "F10")
                clrf10 = "\033[32m";
        else if (res_chc == "f11" || res_chc == "F11")
                clrf11 = "\033[32m";
        else if (res_chc == "f12" || res_chc == "F12")
                clrf12 = "\033[32m";
        else if (res_chc == "f13" || res_chc == "F13")
                clrf13 = "\033[32m";
        else if (res_chc == "f14" || res_chc == "F14")
                clrf14 = "\033[32m";
        else if (res_chc == "f15" || res_chc == "F15")
                clrf15 = "\033[32m";
        else if (res_chc == "f16" || res_chc == "F16")
                clrf16 = "\033[32m";
        else if (res_chc == "f17" || res_chc == "F17")
                clrf17 = "\033[32m";
        else if (res_chc == "g1" || res_chc == "G1")
                clrg1 = "\033[32m";
        else if (res_chc == "g2" || res_chc == "G2")
                clrg2 = "\033[32m";
        else if (res_chc == "g3" || res_chc == "G3")
                clrg3 = "\033[32m";
        else if (res_chc == "g4" || res_chc == "G4")
                clrg4 = "\033[32m";
        else if (res_chc == "g5" || res_chc == "G5")
                clrg5 = "\033[32m";
        else if (res_chc == "g6" || res_chc == "G6")
                clrg6 = "\033[32m";
        else if (res_chc == "g7" || res_chc == "G7")
                clrg7 = "\033[32m";
        else if (res_chc == "g8" || res_chc == "G8")
                clrg8 = "\033[32m";
        else if (res_chc == "g9" || res_chc == "G9")
                clrg9 = "\033[32m";
        else if (res_chc == "g10" || res_chc == "G10")
                clrg10 = "\033[32m";
        else if (res_chc == "g11" || res_chc == "G11")
                clrg11 = "\033[32m";
        else if (res_chc == "g12" || res_chc == "G12")
                clrg12 = "\033[32m";
        else if (res_chc == "g13" || res_chc == "G13")
                clrg13 = "\033[32m";
        else if (res_chc == "g14" || res_chc == "G14")
                clrg14 = "\033[32m";
        else if (res_chc == "g15" || res_chc == "G15")
                clrg15 = "\033[32m";
        else if (res_chc == "g16" || res_chc == "G16")
                clrg16 = "\033[32m";
        else if (res_chc == "g17" || res_chc == "G17")
                clrg17 = "\033[32m";
        else if (res_chc == "S" || res_chc == "s")
        		res_chc = "O";
}
void sts_fil()
{
		
	if (sts_chc == "S" || sts_chc == "s")
	{
		sts_msg = "Enter the chair names of your choice (ex. a1): ";
		do
		{
			cls();
			shw_sts();
			cout << "\n\n\t\t" << sts_msg << "\n\n\t\t";
			cin >> res_chc;
			chr_fil();
			sts_msg = res_chc + " has been added to your reserved seat/s.     Enter \'S\' -- \033[3mStop picking seats\033[0m";
		} while (res_chc!= "O");
	}
	else if (sts_chc == "E" || sts_chc == "e")
	{
		
	}
	else if (sts_chc == "F" || sts_chc == "f")
		sts_chc = "P";
	else if (sts_chc == "R" || sts_chc == "r")
	{
		
	}
	else
	{
		
	}
}














































