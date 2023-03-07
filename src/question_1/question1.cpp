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

void menu() // display a menu that allows the user to continue or terminate program
{
    do
    {
        auto choice = 'y';
        get_input();
    } while (choice == 'y');
    
}

void get_input() // capture input from user 
{
    int num1 = 0;
    int num2 = 0;
    cout<<"Please enter a number between from 1 to 200:\t";
    cin>>num1;
    cout<<"Please enter another number between 1 and 200:\t";
    cin>>num2;
    handle_input();
}

void handle_input(int num1, int num2) // process input and output correct response to user
{
    auto gcd = 0;
    while(num1 >= 1 && num1 <= 200 && num2 >= 1 && num2<= 200)
    {
        gcd = find_gcd(num1, num2);
    }
    if(num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200)
    {
        cout<<"Invalid entry, please try again....";
        get_input();
    }
}