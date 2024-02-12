#include<iostream>
#include <locale.h>
#include <ctime>
using namespace std;

void sortowanie_babelkowe(int tab[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++) //pêtla wewnêtrzna
		if(tab[j-1]>tab[j])
			//zamiana miejscami
			swap(tab[j-1], tab[j]);
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
     srand( time( NULL ) );
	int *tab, n;
	int i;

	do{
        cout << "Wybierz: " << endl;
        cout << "1.rosnaca" << endl;
        cout << "2.malejaco" << endl;
        cout << "3.Koniec" << endl;
        cin >> i;
        switch(i)
        {
        case 1:
            cout<<"Ile liczb bêdziesz chcia³ posortowaæ? ";
	cin>>n;

	tab = new int [n]; //przydzielenie pamiêci na elementy tablicy
	//wczytanie liczb
	for(int i=0;i<n;i++)
    {
        tab[i]= rand() % 50+1;
		cout << tab[i] << " ";
    }
    cout << endl;
	sortowanie_babelkowe(tab,n);

	//wypisanie posortowanych elementów
	for(int i=0;i<n;i++)
          cout<<tab[i]<<" ";

  return 0;
        case 2:
            cout<<"Ile liczb bêdziesz chcia³ posortowaæ? ";
	cin>>n;

	tab = new int [n]; //przydzielenie pamiêci na elementy tablicy
	//wczytanie liczb
	for(int i=0;i<n;i++)
		 {
        tab[i]= rand() % 50+1;
		cout << tab[i] << " ";
        }
    cout << endl;


	sortowanie_babelkowe(tab,n);

	//wypisanie posortowanych elementów
	for(int i=0;i<n;i++)
          cout<<tab[i]<<" ";
  return 0;
        case 3:
            cout << "Koniec " << endl;
            return 0;
            break;
        default:
            cout << "Blad wprowadzania" << endl;
	};
	}while(i!=3);
}
