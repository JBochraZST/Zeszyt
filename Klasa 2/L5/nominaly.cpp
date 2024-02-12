#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    int  liczbanominalow, i=0;
    float nominaly[]={200,100,50,20,10,5,2,1,0.5,0.2,0.1,0.05,0.02,0.01},reszta;

    cout << "Podaj kwote" << endl;
    cin >> reszta;

    cout << "wydaj nastepujace nominaly:" << endl;
    while(reszta!=0)
    {
        if(reszta >= nominaly[i]){
            liczbanominalow=reszta/nominaly[i];
            reszta=round((reszta-(nominaly[i]*liczbanominalow))*100)/100;
            cout << nominaly[i] << "zl - " << liczbanominalow << " szt." << endl;
        }
        i++;
    }
    return 0;
}
