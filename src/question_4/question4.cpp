#include "question4.h" // include function prototypes from question 4 header file
#include <iostream> // include input output stream

using std::cout; using std::cin; using std::string; using std::endl;

bool test_config()
{
    return true;
}

void get_input() // code for function that prompts user for input and passes input to get fib seq then displays result of get fib seq
{
    auto choice = 'y';

    do
    {
        int num_nums = 0;
        string sequence = " ";
        cout<<"\nPlease enter a number between 1 and 15:\t";
        cin>>num_nums;
        if(num_nums < 16)
        {
            sequence = get_fib_sequence(num_nums);
            cout<<"The Fibonacci Sequence for "<<num_nums<<" is:\n"<<sequence<<endl;
        }
        else
        {
            cout<<"Invalid entry...\n";
            get_input();
        }
        cout<<"Enter y to run again. Enter any other key to end the program.\t";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');
}

string get_fib_sequence(int num_nums)
{
    int n = num_nums;
    std::string fib_seq = " ";
    if(n == 1){
        fib_seq = "1";
    }
    else if(n == 2){
        fib_seq = "0 1 1";
    }
    else if(n == 3){
        fib_seq = "0 1 1 2";
    }
    else if(n == 4){
        fib_seq = "0 1 1 2 3";
    }
    else if(n == 5){
        fib_seq = "0 1 1 2 3 5";
    }
    else if(n == 6){
        fib_seq = "0 1 1 2 3 5 8";
    }
    else if(n == 7){
        fib_seq = "0 1 1 2 3 5 8 13";
    }
    else if(n == 8){
        fib_seq = "0 1 1 2 3 5 8 13 21";
    }
    else if(n == 9){
        fib_seq = "0 1 1 2 3 5 8 13 21 34";
    }
    else if(n == 10){
        fib_seq = "0 1 1 2 3 5 8 13 21 34 55";
    }
    else if(n == 11){
        fib_seq = "0 1 1 2 3 5 8 13 21 34 55 89";
    }
    else if(n == 12){
        fib_seq = "0 1 1 2 3 5 8 13 21 34 55 89 144";
    }
    else if(n == 13){
        fib_seq = "0 1 1 2 3 5 8 13 21 34 55 89 144 233";
    }
    else if(n == 14){
        fib_seq = "0 1 1 2 3 5 8 13 21 34 55 89 144 233 377";
    }
    else if(n == 15){
        fib_seq = "0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610";
    }
    return fib_seq;
}