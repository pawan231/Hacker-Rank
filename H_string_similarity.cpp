//string similarity
//Z function
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int i,l,r,k,t;
	long long int ans;
	string s;
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>s;
		int *z=new int[s.length()+1];
		z[0]=0;
		l=r=0;
		for(i=1;i<s.length();i++)
		{
			if(i>=r)
			{
				l=r=i;
				while(r<s.length() && s[r]==s[r-l])
					r++;
				z[i]=r-l;
				ans+=z[i];
				r--;
			}
			else
			{
				k=i-l;
				if(z[k]+i<r+1)
					z[i]=z[k];
				else
				{
					l=i;
					while(r<s.length() && s[r]==s[r-l])
						r++;
					z[i]=r-l;
					r--;
				}
				ans+=z[i];
			}
		}
	
		//for(i=0;i<s.length();i++)
		   //cout<<z[i]<<" ";
		cout<<(ans+s.length())<<endl;
	}

}
