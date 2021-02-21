#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
bool czyPierwsza(int a)
{
   if(a<2)
   {
       return false;
   }else
   {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                return false;
            }
        }
        return true;
   }


}
int odwroc(int b)
{
    string tmp = "";
    int cieta;
    while(b>0)
    {
        cieta = b%10;
        b/=10;
        tmp += to_string(cieta);
    }
     return stoi(tmp);
}
int sumaCyfr(int c)
{
    int suma = 0;
    while (c!=0)
    {
        suma += c%10;
        c/=10;
    }
    return suma;
}
int wagaLiczby(int d)
{
    if(d<10)
    {
        return d;
    }else
    {
        wagaLiczby(sumaCyfr(d));
    }

}
int main()
{
    //zadanie 4_1
   cout << "zadanie 4_1"<< endl<< "_________________________________________________________"<<endl;
    int temp;
    ifstream plik("liczby.txt");
    vector<int> liczby;

    while(plik>>temp)
    {
        liczby.push_back(temp);
    }
    for(int i = 0; i<liczby.size();i++)
    {
        if(czyPierwsza(liczby[i]) && liczby[i]>=100 && liczby[i]<=5000)
        {
            cout <<liczby[i] << endl;
        }
    }

    //zadanie 4_2
    cout << "zadanie 4_2"<< endl<< "_________________________________________________________"<<endl;
    ifstream plik2("pierwsze.txt");
    vector<int> pierwsze;
    while(plik2>>temp)
    {
        pierwsze.push_back(temp);
    }
    for(int i=0; i<pierwsze.size();i++)
    {
        if(czyPierwsza(odwroc(pierwsze[i])))
        {
            cout<<pierwsze[i]<<endl;
        }
    }
    //zadanie 4_3
    cout << "zadanie 4_3"<< endl<< "_________________________________________________________"<<endl;
    int iloscLiczb = 0;
    for(int i=0; i<pierwsze.size();i++)
    {
        if(wagaLiczby(pierwsze[i])== 1)
        {
            iloscLiczb++;

        }

    }
    cout <<iloscLiczb;
}
