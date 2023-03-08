#include "question2.h"
#inlcude <iostream> // include input output stream

using std::cout; using std::cin; // specify which library to use cin and cout from

bool test_config()
{
    return true;
}

int get_earned_points(int sold) // determine points multiplier based on units sold
{
    auto multiplier = 0; // initialize multiplier variable as 0
    auto points = 0; // initialize points variable as 0
    if(sold >= 1 && sold <= 5) // units sold between 1 and 5, mult = 1
    {
        multiplier = 1;
    }
    else if(sold >= 6 && sold <= 10) // units sold between 6 and 10, mult = 5
    {
        multiplier = 5;
    }
    else if(sold >= 11 && sold <= 15) // units sold betwween 11 and 15, mult = 10
    {
        multiplier = 10;
    }
    else if(sold >= 16) // units sold 16 or greater, mult = 15
    {
        multiplier = 15;
    }
    points = sold * multiplier; // assign product of sold * multiplier to points variable
    return points; // return total points earned
}

void get_input() // prompt user for input to pass to get_earned_points function
{
    auto choice = 'y';
    do // get input and run get_earned_points at least once then promopt user for input to continue
    {
        int sold = 0; // initalize units sold variable with 0
        int points = 0; // initalize points variable with 0
        std::cout<<"Please enter the number of widgets sold this month:\t";
        std::cin>>sold; // pass sold to get_earned_points after validating input
        if(sold > 1) // validate input of sold. if > 1, run get_earned_points
        {
            points = get_earned_points(sold); // assign return value of get_earned_points to points variable
        }
        else // if sold < 1, display error message and rerun program
        {
            std::cout<<"Invalid entry....Please enter a value greater than 1...\n\n";
            get_input(); // run program again now that user understands what values are invalid
        }
        std::cout<<"Points earned:\t"<<points<<"\n\n";
        std::cout<<"Would you like to run the program again?\nEnter Y for yes. Enter any other key to end the program.\n";
        std::cin>>choice;
    } while(choice == 'Y' || choice == 'y'); // continue running program as long as user wishes to continue
}  