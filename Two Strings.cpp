#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        map<char,int> m1,m2;
        if(a.length()==b.length())
        {
            for(int i=0;i<a.length();i++)
            {
                m1[a[i]]++;
            }
            for(int i=0;i<b.length();i++)
            {
                m2[b[i]]++;
            }
            if(std::equal(m1.begin(),m1.end(),m2.begin()))
                cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
