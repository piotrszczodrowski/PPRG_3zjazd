#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,delta,x0,x1,x2(0);
    cout << "Program rozwiaze rownanie kwadratowe a*x^2+b*x+c=0. Podaj wartosci wspolczynnikow." << endl;
    do {
      cout << "a = ";
      cin >> a;
      if (a == 0) {
        cout << "Wspolczynnik a nie może być równy 0!" << endl;
        }
        }
        while (a == 0);
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "Nastapi obliczenie rozwiazan rownania kwadratowego " << a << "*x^2+" << b << "*x+" << c << "=0. Nacisnij dowolny klawisz, aby kontynuowac." << endl;
    delta = b * b - 4*a*c;
    if (delta == 0)
      {
      x0 = (-b / (2 * a));
      if (x0 == (-0))
          {
                        x0 = -x0;
                        }
      cout << "Rownanie posiada jedno rozwiazanie w zbiorze liczb rzeczywistych x0 = " << x0 << "." << endl;
    }
    else if (delta > 0)
      {
      x1 = ((-b + sqrt(delta))/(2 * a));
      x2 = ((-b - sqrt(delta))/(2 * a));
      cout << "Rownanie posiada dwa rozwiazania w zbiorze liczb rzeczywistych: x1 = " << x1 << " oraz x2 = " << x2 << "." << endl;
      }
      else {
        float xr,xi;;
        delta = -delta;
        xr = ((-b) / (2 * a));
        if (xr == (-0)) {
                      xr = -xr;
                      }
        xi = sqrt(delta)/(2 * a);
        cout << "Rownanie posiada rozwiazanie w zbiorze liczb zespolonych: x1 = " << xr << " + " << xi << "i oraz x2 = " << xr << " - " << xi << "i.";


        }



      return 0;


}
