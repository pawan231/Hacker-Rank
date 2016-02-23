//String Reduction#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    int i,n1,n2,n3,t,x,j;
    char str[100001];
   scanf("%d",&t);
    for(j=0;j<t;j++)
{
    scanf("%s",str);
    i=0;
    n1=n2=n3=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a')
            n1++;
        if(str[i]=='b')
            n2++;
        if(str[i]=='c')
            n3++;
        i++;
    }
    if(n1!=0 && n2==0 && n3==0 || n1==0 && n2!=0 && n3==0 || n1==0 && n2==0 && n3!=0)
        {if(n1!=0)
        x=n1;
        if(n2!=0)
            x=n2;
        if(n3!=0)
            x=n3;
            }

    else{
    if(n1%2==0 && n2%2==0 && n3%2==0)
        x=2;
     else
       {
        if(n1%2!=0 && n2%2!=0 && n3%2!=0)
        x=2;
        else
        {
            x=1;
        }
        }}

    printf("%d\n",x);}
}
