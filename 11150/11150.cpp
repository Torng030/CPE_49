#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans;
	while(cin>>n)
	{
		ans=n;
		while(n>=3)
		{
			ans+=n/3;
			n=n/3+n%3;
		}
		if(n==2)
			ans++;
		cout<<ans<<endl;
	}
}
