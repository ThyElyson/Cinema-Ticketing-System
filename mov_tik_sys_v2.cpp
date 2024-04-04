#include<iostream>
using namespace std;

string EN_Message, EX_Message, MOVIE_1, MOVIE_2, MOVIE_3, S_Message, G_Choice, gry(string gry_npt), bld_und_blk(string bld_und_blk_npt), itl(string itl_npt);
int EN_GATE_INPUT, welcome_ending_input, poster_input;
void cls(), buffer(int input), init_varb(), rset_varb(), shw_wlc_scr(), TITLE_CINEMA_NAME(), shw_poster(), M_Filters(), shw_mnu_choice();
char M_Choice;


int main(){
    do
    {
        init_varb();
        shw_wlc_scr();
        cin >> EN_GATE_INPUT;
		buffer(EN_GATE_INPUT);
        while(EN_GATE_INPUT != 0)
        {
            do
			{
				TITLE_CINEMA_NAME();
				shw_poster();
				shw_mnu_choice();
				cin >> M_Choice;
            	M_Filters();
            } while (M_Choice != 0);
        }
        cls();
        cout << "Thank you for reserving with us\nEnter \'1\' to exit";
        cin >> welcome_ending_input;
        buffer(welcome_ending_input);
        rset_varb();
    } while (welcome_ending_input != 1);
}
/*
				string seats_input;
                cls();
                cout << "Please choose your seats (ex A1):";
                cin >> seats_input;
                if (seats_input == "0")
                	poster_input = 0;
*/
void cls()
{
    system("cls");
}
void buffer(int input)
{
    if (input == 1)
        input = 1;
    else 
        input = 0;  
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
void G_Filter()
{
	
}
void shw_poster()
{
	if (G_Choice == "G" || G_Choice == "g")
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
		cout           << "\t\t  " << "|          G Comedy           |" << "             " << "|          G Action           |" << "             " << "|          G Horror           |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "-------------------------------" << "             " << "-------------------------------" << "             " << "-------------------------------" << endl;
	}
	else if (G_Choice == "PG" || G_Choice == "pg")
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
		cout           << "\t\t  " << "|         PG Comedy           |" << "             " << "|         PG Action           |" << "             " << "|         PG Horror           |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "-------------------------------" << "             " << "-------------------------------" << "             " << "-------------------------------" << endl;
	}
	else if (G_Choice == "SPG" || G_Choice == "spg")
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
		cout           << "\t\t  " << "|        SPG Comedy           |" << "             " << "|        SPG Action           |" << "             " << "|        SPG Horror           |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "-------------------------------" << "             " << "-------------------------------" << "             " << "-------------------------------" << endl;
	}
	else if (G_Choice == "A" || G_Choice == "a")
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
		cout           << "\t\t  " << "|          G Action           |" << "             " << "|         PG Action           |" << "             " << "|         SPG Action          |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "-------------------------------" << "             " << "-------------------------------" << "             " << "-------------------------------" << endl;
	}
	else if (G_Choice == "C" || G_Choice == "c")
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
		cout           << "\t\t  " << "|          G Comedy           |" << "             " << "|         PG Comedy           |" << "             " << "|         SPG Comedy          |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "-------------------------------" << "             " << "-------------------------------" << "             " << "-------------------------------" << endl;
	}
	else if (G_Choice == "H" || G_Choice == "h")
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
		cout           << "\t\t  " << "|          G Horror           |" << "             " << "|         PG Horror           |" << "             " << "|         SPG Horror          |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "|                             |" << "             " << "|                             |" << "             " << "|                             |" << endl;
		cout           << "\t\t  " << "-------------------------------" << "             " << "-------------------------------" << "             " << "-------------------------------" << endl;
	}
	else
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
	}
}
void shw_mnu_choice()
{
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
			cls();
			TITLE_CINEMA_NAME();
			shw_poster();
			G_Filter();
			break;
		case 'e':
		case 'E':
			break;
		case 'r':
		case 'R':
			cls();
			TITLE_CINEMA_NAME();
			shw_poster();
			break;
		default:
			break;
	}
}

