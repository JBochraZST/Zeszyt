#include <iostream>
#include <stdlib.h>

using namespace std;

int liczba5=0, liczba2=0, liczba1=0, reszta;
int main()
{
    cout<<"Podaj kwote do wydania: ";
    cin>>reszta;

    liczba5=reszta/5;
    reszta = reszta -liczba5*5;
    liczba2=reszta/2;
    reszta=reszta-liczba2*2;

    cout<<"Do wydania: "<<endl;
    cout<<liczba5<<"szt. 5PLN"<<endl;
    cout<<liczba2<<"szt. 2PLN"<<endl;
    cout<<reszta<<"szt. 1PLN"<<endl;
    return 0;
}
