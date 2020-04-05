#include<bits/stdc++.h>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int t;
	cin>>t;
	int n,k;
	for(auto z=0;z<t;z++)
	{
		cin>>n>>k;
		if(n==2)
		{
			if(k==3)
			{
				cout<<"Case #"<<z+1<<": IMPOSSIBLE\n";
			}
			else
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				if(k==4)
				{
					cout<<"2 1\n1 2\n";
				}
				if(k==2)
				{
					cout<<"1 2\n2 1\n";
				}
			}
		}
		else if(n==3)
		{
			if(k==3)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 2 3\n3 1 2\n2 3 1\n";
			}
			else if(k==6)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"2 1 3\n3 2 1\n1 3 2\n";
			}
			else if(k==9)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"3 1 2\n2 3 1\n1 2 3\n";
			}
			else
			{
				cout<<"Case #"<<z+1<<": IMPOSSIBLE\n";
			}
		}
		else if(n==4)
		{
			if(k==4){
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 2 3 4\n2 1 4 3\n3 4 1 2\n4 3 2 1\n";
			}
			else if(k==6)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 2 3 4\n2 1 4 3\n3 4 2 1\n4 3 1 2\n";
			}
			else if(k==7)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 2 3 4\n3 1 4 2\n4 3 2 1\n2 4 1 3\n";

			}
			else if(k==8)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"2 3 4 1\n1 2 3 4\n4 1 2 3\n3 4 1 2\n";
			}
			else if(k==9)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 4 2 3\n3 1 4 2\n4 2 3 1\n2 3 1 4\n";
			}
			else if(k==10)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 4 3 2\n4 1 2 3\n2 3 4 1\n3 2 1 4\n";
			}
			else if(k==11)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 4 3 2\n4 2 1 3\n2 3 4 1\n3 1 2 4\n";
			}
			else if(k==12)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"3 4 1 2\n2 3 4 1\n1 2 3 4\n4 1 2 3\n";
			}
			else if(k==13)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"2 4 3 1\n4 3 1 2\n1 2 4 3\n3 1 2 4\n";
			}
			else if(k==14)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"3 4 2 1\n4 3 1 2\n1 2 4 3\n2 1 3 4\n";
			}
			else if(k==16)
			{
				cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"4 1 2 3\n3 4 1 2\n2 3 4 1\n1 2 3 4\n";
			}
			else
			{
				cout<<"Case #"<<z+1<<": IMPOSSIBLE\n";
			}
		}
		else if(n==5)
		{
			if(k==5)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 2 3 4 5\n"<<
							"5 1 2 3 4\n"<<
							"4 5 1 2 3\n"<<
							"3 4 5 1 2\n"<<
							"2 3 4 5 1\n";
			}
			else if(k==7)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 4 3 2 5\n"<<
							"2 1 4 5 3\n"<<
							"5 3 2 4 1\n"<<
							"3 2 5 1 4\n"<<
							"4 5 1 3 2\n";
			}
			else if(k==8)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"1 5 3 2 4\n"<<
							"5 3 2 4 1\n"<<
							"4 2 1 3 5\n"<<
							"2 4 5 1 3\n"<<
							"3 1 4 5 2\n";
			}
			else if(k==9)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"3 4 2 1 5\n"<<
							"1 2 3 5 4\n"<<
							"5 3 1 4 2\n"<<
							"4 1 5 2 3\n"<<
							"2 5 4 3 1\n";
			}
			else if(k==10)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"2 3 4 5 1\n"<<
							"1 2 3 4 5\n"<<
							"5 1 2 3 4\n"<<
							"4 5 1 2 3\n"<<
							"3 4 5 1 2\n";
			}
			else if(k==11)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"3 1 5 4 2\n"<<
							"2 3 4 1 5\n"<<
							"1 5 2 3 4\n"<<
							"5 4 1 2 3\n"<<
							"4 2 3 5 1\n";
			}
			else if(k==12)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 4 1 3 2\n"<<
							"1 2 5 4 3\n"<<
							"2 1 3 5 4\n"<<
							"4 3 2 1 5\n"<<
							"3 5 4 2 1\n";
			}
			else if(k==13)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 1 2 4 3\n"<<
							"2 3 1 5 4\n"<<
							"1 4 3 2 5\n"<<
							"3 5 4 1 2\n"<<
							"4 2 5 3 1\n";
			}
			else if(k==14)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 1 2 4 3\n"<<
							"3 4 1 5 2\n"<<
							"1 5 3 2 4\n"<<
							"2 3 4 1 5\n"<<
							"4 2 5 3 1\n";
			}
			else if(k==15)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 2 4 1 3\n"<<
							"1 4 5 3 2\n"<<
							"3 5 1 2 4\n"<<
							"2 1 3 4 5\n"<<
							"4 3 2 5 1\n";
			}
			else if(k==16)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 2 3 1 4\n"<<
							"1 5 4 3 2\n"<<
							"3 4 1 2 5\n"<<
							"2 1 5 4 3\n"<<
							"4 3 2 5 1\n";
			}
			else if(k==17)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 2 4 1 3\n"<<
							"3 5 1 2 4\n"<<
							"4 1 2 3 5\n"<<
							"1 3 5 4 2\n"<<
							"2 4 3 5 1\n";
			}
			else if(k==18)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 2 1 3 4\n"<<
							"1 5 4 2 3\n"<<
							"2 4 3 1 5\n"<<
							"3 1 5 4 2\n"<<
							"4 3 2 5 1\n";
			}
			else if(k==19)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 1 3 2 4\n"<<
							"4 5 2 1 3\n"<<
							"1 3 4 5 2\n"<<
							"3 2 1 4 5\n"<<
							"2 4 5 3 1\n";
			}
			else if(k==20)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 2 1 3 4\n"<<
							"4 5 2 1 3\n"<<
							"3 1 4 2 5\n"<<
							"2 3 5 4 1\n"<<
							"1 4 3 5 2\n";
			}
			else if(k==21)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 2 1 3 4\n"<<
							"4 5 3 2 1\n"<<
							"2 3 4 1 5\n"<<
							"3 1 5 4 2\n"<<
							"1 4 2 5 3\n";
			}
			else if(k==22)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 4 3 2 1\n"<<
							"4 5 1 3 2\n"<<
							"2 1 4 5 3\n"<<
							"1 3 2 4 5\n"<<
							"3 2 5 1 4\n";
			}
			else if(k==23)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 3 4 1 2\n"<<
							"4 5 2 3 1\n"<<
							"1 4 5 2 3\n"<<
							"3 2 1 4 5\n"<<
							"2 1 3 5 4\n";
			}
			else if(k==25)
			{cout<<"Case #"<<z+1<<": POSSIBLE\n";
				cout<<"5 1 2 3 4\n"<<
							"4 5 1 2 3\n"<<
							"3 4 5 1 2\n"<<
							"2 3 4 5 1\n"<<
							"1 2 3 4 5\n";
			}
			else
			{
				cout<<"Case #"<<z+1<<": IMPOSSIBLE\n";
			}
		}
		else
			cout<<"Case #"<<z+1<<": IMPOSSIBLE\n";

	}

	return 0;
}
