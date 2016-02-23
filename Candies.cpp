//Candies
#include<iostream>

using namespace std;

int recursion(int arr[],int brr[],int m,int n)
{
		if(arr[m]>arr[m+1] && arr[m]>arr[m-1])
		{
			if(brr[m-1]==0)
				brr[m-1]=recursion(arr,brr,m-1,n);
			if(brr[m+1]==0)
				brr[m+1]=recursion(arr,brr,m+1,n);
			if(brr[m+1]>brr[m-1])
				return 1+brr[m+1];
			else
				return 1+brr[m-1];
		}
		else if(arr[m]>arr[m-1] && arr[m]<=arr[m+1])
		{
			if(brr[m-1]==0)
				brr[m-1]=recursion(arr,brr,m-1,n);
				//if(m==2)
                    //cout<<brr[2];
			return 1+brr[m-1];

		}
		else if(arr[m]<=arr[m-1] && arr[m]>arr[m+1])
		{
			if(brr[m+1]==0)
				brr[m+1]=recursion(arr,brr,m+1,n);
			return 1+brr[m+1];
		}
		else if(arr[m]<=arr[m-1] && arr[m]<=arr[m+1])
			return 1;
		
		return 0;


}


void f_last(int arr[],int brr[],int n)
{
	if(arr[0]<=arr[1])
		brr[0]=1;
	if(arr[n-1]<=arr[n-2])
		brr[n-1]=1;
	if(arr[0]>arr[1])
	{
		brr[0]=recursion(arr,brr,1,n)+1;

	}
	if(arr[n-1]>arr[n-2])
	{
		brr[n-1]=recursion(arr,brr,n-2,n)+1;

	}
}

int main()
{
	int arr[1000000],brr[1000000];
	int n,i,cost=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		brr[i]=0;
	}
	f_last(arr,brr,n);
	for(i=1;i<n-1;i++)
	{
		if(brr[i]==0)
			brr[i]=recursion(arr,brr,i,n);
	}

	for(i=0;i<n;i++)
	{
		cost=cost+brr[i];
		//cout<<brr[i]<<" ";
	}
	 cout<<cost;
}
