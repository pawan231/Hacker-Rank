//Morgan and string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	string s1,s2;
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		int i=0,j=0;
		string ans;
		while(i<s1.length() && j<s2.length()){
			if(s1[i]<s2[j]){
				ans.push_back(s1[i]);
				i++;
			}
			else if(s1[i]>s2[j]){
				ans.push_back(s2[j]);
				j++;
			}
			else{
				 int x = i, y = j;
                 char a = s1[i];
                    for(; x < s1.length() && y < s2.length(); x++, y++) {
                        if (s1[x] != s2[y]) {
                            break;
                        } else if (s1[x]> a) {
                            ans.append(s1.substr(i, x-i)).append(s2.substr(j, y-j));
                            i = x; j = y;
                            a = s1[x];
                        }
			}
			if (x == s1.length()) {
                        ans.push_back(s2[j]);
                        j++;
                    } else if (y == s2.length()) {
                        ans.push_back(s1[i]);
                        i++;
                    } else {
                        if (s1[x] < s2[y]) {
                            ans.push_back(s1[i]);
                            i++;
                        } else {
                            ans.push_back(s2[j]);
                            j++;
                        }
		}

	}
	}
	ans.append(s1.substr(i)).append(s2.substr(j));

            cout<<ans<<endl;
	}
	return 0;
}
