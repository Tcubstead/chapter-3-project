// Thomas Cubstead
// 10/1/24
// Chatper 3 Programming Project
// 2_Math_Tutor

// This program helps with basic math equation prctice by providing a question and after a pause funtion it provides the answer that can be compared with the students response
#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate two random numbers between 1 and 20
    int num1 = rand() % 20 + 1;
    int num2 = rand() % 20 + 1;
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
