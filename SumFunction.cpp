// SumFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void add_values(float m, float n) {
    cout << "\n sum of the two given values is " << (m + n);
}


//add two numbers using a function
int main()
{
    //float x = 5, y = 6;
    //add_values(x,y); //passing x and y into the function
    add_values(5, 6); 
    add_values(3, 9);
    add_values(10, 20);
    add_values(1234, 7263);
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
