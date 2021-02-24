#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int rozne(string s)
{
    sort(s.begin(), s.end());
    int licznik = 1;
    for(int i =1; i<s.size(); i++)
        if(s[i]!=s[i-1])
            licznik++;
            return licznik;
}
int odleglosc(string d)
{
    int odl = 0;
    for(int i = 0; i<d.size()-1;i++)
    {
        for(int j = i+1;j<d.size();j++)
        {
            odl = max(abs(d[i]-d[j]),odl);
        }
    }
    return odl;
}
int main()
{
    string data[1001];
    ifstream file("sygnaly.txt");
    if(file.good())
    {
        string tmpString ="";
        int dataIter = 0;
        while(file >> tmpString)
        {
            data[dataIter] = tmpString;
            dataIter++;
        }
        file.close();
    }

int iterator = 39;
string odpowiedz ="";
while(iterator < 1000)
{
    odpowiedz+=data[iterator][9];
    iterator +=40;
}
 cout<< odpowiedz<<endl<<endl;


 //_____Zadanie 4_2
    string s="";
    int odp_w = -1;
    string odp_s;
    for(int i = 1;i<=1000; i++)
    {
         int w = rozne(data[i]);
         if(w>odp_w)
         {
             odp_w=w;
             odp_s=data[i];
         }
    }
    cout <<"4_2 "<<odp_w<<" "<<odp_s<<endl;



    //4_3

    for(int i = 0; i<1001;i++)
    {
        if(odleglosc(data[i])<=10)
        {
            cout << data[i]<<endl;
        }
    }
}
