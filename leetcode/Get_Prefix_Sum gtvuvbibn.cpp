#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	long long int pref[n];
	pref[n-1]=a[0];
	int j=1;
	for(int i=n-2;i>=0;i--)
	{
		pref[i]=pref[i+1]+a[j];
		j++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<pref[i]<<" ";
	}
	cout<<endl;

}
