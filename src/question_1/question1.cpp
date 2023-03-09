#include "question1.h" // include prototypes
#include<iostream> // include input output stream

using std::cout; using std::cin; // specify standard library cout and cin 

bool test_config()
{
    return true;
}

int find_gcd(int num1, int num2) // definition for find gcd function
{
    int a, b, r;
    if(num1 > num2)
    {
        a = num1; // assign a to larger number
        b = num2; // assign b to smaller number
    }
    else if(num2 > num1)
    {
        a = num2; // assign a to larger number
        b = num1; // assign b to smaller number
    }
    else if(num1 == num2)
    {
        a = num1; 
        b = num2;
    }
    else
    {
        a = -1; 
        return a; // if no gcd can be found return -1
    }
    while(b != 0) //execute this condition as long as denominator != 0
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a; // return gcd
}

void get_input() // prompt user for input and capture input from user 
{
    int num1 = 0;
    int num2 = 0;
    auto choice = ' ';
    do // run menu at least once
    {
        cout<<"Please enter a number between from 1 to 200:\t";
        cin>>num1;
        cout<<"Please enter another number between 1 and 200:\t";
        cin>>num2;
        handle_input(num1, num2);
        cout<<"Would you like to continue the program? Enter y to continue, enter any other key to end....\n";
        cin>>choice;
    } while (choice == 'y' || choice == 'Y'); // test condition after running menu to see if user wants to run again
}

void handle_input(int num1, int num2) // process user input and output correct response
{
    auto gcd = 0;
    if(num1 >= 1 && num1 <= 200 && num2 >= 1 && num2<= 200)
    {
        gcd = find_gcd(num1, num2); // assign gcd variable to return result of find_gcd
        cout<<"The greatest common divisor of "<<num1<<" and "<<num2<<" is "<<gcd<<"\n\n"; // output gcd of num1 and num2
    }
    else if(num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200) // validate both numbers are in range 1 - 200
    {
        cout<<"Invalid entry, please try again....\n"; // display error
        get_input(); // invalid entry calls get_input to allow user to retry
    }
}