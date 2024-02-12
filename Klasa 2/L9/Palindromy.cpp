#include<iostream>
#include<cstring>
using namespace std;

bool czy_palindrom(char tab[])
{
	//ustawiam liczniki "i" i "j" na pierwszy i ostatni znak wyrazu tab
	int i=0, j = strlen(tab)-1; //pamiêtajmy, ¿e indeksujemy tablicê od 0

	while(i<j) //pêtla wykonuje siê do momentu spotkania liczników
	{
		if(tab[i]!=tab[j]) //gdy znaki nie bêd¹ siê zgadzaæ, to wyraz nie jest palindromem
			return false;

		++i; //przejscie do nastêpnej litery id¹c w praw¹ stronê
		--j; //przejscie do poprzedniej litry id¹c w lew¹ stronê
	}

	return true; //wyraz jest palindromem
}

int main()
{
	char tab[100];
	cout<<"Podaj wyraz: ";
	cin>>tab;

	if(czy_palindrom(tab)) //lub if(czy_palindrom(tab)==true) lub if(czy_palindrom(tab)==1)
		cout<<"Wyraz "<<tab<<" jest palindromem"<<endl;
	else
		cout<<"Wyraz "<<tab<<" nie jest palindromem"<<endl;

	return 0;
}
