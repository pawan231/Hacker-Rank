#include<iostream>
using namespace std;

int arr[50];
int brr[300000];
/*int f(int n)
{
    if(n>-1 && n<4)
        return 1;
    else if(n<0)
        return 0;
    else
        {int w=f(n-1)+f(n-4);
        return w;}
}*/

int prime_number(int w)
{
    int i,j,x=0;
   for(i=2;i*i<=w;i++)
   {
       if(brr[i]==0)
       {for(j=i*2;j<=w;j=j+i)
          brr[j]=1;}
   }
   for(i=2;i<=w;i++)
   {
       if(brr[i]==0)
        x++;
   }
    return x;
}


int main()
{
    int i;
    int n,t;
    brr[250000]={0,};
    arr[1]=arr[2]=arr[3]=arr[0]=1;
    for(i=4;i<42;i++)
    {//int w=f(n-1)+f(n-4);
         arr[i]=arr[i-1]+arr[i-4];}

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
    int ans=prime_number(arr[n]);
    cout<<ans<<endl;
   }
}
