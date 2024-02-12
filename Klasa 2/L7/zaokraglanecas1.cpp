#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Podaj liczbe calkowita" << endl;
    cin >> n; // 5432
    int liczba;
    cout << "Zaokroglenie do: " << endl << "1.Tysiecy" << endl << "2.Setek" << endl << "3.Dziesiatek" << endl;
    cin >> liczba;
    switch(liczba)
    {
    case 1:
        {
            int r = n % 1000; // 5432 % 1000 = 432
            if(r<500) n = n-r; // n = 5432 - 432 = 5000
            else n = n+1000-r; // 5632 -> n = 5632 + 1000 - 632
            cout << n << endl;
            break;
        }
    case 2:
        {
             int r = n % 100; // n = 451 r = 51
            if(r<50) n = n-r;
            else n = n+100-r; //n = 451 + (100 - 51)
            cout << n << endl;
            break;

        }
    case 3:
        {
             int r = n % 10;
            if(r<5) n = n-r;
            else n = n+10-r;
            cout << n << endl;
            break;
        }
    }
    return 0;
}
