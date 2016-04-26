//Algorithmic Crush
#include<iostream>
using namespace std;
int main()
{
	int n,m,k,a,b,i;
	long int temp,max;
	cin>>n;
	long int *arr=new long int[n+3]();
	cin>>m;
	while(m--)
	{
		cin>>a>>b>>k;
		arr[a]+=k;
		arr[b+1]-=k;
	}

	temp=max=0;
	for(i=1;i<=n;i++)
	{
		temp+=arr[i];
		if(temp>max)
			max=temp;
	}
	cout<<max;
}
