#include <iostream>

using namespace std;

int silnia(int a)
    {
  int wynik(1);
  for (int i = 1; i <= a; i++)
    {
    wynik *= i;
    }
    return wynik;
    }
int symbol(int a, int b)
        {
  int wynik(0);
  wynik = silnia(a) / (silnia(b) * silnia(a - b));
  return wynik;
  }
int main() {
  int h(0);
  cout << "Podaj liczbe wierszy trojkata Pascala (0-10): ";
  cin >> h;
  for (int i = 0; i < h; i++){
        for (int j = 0; j <= i; j++)
{
      cout << symbol(i,j) << "  ";
    }
    cout << endl;
  }
}
