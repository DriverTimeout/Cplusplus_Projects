#include <iostream>
using namespace std;

int main()
{

int a, b, c, d, e, tempV, tVar;
    int Highnum(int);
    int Lownum(int);
    cout << "Enter the value for Total miles driven per trip ==> ";
    cin >> a;
    cout << "Enter the value for Cost per gallon of gasoline. ==> ";
    cin >> b;
    cout << "Enter the value for Average miles per gallon. ==> ";
    cin >> c;
    cout << "Enter the value for Parking fees per trip. ==> ";
    cin >> d;
    cout << "Enter the value for Tolls per trip.  ==> ";
    cin >> e;

    tempV =   ((a/c) * b) + (e + d);


    cout << "Heres your total expenses  ==> " << tempV << endl;

}
