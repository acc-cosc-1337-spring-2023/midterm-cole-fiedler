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
    int num1 = 0;
    int num2 = 1;
    int next_num = 0;
    std::string fib_seq = "           ";

    for(int i = 0; i < num_nums; i++)
    {
        next_num = num1 + num2;
        fib_seq[i] = next_num;
        num1 = num2;
        num2 = next_num;
    }
    return fib_seq;
}