#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool anagram(string wyraz1, string wyraz2)
{
    if (wyraz1.length() != wyraz2.length())
    {
        return false;   // dlugosc sie nie zgadza
    }

    // sortujemy babelkowo obydwa stringi
    // mozna za jednym razem, bo ich dlugosc jest taka sama
    for (int i = 0; i < wyraz1.length() - 1; i++)
    {
        for (int j = 0; j < wyraz2.length() - 1; j++)
        {
            if (wyraz1[j] > wyraz1[j+1])
                swap(wyraz1[j], wyraz1[j+1]);

            if (wyraz2[j] > wyraz2[j+1])
                swap(wyraz2[j], wyraz2[j+1]);
        }
    }

    return wyraz1 == wyraz2; //zwracamy true lub false
}

int main()
{
    string wyraz1, wyraz2;

    cout << "Podaj wyraz pierwszy" << endl;
    cin >> wyraz1;

    cout << "Podaj wyraz drugi" << endl;
    cin >> wyraz2;

    if (anagram(wyraz1, wyraz2))
    {
        cout << "Wyraz jest anagramem!" << endl;
    }
    else
    {
        cout << "Wyraz NIE jest anagramem!" << endl;
    }

    system("PAUSE >NUL");
    return 0;
}
