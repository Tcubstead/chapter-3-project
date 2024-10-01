// Thomas Cubstead
// 10/1/24
// Chapter 3 Project
// 3_Interest_Earned

// This program calculates the amount of money that would be present after an amount of time of compounded interest in a savings account
#include <iostream>
#include <iomanip>
#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    // Variables to hold user input
    double principal;
    double Irate;
    int timesCompounded;
    double totInterest;

    // user input of principal amount
    cout << "Enter the principal amount (initial investment): ";
    cin >> principal;

    // user input of interest rate as a percentage
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> Irate;

    // user input of amount of times compounded 
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert the interest rate from percentage to decimal
    Irate /= 100;

    // Calculate the balance after one year using the compound interest formula
    double balance = principal * pow((1 + Irate / timesCompounded), timesCompounded);

    //convert decimal Irate back to percentage
    Irate = Irate * 100;

    // calculate the total amount of interest earned
    totInterest = (balance - principal);

    // Display the result
    cout << endl << fixed << setprecision(2);
    cout << "Interest Rate: " << Irate << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Pricipal: $ " << principal << endl;
    cout << "Interest: $ " << totInterest << endl;
    cout << "Amount in savings: $ " << balance << endl;

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
