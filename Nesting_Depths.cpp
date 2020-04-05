#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    string s;

    //int lastpos=-1;
    int p=0,temp;

    for(auto z=0;z<t;z++)
    {
      p=0;
      cin>>s;
      string ans="";
      for(auto i=0;i<s.length();i++)
      {
        if(s[i]=='(')
        {
          p++;
          ans+=s[i];
        }
        else if(s[i]==')')
        {
          p--;
          if(p<0)
          {
            p++;
            ans+='(';
          }
          ans+=s[i];
          //lastpos=ans.length()-1;
        }
        else
        {
          temp=p;
           if(p<(s[i]-'0'))
           {
             for(auto j=temp ; j<(s[i]-'0') ; j++)
             {
               ans+='(';
               p++;
             }

           }
           else if(p>s[i]-'0')
           {
             for(auto j=s[i]-'0' ;j<temp ;j++)
             {
               ans+=')';
               p--;
             }
           }
           ans+=s[i];
        }
      }

      for(auto i=0;i<p;i++)
      {
        ans+=')';
      }
      cout<<"Case #"<<z+1<<": "<<ans<<"\n";




    }




    return 0;
}
