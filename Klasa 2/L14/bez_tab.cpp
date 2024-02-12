#include<iostream>
using namespace std;

int main()
{
	int a, b, MIN, MAX, i = 4;
	unsigned int n;

	cout<<"Podaj liczbê elementów w zbiorze: ";
	cin>>n;

	if(n==0)
		cout<<"Poda³es nieprawid³ow¹ liczbê!\n";
	else
	{
		if(n>=2) //jesli s¹ co najmnniej dwa elementy
		{
			//podajê pierwsze dwie liczby
			cin>>a>>b;
			if(a>b)
			{
				MIN = b;
				MAX = a;
			}
			else
			{
				MIN = a;
				MAX = b;
			}

			//wczytujê resztê liczb
			while(i<=n)
			{
				cin>>a>>b;
				if(a>b)
				{
					//a - nale¿y do zbioru potencjalnych maksimów
					//b - nale¿y do zbioru potencjalnych minimów
					if(a>MAX)
						MAX = a;
					if(b<MIN)
						MIN = b;
				}
				else
				{
					//b - nale¿y do zbioru potencjalnych maksimów
					//a - nale¿y do zbioru potencjalnych minimów
					if(b>MAX)
						MAX = b;
					if(a<MIN)
						MIN = a;
				}

				i+=2;
			}
			if(n%2==1) //jesli liczba elementów jest nieparzysta
			{
				cin>>a; //nale¿y wczytaæ ostatni element
				if(a > MAX) MAX = a;
				if(a < MIN) MIN = a;
			}
		}
		else
		{
			cin>>a;
			MIN = MAX = a;
		}

		cout<<"MAX: "<<MAX<<endl<<"MIN: "<<MIN<<endl;
	}

	system("pause");
	return 0;
}
