#include <iostream>
#include <ctime>
using namespace std;
void szyfrowanie(char *tekst, int przesuniencie[]) //Gwiazda - wskaünik
{
    int skok = 0;
    for(int i = 0; tekst[i] != '\0';i++) //warunek do momentu braku(NULL)
    {
        tekst[i] = (tekst[i] + przesuniencie[skok] );
        skok++;
        if(skok == 19) skok = 0;
    }
}
void odszyfrowanie(char * tekst, int przesuniencie[])
{
    int skok = 0;
    for(int i=0; tekst[i] != '\0';i++)
    {
        tekst[i] = (tekst[i] - przesuniencie[skok] );
        skok++;
        if(skok == 19) skok = 0;
    }
}
int main()
{
    int klucz[]={12,13,5,3,4,6,12,19,11,10,9,8,3,7,1,14,12,17,6,2};
    cout << endl;
    char tekstdoszyfrowania[100];
    cin.get (tekstdoszyfrowania,100);
    cout << tekstdoszyfrowania << endl;
    szyfrowanie(tekstdoszyfrowania,klucz);
    cout << tekstdoszyfrowania << endl;
    odszyfrowanie(tekstdoszyfrowania,klucz);
    cout << tekstdoszyfrowania;

return 0;
}
