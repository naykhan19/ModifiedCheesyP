// CheesyProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Nayem Khan
// 10-31-21

#include <iostream>

using namespace std;

int main()
{
    //displaying welcome message
    cout << "***********************************************************" << endl;
    cout << "*************** Let's make some cheese money! **************" << endl;
    cout << "***********************************************************" << endl;
    cout << "\n" << endl;

    //declaring constants
    const float chs_per_cont = 2.76, cost_per_cont = 4.12, profit_per_cont = 1.45;
    int cheese, containers;
    float cost, profit;

    //taking input from the user
    cout << "Please Enter the total number of kilograms of cheese produced:";
    cin >> cheese;
    containers = cheese / chs_per_cont + 1;
    cout << "The number of containers to hold the cheese is:..............." << containers << endl;

    //calculating profit and cost
    profit = containers * profit_per_cont;
    cost = containers * cost_per_cont;

    //displaying the result
    cout << "The cost for producing " << containers << " container(s) of cheese is:.........." << cost << endl;
    cout << "The proft for producing " << containers << " container(s) of cheese is:.........." << profit << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
