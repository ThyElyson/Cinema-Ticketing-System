#include <iostream>
using namespace std; // TODO: add an input checker, make separate functions for every genre & age type, finish menu inputs, color inputer, reservation editor, movie picker

void cls(), init_varb(), rset_varb(), npt_ckr(), shw_wlc_scr(), shw_bye_scr(), TITLE_CINEMA_NAME(), shw_int_pos(), M_Filters(), shw_sts(), S_Filters(), INPUT_SEATS();
int mov_npt, EN_GATE_INPUT;
string EN_Message, EX_Message, MOVIE_1, MOVIE_2, MOVIE_3, R_FORMAT="\033[0m", S_Message, S_Choice, R_Choice, gry(string gry_npt), bld_und_blk(string bld_und_blk_npt), itl(string itl_npt);
string clra1, clra2, clra3, clra4, clra5, clra6, clra7, clra8, clra9, clra10, clra11, clra12, clra13, clra14, clra15, clra16, clra17, clrb1, clrb2, clrb3, clrb4, clrb5, clrb6, clrb7, clrb8, clrb9, clrb10, clrb11, clrb12, clrb13, clrb14, clrb15, clrb16, clrb17, clrc1, clrc2, clrc3, clrc4, clrc5, clrc6, clrc7, clrc8, clrc9, clrc10, clrc11, clrc12, clrc13, clrc14, clrc15, clrc16, clrc17, clrd1, clrd2, clrd3, clrd4, clrd5, clrd6, clrd7, clrd8, clrd9, clrd10, clrd11, clrd12, clrd13, clrd14, clrd15, clrd16, clrd17, clre1, clre2, clre3, clre4, clre5, clre6, clre7, clre8, clre9, clre10, clre11, clre12, clre13, clre14, clre15, clre16, clre17, clrf1, clrf2, clrf3, clrf4, clrf5, clrf6, clrf7, clrf8, clrf9, clrf10, clrf11, clrf12, clrf13, clrf14, clrf15, clrf16, clrf17, clrg1, clrg2, clrg3, clrg4, clrg5, clrg6, clrg7, clrg8, clrg9, clrg10, clrg11, clrg12, clrg13, clrg14, clrg15, clrg16, clrg17;
bool System_Stats;
char M_Choice, G_Filters, A_Filters;

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
		while (EN_GATE_INPUT != 0)
		{
			TITLE_CINEMA_NAME();
			shw_int_pos();
			do
			{
				M_Filters();
			} while (M_Choice != 'P');
			do
			{
				shw_sts();
				INPUT_SEATS();
				S_Filters();
			} while (S_Choice != "P");
			EN_GATE_INPUT = 0;
		}
		shw_bye_scr();
		rset_varb();
	} while (System_Stats == false);
	
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
	EN_Message = "Please use " + bld_und_blk("fullscreen") + " before entering";
	EX_Message = "Thank you for visiting Retarded Cinema";
	MOVIE_1 = "Happy Tree Friends";
	MOVIE_2 = "The Amazing World of Gumball";
	MOVIE_3 = "The Martian";
	S_Message = "Enter \'S\' -- \033[3mReserve seat/s\033[0m     \'E\' -- \033[3mEdit reservation\033[0m     \'F\' -- \033[3mFinalize order\033[0m     \'R\' -- \033[3mReset screen\033[0m\n\n\t\t"; 
}
void rset_varb()
{
	EN_Message = "You can still edit your reservations";
	EX_Message = "Are you sure you are done finalizing?";
}
void shw_wlc_scr()
{
	cls();
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ";
	cout << EN_Message << endl;
	cout << "\t\t\t\t\t\t  " << "Press \'1\' to enter:" << "\n\t\t\t\t\t\t\t   ";
	cin >> EN_GATE_INPUT;
	if (EN_GATE_INPUT == 1)
		EN_GATE_INPUT = 1;
	else
		EN_GATE_INPUT = 0;
}
void shw_bye_scr()
{
	cls();
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t     ";
	cout << EX_Message << endl;
	cout << "\t\t\t\t\t\t\t\t      " << "Press \'1\' to leave:" << "\n\t\t\t\t\t\t\t\t\t       ";
	cin >> System_Stats;
	if (System_Stats == 1)
		System_Stats = 1;
	else 
		System_Stats = 0;
}
void TITLE_CINEMA_NAME()
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
	cout << "          " << "Enter \'A\' -- " + itl(MOVIE_1)           + "     " << "\'B\' -- " + itl(MOVIE_2)            + "     " << "\'C\' -- " + itl(MOVIE_3) << "\n" << endl;
	cout << "          " << "Enter \'G\' -- " + itl("Genre Filtering") + "     " << "\'E\' -- " + itl("Edit reservation") + "     " << "\'R\' -- " + itl("reset screen")  << "\n\n\t\t";
	cin >> M_Choice;
}
void M_Filters()
{
	switch (M_Choice)
	{
		case 'a':
		case 'A':
			
			M_Choice = 'P';
			break;
		case 'b':
		case 'B':
			
			M_Choice = 'P';
			break;
		case 'c':
		case 'C':
			
			M_Choice = 'P';
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
			TITLE_CINEMA_NAME();
			shw_int_pos();
			break;
		default:
			break;
				}
}
void INPUT_SEATS()
{
	cout << "\n\n";
	cout << "\t\t" << S_Message;
	getline(cin,S_Choice);
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
	cout << "       " + clra1 + " (=)   " + R_FORMAT + clra2 + "  (=)   " + R_FORMAT + clra3 + "  (=)   " + R_FORMAT + clra4 + "  (=)      " + R_FORMAT + clra5 + "    (=)   " + R_FORMAT + clra6 + "  (=)   " + R_FORMAT + clra7 + "  (=)   " + R_FORMAT + clra8 + "  (=)   " + R_FORMAT + clra9 + "  (=)   " + R_FORMAT + clra10 + "  (=)   " + R_FORMAT + clra11 + "  (=)   " + R_FORMAT + clra12 + "  (=)   " + R_FORMAT + clra13 + "  (=)       " + R_FORMAT + clra14 + "   (=)   " + R_FORMAT + clra15 + "  (=)   " + R_FORMAT + clra16 + "  (=)   " + R_FORMAT + clra17 + "  (=) " + R_FORMAT <<endl;
	cout << "   A   " + clra1 + "q| |p  " + R_FORMAT + clra2 + " q| |p  " + R_FORMAT + clra3 + " q| |p  " + R_FORMAT + clra4 + " q| |p     " + R_FORMAT + clra5 + "   q| |p  " + R_FORMAT + clra6 + " q| |p  " + R_FORMAT + clra7 + " q| |p  " + R_FORMAT + clra8 + " q| |p  " + R_FORMAT + clra9 + " q| |p  " + R_FORMAT + clra10 + " q| |p  " + R_FORMAT + clra11 + " q| |p  " + R_FORMAT + clra12 + " q| |p  " + R_FORMAT + clra13 + " q| |p      " + R_FORMAT + clra14 + "  q| |p  " + R_FORMAT + clra15 + " q| |p  " + R_FORMAT + clra16 + " q| |p  " + R_FORMAT + clra17 + " q| |p" + R_FORMAT <<endl;
	cout << "       " + clra1 + "M---M  " + R_FORMAT + clra2 + " M---M  " + R_FORMAT + clra3 + " M---M  " + R_FORMAT + clra4 + " M---M     " + R_FORMAT + clra5 + "   M---M  " + R_FORMAT + clra6 + " M---M  " + R_FORMAT + clra7 + " M---M  " + R_FORMAT + clra8 + " M---M  " + R_FORMAT + clra9 + " M---M  " + R_FORMAT + clra10 + " M---M  " + R_FORMAT + clra11 + " M---M  " + R_FORMAT + clra12 + " M---M  " + R_FORMAT + clra13 + " M---M      " + R_FORMAT + clra14 + "  M---M  " + R_FORMAT + clra15 + " M---M  " + R_FORMAT + clra16 + " M---M  " + R_FORMAT + clra17 + " M---M" + R_FORMAT <<endl<<endl;	
	cout << "       " + clrb1 + " (=)   " + R_FORMAT + clrb2 + "  (=)   " + R_FORMAT + clrb3 + "  (=)   " + R_FORMAT + clrb4 + "  (=)      " + R_FORMAT + clrb5 + "    (=)   " + R_FORMAT + clrb6 + "  (=)   " + R_FORMAT + clrb7 + "  (=)   " + R_FORMAT + clrb8 + "  (=)   " + R_FORMAT + clrb9 + "  (=)   " + R_FORMAT + clrb10 + "  (=)   " + R_FORMAT + clrb11 + "  (=)   " + R_FORMAT + clrb12 + "  (=)   " + R_FORMAT + clrb13 + "  (=)       " + R_FORMAT + clrb14 + "   (=)   " + R_FORMAT + clrb15 + "  (=)   " + R_FORMAT + clrb16 + "  (=)   " + R_FORMAT + clrb17 + "  (=) " + R_FORMAT <<endl;
	cout << "   B   " + clrb1 + "q| |p  " + R_FORMAT + clrb2 + " q| |p  " + R_FORMAT + clrb3 + " q| |p  " + R_FORMAT + clrb4 + " q| |p     " + R_FORMAT + clrb5 + "   q| |p  " + R_FORMAT + clrb6 + " q| |p  " + R_FORMAT + clrb7 + " q| |p  " + R_FORMAT + clrb8 + " q| |p  " + R_FORMAT + clrb9 + " q| |p  " + R_FORMAT + clrb10 + " q| |p  " + R_FORMAT + clrb11 + " q| |p  " + R_FORMAT + clrb12 + " q| |p  " + R_FORMAT + clrb13 + " q| |p      " + R_FORMAT + clrb14 + "  q| |p  " + R_FORMAT + clrb15 + " q| |p  " + R_FORMAT + clrb16 + " q| |p  " + R_FORMAT + clrb17 + " q| |p" + R_FORMAT <<endl;
	cout << "       " + clrb1 + "M---M  " + R_FORMAT + clrb2 + " M---M  " + R_FORMAT + clrb3 + " M---M  " + R_FORMAT + clrb4 + " M---M     " + R_FORMAT + clrb5 + "   M---M  " + R_FORMAT + clrb6 + " M---M  " + R_FORMAT + clrb7 + " M---M  " + R_FORMAT + clrb8 + " M---M  " + R_FORMAT + clrb9 + " M---M  " + R_FORMAT + clrb10 + " M---M  " + R_FORMAT + clrb11 + " M---M  " + R_FORMAT + clrb12 + " M---M  " + R_FORMAT + clrb13 + " M---M      " + R_FORMAT + clrb14 + "  M---M  " + R_FORMAT + clrb15 + " M---M  " + R_FORMAT + clrb16 + " M---M  " + R_FORMAT + clrb17 + " M---M" + R_FORMAT <<endl<<endl;	
	cout << "       " + clrc1 + " (=)   " + R_FORMAT + clrc2 + "  (=)   " + R_FORMAT + clrc3 + "  (=)   " + R_FORMAT + clrc4 + "  (=)      " + R_FORMAT + clrc5 + "    (=)   " + R_FORMAT + clrc6 + "  (=)   " + R_FORMAT + clrc7 + "  (=)   " + R_FORMAT + clrc8 + "  (=)   " + R_FORMAT + clrc9 + "  (=)   " + R_FORMAT + clrc10 + "  (=)   " + R_FORMAT + clrc11 + "  (=)   " + R_FORMAT + clrc12 + "  (=)   " + R_FORMAT + clrc13 + "  (=)       " + R_FORMAT + clrc14 + "   (=)   " + R_FORMAT + clrc15 + "  (=)   " + R_FORMAT + clrc16 + "  (=)   " + R_FORMAT + clrc17 + "  (=) " + R_FORMAT <<endl;
	cout << "   C   " + clrc1 + "q| |p  " + R_FORMAT + clrc2 + " q| |p  " + R_FORMAT + clrc3 + " q| |p  " + R_FORMAT + clrc4 + " q| |p     " + R_FORMAT + clrc5 + "   q| |p  " + R_FORMAT + clrc6 + " q| |p  " + R_FORMAT + clrc7 + " q| |p  " + R_FORMAT + clrc8 + " q| |p  " + R_FORMAT + clrc9 + " q| |p  " + R_FORMAT + clrc10 + " q| |p  " + R_FORMAT + clrc11 + " q| |p  " + R_FORMAT + clrc12 + " q| |p  " + R_FORMAT + clrc13 + " q| |p      " + R_FORMAT + clrc14 + "  q| |p  " + R_FORMAT + clrc15 + " q| |p  " + R_FORMAT + clrc16 + " q| |p  " + R_FORMAT + clrc17 + " q| |p" + R_FORMAT <<endl;
	cout << "       " + clrc1 + "M---M  " + R_FORMAT + clrc2 + " M---M  " + R_FORMAT + clrc3 + " M---M  " + R_FORMAT + clrc4 + " M---M     " + R_FORMAT + clrc5 + "   M---M  " + R_FORMAT + clrc6 + " M---M  " + R_FORMAT + clrc7 + " M---M  " + R_FORMAT + clrc8 + " M---M  " + R_FORMAT + clrc9 + " M---M  " + R_FORMAT + clrc10 + " M---M  " + R_FORMAT + clrc11 + " M---M  " + R_FORMAT + clrc12 + " M---M  " + R_FORMAT + clrc13 + " M---M      " + R_FORMAT + clrc14 + "  M---M  " + R_FORMAT + clrc15 + " M---M  " + R_FORMAT + clrc16 + " M---M  " + R_FORMAT + clrc17 + " M---M" + R_FORMAT <<endl<<endl;	
	cout << "       " + clrd1 + " (=)   " + R_FORMAT + clrd2 + "  (=)   " + R_FORMAT + clrd3 + "  (=)   " + R_FORMAT + clrd4 + "  (=)      " + R_FORMAT + clrd5 + "    (=)   " + R_FORMAT + clrd6 + "  (=)   " + R_FORMAT + clrd7 + "  (=)   " + R_FORMAT + clrd8 + "  (=)   " + R_FORMAT + clrd9 + "  (=)   " + R_FORMAT + clrd10 + "  (=)   " + R_FORMAT + clrd11 + "  (=)   " + R_FORMAT + clrd12 + "  (=)   " + R_FORMAT + clrd13 + "  (=)       " + R_FORMAT + clrd14 + "   (=)   " + R_FORMAT + clrd15 + "  (=)   " + R_FORMAT + clrd16 + "  (=)   " + R_FORMAT + clrd17 + "  (=) " + R_FORMAT <<endl;
	cout << "   D   " + clrd1 + "q| |p  " + R_FORMAT + clrd2 + " q| |p  " + R_FORMAT + clrd3 + " q| |p  " + R_FORMAT + clrd4 + " q| |p     " + R_FORMAT + clrd5 + "   q| |p  " + R_FORMAT + clrd6 + " q| |p  " + R_FORMAT + clrd7 + " q| |p  " + R_FORMAT + clrd8 + " q| |p  " + R_FORMAT + clrd9 + " q| |p  " + R_FORMAT + clrd10 + " q| |p  " + R_FORMAT + clrd11 + " q| |p  " + R_FORMAT + clrd12 + " q| |p  " + R_FORMAT + clrd13 + " q| |p      " + R_FORMAT + clrd14 + "  q| |p  " + R_FORMAT + clrd15 + " q| |p  " + R_FORMAT + clrd16 + " q| |p  " + R_FORMAT + clrd17 + " q| |p" + R_FORMAT <<endl;
	cout << "       " + clrd1 + "M---M  " + R_FORMAT + clrd2 + " M---M  " + R_FORMAT + clrd3 + " M---M  " + R_FORMAT + clrd4 + " M---M     " + R_FORMAT + clrd5 + "   M---M  " + R_FORMAT + clrd6 + " M---M  " + R_FORMAT + clrd7 + " M---M  " + R_FORMAT + clrd8 + " M---M  " + R_FORMAT + clrd9 + " M---M  " + R_FORMAT + clrd10 + " M---M  " + R_FORMAT + clrd11 + " M---M  " + R_FORMAT + clrd12 + " M---M  " + R_FORMAT + clrd13 + " M---M      " + R_FORMAT + clrd14 + "  M---M  " + R_FORMAT + clrd15 + " M---M  " + R_FORMAT + clrd16 + " M---M  " + R_FORMAT + clrd17 + " M---M" + R_FORMAT <<endl<<endl;	
	cout << "       " + clre1 + " (=)   " + R_FORMAT + clre2 + "  (=)   " + R_FORMAT + clre3 + "  (=)   " + R_FORMAT + clre4 + "  (=)      " + R_FORMAT + clre5 + "    (=)   " + R_FORMAT + clre6 + "  (=)   " + R_FORMAT + clre7 + "  (=)   " + R_FORMAT + clre8 + "  (=)   " + R_FORMAT + clre9 + "  (=)   " + R_FORMAT + clre10 + "  (=)   " + R_FORMAT + clre11 + "  (=)   " + R_FORMAT + clre12 + "  (=)   " + R_FORMAT + clre13 + "  (=)       " + R_FORMAT + clre14 + "   (=)   " + R_FORMAT + clre15 + "  (=)   " + R_FORMAT + clre16 + "  (=)   " + R_FORMAT + clre17 + "  (=) " + R_FORMAT <<endl;
	cout << "   E   " + clre1 + "q| |p  " + R_FORMAT + clre2 + " q| |p  " + R_FORMAT + clre3 + " q| |p  " + R_FORMAT + clre4 + " q| |p     " + R_FORMAT + clre5 + "   q| |p  " + R_FORMAT + clre6 + " q| |p  " + R_FORMAT + clre7 + " q| |p  " + R_FORMAT + clre8 + " q| |p  " + R_FORMAT + clre9 + " q| |p  " + R_FORMAT + clre10 + " q| |p  " + R_FORMAT + clre11 + " q| |p  " + R_FORMAT + clre12 + " q| |p  " + R_FORMAT + clre13 + " q| |p      " + R_FORMAT + clre14 + "  q| |p  " + R_FORMAT + clre15 + " q| |p  " + R_FORMAT + clre16 + " q| |p  " + R_FORMAT + clre17 + " q| |p" + R_FORMAT <<endl;
	cout << "       " + clre1 + "M---M  " + R_FORMAT + clre2 + " M---M  " + R_FORMAT + clre3 + " M---M  " + R_FORMAT + clre4 + " M---M     " + R_FORMAT + clre5 + "   M---M  " + R_FORMAT + clre6 + " M---M  " + R_FORMAT + clre7 + " M---M  " + R_FORMAT + clre8 + " M---M  " + R_FORMAT + clre9 + " M---M  " + R_FORMAT + clre10 + " M---M  " + R_FORMAT + clre11 + " M---M  " + R_FORMAT + clre12 + " M---M  " + R_FORMAT + clre13 + " M---M      " + R_FORMAT + clre14 + "  M---M  " + R_FORMAT + clre15 + " M---M  " + R_FORMAT + clre16 + " M---M  " + R_FORMAT + clre17 + " M---M" + R_FORMAT <<endl<<endl;	
	cout << "       " + clrf1 + " (=)   " + R_FORMAT + clrf2 + "  (=)   " + R_FORMAT + clrf3 + "  (=)   " + R_FORMAT + clrf4 + "  (=)      " + R_FORMAT + clrf5 + "    (=)   " + R_FORMAT + clrf6 + "  (=)   " + R_FORMAT + clrf7 + "  (=)   " + R_FORMAT + clrf8 + "  (=)   " + R_FORMAT + clrf9 + "  (=)   " + R_FORMAT + clrf10 + "  (=)   " + R_FORMAT + clrf11 + "  (=)   " + R_FORMAT + clrf12 + "  (=)   " + R_FORMAT + clrf13 + "  (=)       " + R_FORMAT + clrf14 + "   (=)   " + R_FORMAT + clrf15 + "  (=)   " + R_FORMAT + clrf16 + "  (=)   " + R_FORMAT + clrf17 + "  (=) " + R_FORMAT <<endl;
	cout << "   F   " + clrf1 + "q| |p  " + R_FORMAT + clrf2 + " q| |p  " + R_FORMAT + clrf3 + " q| |p  " + R_FORMAT + clrf4 + " q| |p     " + R_FORMAT + clrf5 + "   q| |p  " + R_FORMAT + clrf6 + " q| |p  " + R_FORMAT + clrf7 + " q| |p  " + R_FORMAT + clrf8 + " q| |p  " + R_FORMAT + clrf9 + " q| |p  " + R_FORMAT + clrf10 + " q| |p  " + R_FORMAT + clrf11 + " q| |p  " + R_FORMAT + clrf12 + " q| |p  " + R_FORMAT + clrf13 + " q| |p      " + R_FORMAT + clrf14 + "  q| |p  " + R_FORMAT + clrf15 + " q| |p  " + R_FORMAT + clrf16 + " q| |p  " + R_FORMAT + clrf17 + " q| |p" + R_FORMAT <<endl;
	cout << "       " + clrf1 + "M---M  " + R_FORMAT + clrf2 + " M---M  " + R_FORMAT + clrf3 + " M---M  " + R_FORMAT + clrf4 + " M---M     " + R_FORMAT + clrf5 + "   M---M  " + R_FORMAT + clrf6 + " M---M  " + R_FORMAT + clrf7 + " M---M  " + R_FORMAT + clrf8 + " M---M  " + R_FORMAT + clrf9 + " M---M  " + R_FORMAT + clrf10 + " M---M  " + R_FORMAT + clrf11 + " M---M  " + R_FORMAT + clrf12 + " M---M  " + R_FORMAT + clrf13 + " M---M      " + R_FORMAT + clrf14 + "  M---M  " + R_FORMAT + clrf15 + " M---M  " + R_FORMAT + clrf16 + " M---M  " + R_FORMAT + clrf17 + " M---M" + R_FORMAT <<endl<<endl;	
	cout << "       " + clrg1 + " (=)   " + R_FORMAT + clrg2 + "  (=)   " + R_FORMAT + clrg3 + "  (=)   " + R_FORMAT + clrg4 + "  (=)      " + R_FORMAT + clrg5 + "    (=)   " + R_FORMAT + clrg6 + "  (=)   " + R_FORMAT + clrg7 + "  (=)   " + R_FORMAT + clrg8 + "  (=)   " + R_FORMAT + clrg9 + "  (=)   " + R_FORMAT + clrg10 + "  (=)   " + R_FORMAT + clrg11 + "  (=)   " + R_FORMAT + clrg12 + "  (=)   " + R_FORMAT + clrg13 + "  (=)       " + R_FORMAT + clrg14 + "   (=)   " + R_FORMAT + clrg15 + "  (=)   " + R_FORMAT + clrg16 + "  (=)   " + R_FORMAT + clrg17 + "  (=) " + R_FORMAT <<endl;
	cout << "   G   " + clrg1 + "q| |p  " + R_FORMAT + clrg2 + " q| |p  " + R_FORMAT + clrg3 + " q| |p  " + R_FORMAT + clrg4 + " q| |p     " + R_FORMAT + clrg5 + "   q| |p  " + R_FORMAT + clrg6 + " q| |p  " + R_FORMAT + clrg7 + " q| |p  " + R_FORMAT + clrg8 + " q| |p  " + R_FORMAT + clrg9 + " q| |p  " + R_FORMAT + clrg10 + " q| |p  " + R_FORMAT + clrg11 + " q| |p  " + R_FORMAT + clrg12 + " q| |p  " + R_FORMAT + clrg13 + " q| |p      " + R_FORMAT + clrg14 + "  q| |p  " + R_FORMAT + clrg15 + " q| |p  " + R_FORMAT + clrg16 + " q| |p  " + R_FORMAT + clrg17 + " q| |p" + R_FORMAT <<endl;
	cout << "       " + clrg1 + "M---M  " + R_FORMAT + clrg2 + " M---M  " + R_FORMAT + clrg3 + " M---M  " + R_FORMAT + clrg4 + " M---M     " + R_FORMAT + clrg5 + "   M---M  " + R_FORMAT + clrg6 + " M---M  " + R_FORMAT + clrg7 + " M---M  " + R_FORMAT + clrg8 + " M---M  " + R_FORMAT + clrg9 + " M---M  " + R_FORMAT + clrg10 + " M---M  " + R_FORMAT + clrg11 + " M---M  " + R_FORMAT + clrg12 + " M---M  " + R_FORMAT + clrg13 + " M---M      " + R_FORMAT + clrg14 + "  M---M  " + R_FORMAT + clrg15 + " M---M  " + R_FORMAT + clrg16 + " M---M  " + R_FORMAT + clrg17 + " M---M" + R_FORMAT <<endl<<endl;	
}
void chr_fil()
{
        if (R_Choice == "a1" || R_Choice == "A1")
                clra1 = "\033[32m";
        else if (R_Choice == "a2" || R_Choice == "A2")
                clra2 = "\033[32m";
        else if (R_Choice == "a3" || R_Choice == "A3")
                clra3 = "\033[32m";
        else if (R_Choice == "a4" || R_Choice == "A4")
                clra4 = "\033[32m";
        else if (R_Choice == "a5" || R_Choice == "A5")
                clra5 = "\033[32m";
        else if (R_Choice == "a6" || R_Choice == "A6")
                clra6 = "\033[32m";
        else if (R_Choice == "a7" || R_Choice == "A7")
                clra7 = "\033[32m";
        else if (R_Choice == "a8" || R_Choice == "A8")
                clra8 = "\033[32m";
        else if (R_Choice == "a9" || R_Choice == "A9")
                clra9 = "\033[32m";
        else if (R_Choice == "a10" || R_Choice == "A10")
                clra10 = "\033[32m";
        else if (R_Choice == "a11" || R_Choice == "A11")
                clra11 = "\033[32m";
        else if (R_Choice == "a12" || R_Choice == "A12")
                clra12 = "\033[32m";
        else if (R_Choice == "a13" || R_Choice == "A13")
                clra13 = "\033[32m";
        else if (R_Choice == "a14" || R_Choice == "A14")
                clra14 = "\033[32m";
        else if (R_Choice == "a15" || R_Choice == "A15")
                clra15 = "\033[32m";
        else if (R_Choice == "a16" || R_Choice == "A16")
                clra16 = "\033[32m";
        else if (R_Choice == "a17" || R_Choice == "A17")
                clra17 = "\033[32m";
        else if (R_Choice == "b1" || R_Choice == "B1")
                clrb1 = "\033[32m";
        else if (R_Choice == "b2" || R_Choice == "B2")
                clrb2 = "\033[32m";
        else if (R_Choice == "b3" || R_Choice == "B3")
                clrb3 = "\033[32m";
        else if (R_Choice == "b4" || R_Choice == "B4")
                clrb4 = "\033[32m";
        else if (R_Choice == "b5" || R_Choice == "B5")
                clrb5 = "\033[32m";
        else if (R_Choice == "b6" || R_Choice == "B6")
                clrb6 = "\033[32m";
        else if (R_Choice == "b7" || R_Choice == "B7")
                clrb7 = "\033[32m";
        else if (R_Choice == "b8" || R_Choice == "B8")
                clrb8 = "\033[32m";
        else if (R_Choice == "b9" || R_Choice == "B9")
                clrb9 = "\033[32m";
        else if (R_Choice == "b10" || R_Choice == "B10")
                clrb10 = "\033[32m";
        else if (R_Choice == "b11" || R_Choice == "B11")
                clrb11 = "\033[32m";
        else if (R_Choice == "b12" || R_Choice == "B12")
                clrb12 = "\033[32m";
        else if (R_Choice == "b13" || R_Choice == "B13")
                clrb13 = "\033[32m";
        else if (R_Choice == "b14" || R_Choice == "B14")
                clrb14 = "\033[32m";
        else if (R_Choice == "b15" || R_Choice == "B15")
                clrb15 = "\033[32m";
        else if (R_Choice == "b16" || R_Choice == "B16")
                clrb16 = "\033[32m";
        else if (R_Choice == "b17" || R_Choice == "B17")
                clrb17 = "\033[32m";
        else if (R_Choice == "c1" || R_Choice == "C1")
                clrc1 = "\033[32m";
        else if (R_Choice == "c2" || R_Choice == "C2")
                clrc2 = "\033[32m";
        else if (R_Choice == "c3" || R_Choice == "C3")
                clrc3 = "\033[32m";
        else if (R_Choice == "c4" || R_Choice == "C4")
                clrc4 = "\033[32m";
        else if (R_Choice == "c5" || R_Choice == "C5")
                clrc5 = "\033[32m";
        else if (R_Choice == "c6" || R_Choice == "C6")
                clrc6 = "\033[32m";
        else if (R_Choice == "c7" || R_Choice == "C7")
                clrc7 = "\033[32m";
        else if (R_Choice == "c8" || R_Choice == "C8")
                clrc8 = "\033[32m";
        else if (R_Choice == "c9" || R_Choice == "C9")
                clrc9 = "\033[32m";
        else if (R_Choice == "c10" || R_Choice == "C10")
                clrc10 = "\033[32m";
        else if (R_Choice == "c11" || R_Choice == "C11")
                clrc11 = "\033[32m";
        else if (R_Choice == "c12" || R_Choice == "C12")
                clrc12 = "\033[32m";
        else if (R_Choice == "c13" || R_Choice == "C13")
                clrc13 = "\033[32m";
        else if (R_Choice == "c14" || R_Choice == "C14")
                clrc14 = "\033[32m";
        else if (R_Choice == "c15" || R_Choice == "C15")
                clrc15 = "\033[32m";
        else if (R_Choice == "c16" || R_Choice == "C16")
                clrc16 = "\033[32m";
        else if (R_Choice == "c17" || R_Choice == "C17")
                clrc17 = "\033[32m";
        else if (R_Choice == "d1" || R_Choice == "D1")
                clrd1 = "\033[32m";
        else if (R_Choice == "d2" || R_Choice == "D2")
                clrd2 = "\033[32m";
        else if (R_Choice == "d3" || R_Choice == "D3")
                clrd3 = "\033[32m";
        else if (R_Choice == "d4" || R_Choice == "D4")
                clrd4 = "\033[32m";
        else if (R_Choice == "d5" || R_Choice == "D5")
                clrd5 = "\033[32m";
        else if (R_Choice == "d6" || R_Choice == "D6")
                clrd6 = "\033[32m";
        else if (R_Choice == "d7" || R_Choice == "D7")
                clrd7 = "\033[32m";
        else if (R_Choice == "d8" || R_Choice == "D8")
                clrd8 = "\033[32m";
        else if (R_Choice == "d9" || R_Choice == "D9")
                clrd9 = "\033[32m";
        else if (R_Choice == "d10" || R_Choice == "D10")
                clrd10 = "\033[32m";
        else if (R_Choice == "d11" || R_Choice == "D11")
                clrd11 = "\033[32m";
        else if (R_Choice == "d12" || R_Choice == "D12")
                clrd12 = "\033[32m";
        else if (R_Choice == "d13" || R_Choice == "D13")
                clrd13 = "\033[32m";
        else if (R_Choice == "d14" || R_Choice == "D14")
                clrd14 = "\033[32m";
        else if (R_Choice == "d15" || R_Choice == "D15")
                clrd15 = "\033[32m";
        else if (R_Choice == "d16" || R_Choice == "D16")
                clrd16 = "\033[32m";
        else if (R_Choice == "d17" || R_Choice == "D17")
                clrd17 = "\033[32m";
        else if (R_Choice == "e1" || R_Choice == "E1")
                clre1 = "\033[32m";
        else if (R_Choice == "e2" || R_Choice == "E2")
                clre2 = "\033[32m";
        else if (R_Choice == "e3" || R_Choice == "E3")
                clre3 = "\033[32m";
        else if (R_Choice == "e4" || R_Choice == "E4")
                clre4 = "\033[32m";
        else if (R_Choice == "e5" || R_Choice == "E5")
                clre5 = "\033[32m";
        else if (R_Choice == "e6" || R_Choice == "E6")
                clre6 = "\033[32m";
        else if (R_Choice == "e7" || R_Choice == "E7")
                clre7 = "\033[32m";
        else if (R_Choice == "e8" || R_Choice == "E8")
                clre8 = "\033[32m";
        else if (R_Choice == "e9" || R_Choice == "E9")
                clre9 = "\033[32m";
        else if (R_Choice == "e10" || R_Choice == "E10")
                clre10 = "\033[32m";
        else if (R_Choice == "e11" || R_Choice == "E11")
                clre11 = "\033[32m";
        else if (R_Choice == "e12" || R_Choice == "E12")
                clre12 = "\033[32m";
        else if (R_Choice == "e13" || R_Choice == "E13")
                clre13 = "\033[32m";
        else if (R_Choice == "e14" || R_Choice == "E14")
                clre14 = "\033[32m";
        else if (R_Choice == "e15" || R_Choice == "E15")
                clre15 = "\033[32m";
        else if (R_Choice == "e16" || R_Choice == "E16")
                clre16 = "\033[32m";
        else if (R_Choice == "e17" || R_Choice == "E17")
                clre17 = "\033[32m";
        else if (R_Choice == "f1" || R_Choice == "F1")
                clrf1 = "\033[32m";
        else if (R_Choice == "f2" || R_Choice == "F2")
                clrf2 = "\033[32m";
        else if (R_Choice == "f3" || R_Choice == "F3")
                clrf3 = "\033[32m";
        else if (R_Choice == "f4" || R_Choice == "F4")
                clrf4 = "\033[32m";
        else if (R_Choice == "f5" || R_Choice == "F5")
                clrf5 = "\033[32m";
        else if (R_Choice == "f6" || R_Choice == "F6")
                clrf6 = "\033[32m";
        else if (R_Choice == "f7" || R_Choice == "F7")
                clrf7 = "\033[32m";
        else if (R_Choice == "f8" || R_Choice == "F8")
                clrf8 = "\033[32m";
        else if (R_Choice == "f9" || R_Choice == "F9")
                clrf9 = "\033[32m";
        else if (R_Choice == "f10" || R_Choice == "F10")
                clrf10 = "\033[32m";
        else if (R_Choice == "f11" || R_Choice == "F11")
                clrf11 = "\033[32m";
        else if (R_Choice == "f12" || R_Choice == "F12")
                clrf12 = "\033[32m";
        else if (R_Choice == "f13" || R_Choice == "F13")
                clrf13 = "\033[32m";
        else if (R_Choice == "f14" || R_Choice == "F14")
                clrf14 = "\033[32m";
        else if (R_Choice == "f15" || R_Choice == "F15")
                clrf15 = "\033[32m";
        else if (R_Choice == "f16" || R_Choice == "F16")
                clrf16 = "\033[32m";
        else if (R_Choice == "f17" || R_Choice == "F17")
                clrf17 = "\033[32m";
        else if (R_Choice == "g1" || R_Choice == "G1")
                clrg1 = "\033[32m";
        else if (R_Choice == "g2" || R_Choice == "G2")
                clrg2 = "\033[32m";
        else if (R_Choice == "g3" || R_Choice == "G3")
                clrg3 = "\033[32m";
        else if (R_Choice == "g4" || R_Choice == "G4")
                clrg4 = "\033[32m";
        else if (R_Choice == "g5" || R_Choice == "G5")
                clrg5 = "\033[32m";
        else if (R_Choice == "g6" || R_Choice == "G6")
                clrg6 = "\033[32m";
        else if (R_Choice == "g7" || R_Choice == "G7")
                clrg7 = "\033[32m";
        else if (R_Choice == "g8" || R_Choice == "G8")
                clrg8 = "\033[32m";
        else if (R_Choice == "g9" || R_Choice == "G9")
                clrg9 = "\033[32m";
        else if (R_Choice == "g10" || R_Choice == "G10")
                clrg10 = "\033[32m";
        else if (R_Choice == "g11" || R_Choice == "G11")
                clrg11 = "\033[32m";
        else if (R_Choice == "g12" || R_Choice == "G12")
                clrg12 = "\033[32m";
        else if (R_Choice == "g13" || R_Choice == "G13")
                clrg13 = "\033[32m";
        else if (R_Choice == "g14" || R_Choice == "G14")
                clrg14 = "\033[32m";
        else if (R_Choice == "g15" || R_Choice == "G15")
                clrg15 = "\033[32m";
        else if (R_Choice == "g16" || R_Choice == "G16")
                clrg16 = "\033[32m";
        else if (R_Choice == "g17" || R_Choice == "G17")
                clrg17 = "\033[32m";
        else if (R_Choice == "S" || R_Choice == "s")
        		R_Choice = "FP SEATS";
}
void S_Filters()
{
		
	if (S_Choice == "S" || S_Choice == "s")
	{
		S_Message = "Enter the chair names of your choice (ex. a1): ";
		do
		{
			cls();
			shw_sts();
			cout << "\n\n\t\t" << S_Message << "\n\n\t\t";
			cin >> R_Choice;
			chr_fil();
			S_Message = R_Choice + " has been added to your reserved seat/s.     Enter \'S\' -- \033[3mStop picking seats\033[0m";
		} while (R_Choice != "O");
	}
	else if (S_Choice == "E" || S_Choice == "e")
	{
		
	}
	else if (S_Choice == "F" || S_Choice == "f")
		S_Choice = "P";
	else if (S_Choice == "R" || S_Choice == "r")
	{
		
	}
	else
	{
		
	}
}














































