#include <iostream>
using namespace std;

// Function declarations
void Highnum(int, int, int, int, int, int, int&);

int main()
{
    // Variables
    int a, b, c, d, e, tempH, tempL;

    // User input
    cout << "Enter the total miles ==> ";
    cin >> a;
    cout << "Enter the price per gallon  ==> ";
    cin >> b;
    cout << "Enter the average miles per gallon ==> ";
    cin >> c;
    cout << "Enter the price for parking fees ==> ";
    cin >> d;
    cout << "Enter the value for tolls ==> ";
    cin >> e;

    // Function calls
    Highnum(a, b, c, d, e, tempH,tempL);

    // Output
    cout << "Your total cost ==> " << tempL << endl;
    
}

// Function definition for finding the highest number
void Highnum(int a, int b, int c, int d, int e, int tempH, int& tempL)
{
    tempL = (a/c * b) + d + e;

    }


