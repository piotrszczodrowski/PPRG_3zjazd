#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x,y(0);
    cout << "Wprowadz wartosc x (float): ";
    cin >> x;
    cout << endl;
    cout << "Wprowadz wartosc y (float): ";
    cin >> y;
    cout << endl;
    cout << "x + y = " << fixed << setprecision(2) <<x + y << endl;
    cout << "x - y = " << fixed << setprecision(2) <<x - y << endl;
    cout << "x * y = " << fixed << setprecision(2) <<x * y << endl;
    cout << "x / y = " << fixed << setprecision(2) <<x / y << endl;
    return 0;
}
