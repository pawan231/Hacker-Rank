//The Maximum Subarray

#include<iostream>
using namespace std;
int answer(int arr[],int n)
{
	int i,ans,sum;
    ans=sum=arr[0];
	for(i=1;i<n;i++)
	{
		if((arr[i]+sum)<0 )
			sum=0;
		else{
            sum=arr[i]+sum;}
		if(sum>ans && sum!=0)
            ans=sum;
        if(arr[i]>ans)
            ans=arr[i];
	}
	return ans;
}

int main()
{
	int arr[1000000];
	int i,j,n,t,cs,ns;
	cin>>t;
	for(j=0;j<t;j++)
	{
		cs=ns=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			
		}
        ns=arr[0];
        for(i=1;i<n;i++)
		{
			if((arr[i]+ns)>ns)
                ns=arr[i]+ns;
            if(ns<arr[i])
                ns=arr[i];
			
		}
		cs=answer(arr,n);
		cout<<cs<<" "<<ns<<"\n";
	}
	
	return 0;
	
}
