#include <iostream>
using namespace std;

bool app_is_running, poster_mode;
string user_choice, genre_filter, message, choices, movie_1, movie_2, movie_3, chosen_movie;
void cls(), inittialize_variables(), show_title(), show_posters(), show_seats(), reset_message(string options), show_message(), show_choices(), filter_user_choice();

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
	cout << "seats_template\n" << endl;
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
	}
	else if (poster_mode != true)
	{
		if (user_choice == "Ret" || user_choice == "ret" || user_choice == "RET")
		{
			poster_mode = true;
		}	
	}
}

