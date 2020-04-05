#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t,b;
	cin>>t>>b;
	for(auto z=0;z<t;z++)
  {
		char ch;
		char ans[10];

		for(auto i=0;i<10;i++)
    {
			cout<<i+1<<endl;
			cout.flush();
			cin>>ch;
			ans[i]=ch;
		}

    for(auto i=0;i<10;i++)
    {
      cout<<ans[i];
    }
		cout<<endl;
		cout.flush();
		cin>>ch;

		if(ch=='Y')
		    continue;
		else
		    return 0;
	}
	return 0;
}
