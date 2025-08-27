#include <iostream>
#include "game.h"

void starting_point()
{	
	std::cout << "Hello stranger, you lost in forest. You have options to survive." << std::endl;
	std::cout << "Here is options:\n" << std::endl;
	std::cout << "1. Get in to tunnel \n" << std::endl;
	std::cout << "2. Follow to the road \n" << std::endl;
	std::cout << "3. Exit \n" << std::endl;
	std::cout << "Which want you to choose? \n" << std::endl;
}
int get_choice()
{
	int choice = 0;

	while (choice != 1 && choice != 2 && choice != 3)
	{
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "                       \n";
			std::cout << "You are in the tunnel. \n"
					  << "What's your next step? \n";			
			break;
		case 2: {
			int char_road = follow_the_road();
			break;
			}
		case 3:
			std::cout << "Okay okay, goodbye stranger" << std::endl;
			exit(0);
		default:
			std::cout << "Wrong choice!  \n"
				      << "You dont want play with me? \n"
				      << "Good Bye!\n" << std::endl;
			exit(0);
		}


	};

	return choice;
}

int follow_the_road()
{
	int road = 2;
	std::cout << "You are on the road: " << road << std::endl;
	std::cout << "You have to be careful on a " << road << " road cause there is a Devilmen"<< std::endl;
	return road;
}