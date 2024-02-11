#include <iostream>
using namespace std;

// Function declarations
void Highnum(int, int, int, int, int, int&);
void Lownum(int, int, int, int, int, int&);

int main()
{
    // Variables
    int a, b, c, d, e, tempH, tempL;

    // User input
    cout << "Enter the value for a ==> ";
    cin >> a;
    cout << "Enter the value for b ==> ";
    cin >> b;
    cout << "Enter the value for c ==> ";
    cin >> c;
    cout << "Enter the value for d ==> ";
    cin >> d;
    cout << "Enter the value for e ==> ";
    cin >> e;

    // Function calls
    Highnum(a, b, c, d, e, tempH);
    Lownum(a, b, c, d, e, tempL);

    // Output
    cout << "The highest number is ==> " << tempH << endl;
    cout << "The lowest number is ==> " << tempL << endl;
}

// Function definition for finding the highest number
void Highnum(int a, int b, int c, int d, int e, int& tempH)
{
    tempH = a;

    if (b > tempH)
    {
        tempH = b;
    }
    if (c > tempH)
    {
        tempH = c;
    }
    if (d > tempH)
    {
        tempH = d;
    }
    if (e > tempH)
    {
        tempH = e;
    }
}

// Function definition for finding the lowest number
void Lownum(int a, int b, int c, int d, int e, int& tempL)
{
    tempL = a;

    if (b < tempL)
    {
        tempL = b;
    }
    if (c < tempL)
    {
        tempL = c;
    }
    if (d < tempL)
    {
        tempL = d;
    }
    if (e < tempL)
    {
        tempL = e;
    }
}
