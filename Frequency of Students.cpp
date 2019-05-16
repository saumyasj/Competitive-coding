#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> freq;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        freq[s]++;
    }
    for(auto it=freq.begin();it!=freq.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
