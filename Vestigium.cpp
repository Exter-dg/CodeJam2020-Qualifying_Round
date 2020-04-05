#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t,n;
    cin>>t;
    long long trace=0;
    int r,c;
    for(auto z=0;z<t;z++)
    {
        r=0;
        c=0;
        trace = 0;
        set <int>row;
        set<int>col;
        cin>>n;
        int a[n][n];
        for(auto i=0;i<n;i++)
        {
            for(auto j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==j)
                {
                    trace+=a[i][j];
                }
                row.insert(a[i][j]);
            }
            if(row.size() != n)
            {
              r++;
            }
            row.clear();

        }

        for(auto j=0;j<n;j++)
        {
          for(auto i=0;i<n;i++)
          {
            col.insert(a[i][j]);
          }
          if(col.size() != n)
          {
            c++;
          }
          col.clear();
        }

        cout<<"Case #"<<z+1<<": "<<trace<<" "<<r<<" "<<c<<"\n";
    }

    return 0;
}
