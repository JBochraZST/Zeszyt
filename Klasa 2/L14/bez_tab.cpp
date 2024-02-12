#include<iostream>
using namespace std;

int main()
{
	int a, b, MIN, MAX, i = 4;
	unsigned int n;

	cout<<"Podaj liczb� element�w w zbiorze: ";
	cin>>n;

	if(n==0)
		cout<<"Poda�es nieprawid�ow� liczb�!\n";
	else
	{
		if(n>=2) //jesli s� co najmnniej dwa elementy
		{
			//podaj� pierwsze dwie liczby
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

			//wczytuj� reszt� liczb
			while(i<=n)
			{
				cin>>a>>b;
				if(a>b)
				{
					//a - nale�y do zbioru potencjalnych maksim�w
					//b - nale�y do zbioru potencjalnych minim�w
					if(a>MAX)
						MAX = a;
					if(b<MIN)
						MIN = b;
				}
				else
				{
					//b - nale�y do zbioru potencjalnych maksim�w
					//a - nale�y do zbioru potencjalnych minim�w
					if(b>MAX)
						MAX = b;
					if(a<MIN)
						MIN = a;
				}

				i+=2;
			}
			if(n%2==1) //jesli liczba element�w jest nieparzysta
			{
				cin>>a; //nale�y wczyta� ostatni element
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
