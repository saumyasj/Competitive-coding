#include<bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
   int n=0,i=0;
   cin>>n;
   int arr[n];
   for( i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int count=1;
   int max=arr[0];
   for(i=1;i<n;i++)
   {
       if(arr[i]<max)
       {
           count++;
       }
       max=arr[i];
   }
   cout<<count;
}
