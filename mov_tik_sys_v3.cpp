#include <iostream>
using namespace std;

bool app_is_running, poster_mode;
string user_choice, genre_filter, message, choices, movie_1, movie_2, movie_3, chosen_movie, rst_clr, clra1, clra2, clra3, clra4, clra5, clrb1, clrb2, clrb3, clrb4, clrb5, clrc1, clrc2, clrc3, clrc4, clrc5, clrd1, clrd2, clrd3, clrd4, clrd5, clre1, clre2, clre3, clre4, clre5;
void inittialize_variables(), cls(), show_title(), show_posters(), show_seats(), show_message(), reset_message(string options), show_choices(), filter_user_choice();
int seats_status[5][5]=
	{
		{0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0}
	};

int main()
{
	inittialize_variables();
	do
	{	
		cls();
		if (poster_mode == true)
		{
			show_title();
			show_posters();
		}
		else
			show_seats();
		show_message();
		show_choices();
		cin >> user_choice;
		filter_user_choice();
	} while (app_is_running == true);
}

void cls()
{
	system("cls");
}
void inittialize_variables()
{
	user_choice = "1";
	genre_filter = "1";
	message = "Pick your movie:";
	app_is_running=true; 
	poster_mode=true;
	rst_clr = "\033[0m";
}
void show_title()
{
	cout << "title_template\n" << endl;
}
void show_posters()
{
	if (genre_filter == "G" || genre_filter == "g")
	{
		cout << "G_rated_posters_template\n" << endl;
		choices = "\'1\' -- G Comedy, \'2\' -- G Action, \'3\' -- G Horror, \n\n\'G\' -- Filter by genre, \'A\' -- Filter by age, \'R\' -- Reset screen";
		movie_1 = "G Comedy";
		movie_2 = "G Action";
		movie_3 = "G Horror";
	}
	else if (genre_filter == "PG" || genre_filter == "pg")
	{
		cout << "PG_rated_posters_template\n" << endl;
		choices = "\'1\' -- PG Comedy, \'2\' -- PG Action, \'3\' -- PG Horror, \n\n\'G\' -- Filter by genre, \'A\' -- Filter by age, \'R\' -- Reset screen";
		movie_1 = "PG Comedy";
		movie_2 = "PG Action";
		movie_3 = "PG Horror";
	}
	else if (genre_filter == "SPG" || genre_filter == "spg")
	{
		cout << "SPG_rated_posters_template\n" << endl;
		choices = "\'1\' -- SPG Comedy, \'2\' -- SPG Action, \'3\' -- SPG Horror, \n\n\'G\' -- Filter by genre, \'A\' -- Filter by age, \'R\' -- Reset screen";
		movie_1 = "SPG Comedy";
		movie_2 = "SPG Action";
		movie_3 = "SPG Horror";
	}
	else if (genre_filter == "Act" || genre_filter == "act" || genre_filter == "ACT")
	{
		cout << "Action_movie_posters_template\n" << endl;
		choices = "\'1\' -- G Action, \'2\' -- PG Action, \'3\' -- SPG Action, \n\n\'G\' -- Filter by genre, \'A\' -- Filter by age, \'R\' -- Reset screen";
		movie_1 = "G Action";
		movie_2 = "PG Action";
		movie_3 = "SPG Action";
	}
	else if (genre_filter == "Com" || genre_filter == "com" || genre_filter == "COM")
	{
		cout << "Comedy_movie_posters_template\n" << endl;
		choices = "\'1\' -- G Comedy, \'2\' -- PG Comedy, \'3\' -- SPG Comedy, \n\n\'G\' -- Filter by genre, \'A\' -- Filter by age, \'R\' -- Reset screen";
		movie_1 = "G Comedy";
		movie_2 = "PG Comedy";
		movie_3 = "SPG Comedy";
	}
	else if (genre_filter == "Hor" || genre_filter == "hor" || genre_filter == "HOR")
	{
		cout << "Horror_movie_posters_template\n" << endl;
		choices = "\'1\' -- G Horror, \'2\' -- PG Horror, \'3\' -- SPG Horror, \n\n\'G\' -- Filter by genre, \'A\' -- Filter by age, \'R\' -- Reset screen";
		movie_1 = "G Horror";
		movie_2 = "PG Horror";
		movie_3 = "SPG Horror";
	}
	else if (genre_filter == "1")
	{
		cout << "Recommended_movie_posters_template\n" << endl;
		choices = "\'1\' -- G Comedy, \'2\' -- PG Action, \'3\' -- SPG Horror, \n\n\'G\' -- Filter by genre, \'A\' -- Filter by age, \'R\' -- Reset screen";
		movie_1 = "G Comedy";
		movie_2 = "PG Action";
		movie_3 = "SPG Horror";
	}
}
void show_seats()
{
	cout << "|EXIT|         |   |      |EXIT|"<<endl;
	cout << "|    |         |   |      |    |"<<endl;
	cout << "|    |         |___|      |    |"<<endl;
	cout << "|____|                    |____|"<<endl;
	cout << "\n\n";
	cout << "         1       2       3       4       5";
	cout << "\n\n";
	cout << "       " + clra1 + " (=)   " + rst_clr + clra2 + "  (=)   " + rst_clr + clra3 + "  (=)   " + rst_clr + clra4 + "  (=)   " + rst_clr + clra5 + "  (=)   " + rst_clr << endl;
	cout << "   A   " + clra1 + "q| |p  " + rst_clr + clra2 + " q| |p  " + rst_clr + clra3 + " q| |p  " + rst_clr + clra4 + " q| |p  " + rst_clr + clra5 + " q| |p  " + rst_clr << endl;
	cout << "       " + clra1 + "M---M  " + rst_clr + clra2 + " M---M  " + rst_clr + clra3 + " M---M  " + rst_clr + clra4 + " M---M  " + rst_clr + clra5 + " M---M  " + rst_clr << endl;
	cout << "       " + clrb1 + " (=)   " + rst_clr + clrb2 + "  (=)   " + rst_clr + clrb3 + "  (=)   " + rst_clr + clrb4 + "  (=)   " + rst_clr + clrb5 + "  (=)   " + rst_clr << endl;
	cout << "   B   " + clrb1 + "q| |p  " + rst_clr + clrb2 + " q| |p  " + rst_clr + clrb3 + " q| |p  " + rst_clr + clrb4 + " q| |p  " + rst_clr + clrb5 + " q| |p  " + rst_clr << endl;
	cout << "       " + clrb1 + "M---M  " + rst_clr + clrb2 + " M---M  " + rst_clr + clrb3 + " M---M  " + rst_clr + clrb4 + " M---M  " + rst_clr + clrb5 + " M---M  " + rst_clr << endl;
	cout << "       " + clrc1 + " (=)   " + rst_clr + clrc2 + "  (=)   " + rst_clr + clrc3 + "  (=)   " + rst_clr + clrc4 + "  (=)   " + rst_clr + clrc5 + "  (=)   " + rst_clr << endl;
	cout << "   C   " + clrc1 + "q| |p  " + rst_clr + clrc2 + " q| |p  " + rst_clr + clrc3 + " q| |p  " + rst_clr + clrc4 + " q| |p  " + rst_clr + clrc5 + " q| |p  " + rst_clr << endl;
	cout << "       " + clrc1 + "M---M  " + rst_clr + clrc2 + " M---M  " + rst_clr + clrc3 + " M---M  " + rst_clr + clrc4 + " M---M  " + rst_clr + clrc5 + " M---M  " + rst_clr << endl;
	cout << "       " + clrd1 + " (=)   " + rst_clr + clrd2 + "  (=)   " + rst_clr + clrd3 + "  (=)   " + rst_clr + clrd4 + "  (=)   " + rst_clr + clrd5 + "  (=)   " + rst_clr << endl;
	cout << "   D   " + clrd1 + "q| |p  " + rst_clr + clrd2 + " q| |p  " + rst_clr + clrd3 + " q| |p  " + rst_clr + clrd4 + " q| |p  " + rst_clr + clrd5 + " q| |p  " + rst_clr << endl;
	cout << "       " + clrd1 + "M---M  " + rst_clr + clrd2 + " M---M  " + rst_clr + clrd3 + " M---M  " + rst_clr + clrd4 + " M---M  " + rst_clr + clrd5 + " M---M  " + rst_clr << endl;
	cout << "       " + clre1 + " (=)   " + rst_clr + clre2 + "  (=)   " + rst_clr + clre3 + "  (=)   " + rst_clr + clre4 + "  (=)   " + rst_clr + clre5 + "  (=)   " + rst_clr << endl;
	cout << "   E   " + clre1 + "q| |p  " + rst_clr + clre2 + " q| |p  " + rst_clr + clre3 + " q| |p  " + rst_clr + clre4 + " q| |p  " + rst_clr + clre5 + " q| |p  " + rst_clr << endl;
	cout << "       " + clre1 + "M---M  " + rst_clr + clre2 + " M---M  " + rst_clr + clre3 + " M---M  " + rst_clr + clre4 + " M---M  " + rst_clr + clre5 + " M---M  " + rst_clr << endl;
}
void reset_message(string options="default")
{
	if (options == "all")
	{
		message = "";
		chosen_movie = "";
	}
	else if (options == "default")
	{
		message = "";
	}
	else if (options == "pick_movie")
	{
		message = "Pick your movie:";
	}	
}
void show_message()
{
	if (chosen_movie == "")
		cout << message << endl;
	else
		cout << "Pick your seats for watching " << chosen_movie << endl;
}
void show_choices()
{
	cout << choices << endl;
}
void filter_user_choice()
{
	if (poster_mode == true)
	{
		if (user_choice == "G" || user_choice == "g")
		{
			cls();
			show_title();
			show_posters();
			reset_message("all");
			message = "Pick your genre: \'COM\' -- Comedy, \'ACT\' -- Action, \'HOR\' -- Horror";
			show_message();
			reset_message("pick_movie");
			cin >> genre_filter;
		}
		else if (user_choice == "A" || user_choice == "a")
		{
			cls();
			show_title();
			show_posters();
			reset_message("all");
			message = "Pick your age group: \'G\' -- Kids, \'PG\' -- Teens, \'SPG\' -- Adults";
			show_message();
			reset_message("pick_movie");
			cin >> genre_filter;
		}
		else if (user_choice == "R" || user_choice == "r")
		{
			cls();
			show_title();
			show_posters();
			show_message();
			show_choices();
			cin >> user_choice;
		}
		else if (user_choice == "1")
		{
			reset_message();
			chosen_movie = movie_1;
			choices = "Example: \'A1\'";
			poster_mode = false;
		}
		else if (user_choice == "2")
		{
			reset_message();
			chosen_movie = movie_2;
			choices = "Example: \'A1\'";
			poster_mode = false;
		}
		else if (user_choice == "3")
		{
			reset_message();
			chosen_movie = movie_3;
			choices = "Example: \'A1\'";
			poster_mode = false;
		}
		else
		{
			message = "\'" + user_choice + "\' is an invalid input.";
		}
	}
	else if (poster_mode != true)
	{
		if (user_choice == "Ret" || user_choice == "ret" || user_choice == "RET")
		{
			poster_mode = true;
		}
        else if (user_choice == "a1" || user_choice == "A1")
        {
                if (seats_status[0][0] == 1)
                {
                        choices = "Seat A1 ha already been reserved.";
                }
                else
                {
                        clra1 = "\033[32m";
                        seats_status[0][0] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "a2" || user_choice == "A2")
        {
                if (seats_status[0][1] == 1)
                {
                        choices = "Seat A2 ha already been reserved.";
                }
                else
                {
                        clra2 = "\033[32m";
                        seats_status[0][1] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "a3" || user_choice == "A3")
        {
                if (seats_status[0][2] == 1)
                {
                        choices = "Seat A3 ha already been reserved.";
                }
                else
                {
                        clra3 = "\033[32m";
                        seats_status[0][2] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "a4" || user_choice == "A4")
        {
                if (seats_status[0][3] == 1)
                {
                        choices = "Seat A4 ha already been reserved.";
                }
                else
                {
                        clra4 = "\033[32m";
                        seats_status[0][3] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "a5" || user_choice == "A5")
        {
                if (seats_status[0][4] == 1)
                {
                        choices = "Seat A5 ha already been reserved.";
                }
                else
                {
                        clra5 = "\033[32m";
                        seats_status[0][4] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "b1" || user_choice == "B1")
        {
                if (seats_status[1][0] == 1)
                {
                        choices = "Seat B1 ha already been reserved.";
                }
                else
                {
                        clrb1 = "\033[32m";
                        seats_status[1][0] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "b2" || user_choice == "B2")
        {
                if (seats_status[1][1] == 1)
                {
                        choices = "Seat B2 ha already been reserved.";
                }
                else
                {
                        clrb2 = "\033[32m";
                        seats_status[1][1] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "b3" || user_choice == "B3")
        {
                if (seats_status[1][2] == 1)
                {
                        choices = "Seat B3 ha already been reserved.";
                }
                else
                {
                        clrb3 = "\033[32m";
                        seats_status[1][2] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "b4" || user_choice == "B4")
        {
                if (seats_status[1][3] == 1)
                {
                        choices = "Seat B4 ha already been reserved.";
                }
                else
                {
                        clrb4 = "\033[32m";
                        seats_status[1][3] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "b5" || user_choice == "B5")
        {
                if (seats_status[1][4] == 1)
                {
                        choices = "Seat B5 ha already been reserved.";
                }
                else
                {
                        clrb5 = "\033[32m";
                        seats_status[1][4] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "c1" || user_choice == "C1")
        {
                if (seats_status[2][0] == 1)
                {
                        choices = "Seat C1 ha already been reserved.";
                }
                else
                {
                        clrc1 = "\033[32m";
                        seats_status[2][0] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "c2" || user_choice == "C2")
        {
                if (seats_status[2][1] == 1)
                {
                        choices = "Seat C2 ha already been reserved.";
                }
                else
                {
                        clrc2 = "\033[32m";
                        seats_status[2][1] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "c3" || user_choice == "C3")
        {
                if (seats_status[2][2] == 1)
                {
                        choices = "Seat C3 ha already been reserved.";
                }
                else
                {
                        clrc3 = "\033[32m";
                        seats_status[2][2] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "c4" || user_choice == "C4")
        {
                if (seats_status[2][3] == 1)
                {
                        choices = "Seat C4 ha already been reserved.";
                }
                else
                {
                        clrc4 = "\033[32m";
                        seats_status[2][3] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "c5" || user_choice == "C5")
        {
                if (seats_status[2][4] == 1)
                {
                        choices = "Seat C5 ha already been reserved.";
                }
                else
                {
                        clrc5 = "\033[32m";
                        seats_status[2][4] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "d1" || user_choice == "D1")
        {
                if (seats_status[3][0] == 1)
                {
                        choices = "Seat D1 ha already been reserved.";
                }
                else
                {
                        clrd1 = "\033[32m";
                        seats_status[3][0] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "d2" || user_choice == "D2")
        {
                if (seats_status[3][1] == 1)
                {
                        choices = "Seat D2 ha already been reserved.";
                }
                else
                {
                        clrd2 = "\033[32m";
                        seats_status[3][1] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "d3" || user_choice == "D3")
        {
                if (seats_status[3][2] == 1)
                {
                        choices = "Seat D3 ha already been reserved.";
                }
                else
                {
                        clrd3 = "\033[32m";
                        seats_status[3][2] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "d4" || user_choice == "D4")
        {
                if (seats_status[3][3] == 1)
                {
                        choices = "Seat D4 ha already been reserved.";
                }
                else
                {
                        clrd4 = "\033[32m";
                        seats_status[3][3] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "d5" || user_choice == "D5")
        {
                if (seats_status[3][4] == 1)
                {
                        choices = "Seat D5 ha already been reserved.";
                }
                else
                {
                        clrd5 = "\033[32m";
                        seats_status[3][4] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "e1" || user_choice == "E1")
        {
                if (seats_status[4][0] == 1)
                {
                        choices = "Seat E1 ha already been reserved.";
                }
                else
                {
                        clre1 = "\033[32m";
                        seats_status[4][0] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "e2" || user_choice == "E2")
        {
                if (seats_status[4][1] == 1)
                {
                        choices = "Seat E2 ha already been reserved.";
                }
                else
                {
                        clre2 = "\033[32m";
                        seats_status[4][1] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "e3" || user_choice == "E3")
        {
                if (seats_status[4][2] == 1)
                {
                        choices = "Seat E3 ha already been reserved.";
                }
                else
                {
                        clre3 = "\033[32m";
                        seats_status[4][2] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "e4" || user_choice == "E4")
        {
                if (seats_status[4][3] == 1)
                {
                        choices = "Seat E4 ha already been reserved.";
                }
                else
                {
                        clre4 = "\033[32m";
                        seats_status[4][3] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else if (user_choice == "e5" || user_choice == "E5")
        {
                if (seats_status[4][4] == 1)
                {
                        choices = "Seat E5 ha already been reserved.";
                }
                else
                {
                        clre5 = "\033[32m";
                        seats_status[4][4] = {1};
                        choices = user_choice + " has been added to your list.";
                }
        }
        else 
        {
        	message = "\'" + user_choice + "\' is an invalid input.";
		}

	}
}

