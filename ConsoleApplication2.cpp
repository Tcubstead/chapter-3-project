// Thomas Cubstead
//10/1/24
//Chapter 3 project
//1_Ingredient_Adjuster

//this program uses the input from the user to determine the amount of ingredients needed for a variable amount of cookies based on the provided recipe
#include <iostream>
using namespace std;

int main() {
    // recipe ingredients in cups
    const double sugar = 1.5; 
    const double butter = 1.0; 
    const double flour = 2.75;
    const int cookies = 48;

    // Variables for user input and calculations
    int desiredCookies;
    double AmountOfSugar, AmountOfButter, AmountOfFlour;

    // Ask user for the number of cookies they want to make
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;
    
    // Calculate the scaling factor based on desired cookies
    double scaleFactor = static_cast<double>(desiredCookies) / cookies;

    // Calculate the required amounts of each ingredient
    AmountOfSugar = sugar * scaleFactor;
    AmountOfButter = butter * scaleFactor;
    AmountOfFlour = flour * scaleFactor;

    // Display results
    cout << "To bake " << desiredCookies << " cookies, you need:" << endl;
    cout << AmountOfSugar << " cups of sugar" << endl;
    cout << AmountOfButter << " cups of butter" << endl;
    cout << AmountOfFlour << " cups of flour" << endl;

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
