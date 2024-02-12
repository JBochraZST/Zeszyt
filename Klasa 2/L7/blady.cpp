#include <iostream>
using namespace std;
int main()
{
    float rz, zm;
    cout << "Podaj wartosc rzeczywista" << endl;
    cin >> rz;
    cout << "Podaj wartosc zmierzona" << endl;
    cin >> zm;
    float wzgledny = abs(rz-zm);
    cout << "Blad bezwzgledny wynosi: " << wzgledny << endl;
    cout << "Blad wzgledny wynosi: " << abs(wzgledny/rz)*100 << "% " << endl;
    return 0;
}
