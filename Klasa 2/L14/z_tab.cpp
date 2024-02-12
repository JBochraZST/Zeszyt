#include<iostream>
using namespace std;

void szukaj(int tab[], int n, int &MIN, int &MAX)
{
	int i = 2;
	if(n>=2) //jesli s¹ co najmnniej dwa elementy
	{
		if(tab[0]>tab[1]) //rozpatrujemy dwa pierwsze elementy
		{
			MIN = tab[1];
			MAX = tab[0];
		}
		else
		{
			MIN = tab[0];
			MAX = tab[1];
		}
		//rozpatrujê resztê liczb
		while(i+2<=n)
		{
			if(tab[i]>tab[i+1])
			{
				//tab[i] - nale¿y do zbioru potencjalnych maksimów
				//tab[i+1 - nale¿y do zbioru potencjalnych minimów
				if(tab[i]>MAX)
					MAX = tab[i];
				if(tab[i+1]<MIN)
					MIN = tab[i+1];
			}
			else
			{
				//tab[i+1] - nale¿y do zbioru potencjalnych maksimów
				//tab[i] - nale¿y do zbioru potencjalnych minimów
				if(tab[i+1]>MAX)
					MAX = tab[i+1];
				if(tab[i]<MIN)
					MIN = tab[i];
			}
			i+=2;
		}
		if(n%2==1) //jesli liczba elementów jest nieparzysta
		{
			if(tab[i] > MAX) MAX = tab[i];
			if(tab[i] < MIN) MIN = tab[i];
		}
	}
	else
	{
		MIN = MAX = tab[0];
	}
}

int main()
{
	int MIN, MAX, tab[100];
	unsigned int n;

	cout<<"Podaj liczbê elementów w zbiorze: ";
	cin>>n;

	if(n == 0 || n > 100)
		cout<<"Poda³es nieprawid³ow¹ liczbê!\n";
	else
		for(int i=0;i<n;i++)
			cin>>tab[i];

	szukaj(tab, n, MIN, MAX);

	cout<<"MIN: "<<MIN<<"\nMAX: "<<MAX<<endl;

	return 0;
}
