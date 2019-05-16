#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

bool result = true;

int vacc[n];
int patcnt[n];

for(int i=0;i<n;i++)
{
cin>>vacc[i];
}

for(int i=0;i<n;i++)
{
cin>>patcnt[i];
}

sort( vacc , vacc+n);
sort( patcnt , patcnt+n);

for(int i=0;i<n;i++)
{
	if( patcnt[i] > vacc[i] )
	{
		result = false;
		break;
	}

}

if(result)
cout<<"Yes\n";
else
cout<<"No\n";



return 0;
}
