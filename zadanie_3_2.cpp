#include<iostream>

using namespace std;

int main()
    {
  char znak;
  do
    {
    cout << "Wprowadz znak z klawiatury: ";
    cin >> znak;
    cout << "Wprowadzono znak: " << znak << endl;
    }
    while (znak != 't');


  return 0;
  }
