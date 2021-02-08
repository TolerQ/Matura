#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool pierwsza(int n)
{

    int i = 2;
    if (i<2) return false;
    while(i*i<=n&&n%i!=0) i++;
    if (i*i>n) return true;
    else return false;
}

int suma_p(int n)
{
    if (n==4) return 2;
    int k=3;//-pierwszy sk³adnik, pierwsza liczba
    while(k<=n/2&&!(pierwsza(k)&&pierwsza(n-k))) k+=2;
    return k;
}

int main()
{
    ifstream plik("przyklad.txt");

    int liczba[100];
    string znaki[100];
    int n = 0;

    while(plik>>liczba[n]>>znaki[n]) n++;

    //zadanie 4.1
    for(int i=0; i<n; i++)
        if(liczba[i]%2==0)
        {
            int k = suma_p(liczba[i]);
            cout<<liczba[i]<<' '<<k<<' '<<liczba[i]-k<<endl;
        }
    cout<<"ZADANIE 2"<<endl;
    int naj, licz;
    string litera;
    for(int i=0; i<100; i++)
    {
        naj=1, licz=1;
        int dlugosc=znaki[i].length();
        litera=znaki[i][0];
        for(int j=0; j<dlugosc-1; j++)
        {
            if(znaki[i][j]==znaki[i][j+1])  licz++;
            else
            {
                if(licz>naj)
                {
                    naj=licz;
                    litera=znaki[i][j];
                }
                licz=1;
            }
        }
        for(int x=0; x<naj;x++)
            cout<<litera;
        cout<<" "<<naj<<endl;
    }
    return 0;
}
