#include<iostream>
using namespace std;

/*
int toral(int arr[],int i,int s)
{
	int j=(s/arr[i]);
}
*/
int brr[4000];
int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}


void sort_arr(int arr[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int c=arr[i];
		for(j=i-1;j>-1;j--)
		{
			if(c<arr[j])
				arr[j+1]=arr[j];
			else
				break;
		}
		arr[j+1]=c;
	}
}

int recursion(int x,int arr[],int n,int s,int index,int sum)
{
	int i,temp1;
	for(i=x;i>-1;i--)
	{
		sum=arr[i]+sum;
		//cout<<sum;
		if(sum==s)
          {
			brr[n-1]=s;
			return -5;
			}

		else if(sum>s)
			{
			   sum=sum-arr[i];


			}
		else
			{
				//int temp=sum;
				int z=recursion(i,arr,n,s,index,sum);
			    if(z==-5)
				 i=-5;
			    sum=max(sum,brr[index]);
				 ///temp1=sum;
				 if(sum<=s)
				 brr[index]=sum;
				 //cout<<brr[index]<<" ";

			    sum=sum-arr[i];
			}
			//sum=max(sum,temp1);

	}
	return 1;
}

int change(int arr[],int s, int n)
{
   int temp,sum;
	for(int i=n-1;i>=0;i--)
	{
		int sum=arr[i];
		if(sum<=s)
		brr[i]=sum;
		if(sum==s)
           {
            return (7);
            brr[n-1]=s;
           }
        else
		{
			int ans=recursion(i,arr,n,s,i,sum);
		}
		//sum=max(sum,temp);
		//temp=sum;
	}
	return (7);

	//change(arr,i,n,s,x);
}


int main()
{
	int sum,i,arr[4000],x,ans=0;
	int n,s,j,t;
	cin>>t;
	for(j=0;j<t;j++)
	{
		sum=0;
		cin>>n>>s;
		for(i=0;i<n;i++)
			{cin>>arr[i];
			brr[i]=0;}
		sort_arr(arr,n);
		ans=change(arr,s,n);
		sort_arr(brr,n);
    if(brr[n-1]<=s)
	cout<<brr[n-1]<<"\n";
	else
	cout<<0<"\n";
	}
}
