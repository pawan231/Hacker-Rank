#include<iostream>
using namespace std;

int main()
{
	int arr[1000];
	long long t[1000][1000];
	int i,j,n,c;
	cin>>n>>c;
	for(i=0;i<c;i++)
		cin>>arr[i];
	n=n+1;
	for(i=0;i<n;i++)
		t[0][i]=0;
	for(i=0;i<c+2;i++)
		t[i][0]=1;
	for(i=1;i<=c;i++)
	{
		for(j=1;j<n;j++)
		{
			if(j>=arr[i-1])
			{
				t[i][j]=t[i-1][j]+t[i][j-arr[i-1]];
			}
			else
			{
				t[i][j]=t[i-1][j];
			}

		}

	}
	cout<<t[c][n-1];
}
