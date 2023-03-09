#include "question3.h" // include header with function prototypes
#include <iostream> // include input output stream

using std::cout; using std::cin; // specify where to find cin and cout

bool test_config()
{
    return true;
}

int roll_die() // roll die function uses no parameters and returns an int value
{
    int roll;
    int min = 1; // the min number a die can roll is 1
    int max = 6;// the max value is the die size of 6

    roll = rand() % (max - min + 1) + min;
    return roll; // return roll to get_input function
}

void get_input() // get input function uses no parameters and returns void
{
    srand(time(0)); // include random numbers
    auto die_roll = 0; // initialize die roll as 0
    auto choice = 'y';

    do // run this at least once then prompt user for input on whether or not to continue
    {
        for(int i=0; i<11; i++) // loop iterates 10 times and calls roll_die fn
        {   
            die_roll = roll_die();
            std::cout<<die_roll<<"\t";
        }
        std::cout<<"\n\nWould you like to roll the dice again?\nEnter y to roll again, enter any other key to exit...\t";
        std::cin>>choice;
    } while(choice == 'Y' || choice == 'y'); // continue rolling dice 10 times as long as user wishes to continue
}