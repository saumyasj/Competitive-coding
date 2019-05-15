#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <pair<int,int>> times;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        times.push_back(make_pair((x+y),(i+1)));
    }
    sort(times.begin(),times.end());
    for(int i=0;i<n;i++)
    {
        cout<<times[i].second<<" ";
    }
}
