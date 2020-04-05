#include<bits/stdc++.h>

using namespace std;



struct my_compare {
    bool operator()(const pair<int,pair <int,int>  > &lhs, const pair<int,pair <int,int>  > &rhs) const
    {
        return lhs.second < rhs.second;
    }
};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  int n;
  int start,end;
  int cnum,jnum;
  for(auto z=0;z<t;z++)
  {
    jnum=-1;
    cin>>n;
    //vector <pair <int,int>> v;
    vector <pair<int,pair <int,int>  >> v;
    char ans[n];
    bool flag=true;

    for(auto i=0;i<n;i++)
    {
      cin>>start>>end;
      //v.push_back(make_pair(start,end));
      v.push_back(make_pair(i,make_pair(start,end)));
    }

    sort(v.begin(), v.end(),my_compare());

    //assigning first activity to c
    cnum=v[0].second.second;
    //ans+='C';
    ans[v[0].first]='C';

    for(auto i=1;i<n;i++)
    {
      //first check for c and not then j if not impossible continue

      if((v[i].second).first>=cnum)
      {
        //ans+='C';
        ans[v[i].first]='C';
        cnum=v[i].second.second;
      }
      else if(v[i].second.first>=jnum)
      {
        //ans+='J';
        ans[v[i].first]='J';
        jnum=v[i].second.second;
      }
      else
      {
        flag=false;
        break;
      }
    }
    if(flag)
    {
      cout<<"Case #"<<z+1<<": ";
      for(auto i=0;i<n;i++)
      {
        cout<<ans[i];
      }
      cout<<"\n";
    }
    else
    {
      cout<<"Case #"<<z+1<<": "<<"IMPOSSIBLE"<<"\n";
    }

  }



  return 0;
}
