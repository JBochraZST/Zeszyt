#include<iostream>
#include<cstring>
using namespace std;

bool czy_palindrom(char tab[])
{
	//ustawiam liczniki "i" i "j" na pierwszy i ostatni znak wyrazu tab
	int i=0, j = strlen(tab)-1; //pami�tajmy, �e indeksujemy tablic� od 0

	while(i<j) //p�tla wykonuje si� do momentu spotkania licznik�w
	{
		if(tab[i]!=tab[j]) //gdy znaki nie b�d� si� zgadza�, to wyraz nie jest palindromem
			return false;

		++i; //przejscie do nast�pnej litery id�c w praw� stron�
		--j; //przejscie do poprzedniej litry id�c w lew� stron�
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
