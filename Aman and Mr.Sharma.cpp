#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin>>d;
    int toffees=0;
    while(d--)
    {
        int r,x,d,circum=0;
        cin>>r>>x;
        circum=(2*22*r)/7;
        d=100*x;
        if(d>circum)
        toffees++;
    }
    cout<<toffees;
}
