#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,ans=1,z=0;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)z=1;
	}
	if(z==1)cout<<"0"<<endl;
	else {
		for(i=0;i<n;i++)
		{
			if(ans<=1000000000000000000/a[i])
			{
				ans=ans*a[i];
			}
			else{
				ans=-1;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}