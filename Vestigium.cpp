#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    long long sum=0;
    int n,r,c;
    for(auto z=0;z<t;z++)
    {
        r=0;
        c=0;
        sum = 0;
        set <int>s;
        cin>>n;
        int a[n][n];
        for(auto i=0;i<n;i++)
        {
            for(auto j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==j)
                {
                    sum+=a[i][j];
                }
                s.insert(a[i][j]);
            }
            if(s.size() != n)
            {
              r++;
            }
            s.clear();

        }

        for(auto j=0;j<n;j++)
        {
          for(auto i=0;i<n;i++)
          {
            s.insert(a[i][j]);
          }
          if(s.size() != n)
          {
            c++;
          }
          s.clear();
        }

        cout<<"Case #"<<z+1<<": "<<sum<<" "<<r<<" "<<c<<"\n";
    }

    return 0;
}
