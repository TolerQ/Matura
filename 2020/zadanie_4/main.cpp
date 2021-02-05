#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool pierwsza(int n)
{
    int i=2;
    if(i<2) return false;
    while(i*i<=n&&n&i!=0) i++;
    if(i*i>n) return true;
    else return false;
}

int main()
{
    ifstream plik("przyklad.txt");

    int liczba[100];
    string slowo[100];

    int n = 0;

    while (plik >> liczba[n]>>slowo[n]) n++;


    return 0;
}
