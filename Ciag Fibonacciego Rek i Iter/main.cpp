#include<iostream>
using namespace std;

int FiboR(int n)
{
    if(n == 0)
        return 0;
     if(n < 3)
        return 1;
     return FiboR(n - 2) + FiboR(n -1);
}

int FiboI(int n)
{
    int a=0;
    int b=1;


    for(int i=0;i<n;i++)
        {
            cout<<b<<" ";
            b += a;
            a = b-a;

        }
}
int main()
{
    int n;
    cin>>n;
    cout<<FiboI(12)<<endl; //tu se wpisujesz ile chcesz fibo rekurencyjnie w nawiasie
    FiboR(n);
    return 0;
}
