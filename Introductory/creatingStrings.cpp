#include<bits/stdc++.h>
using namespace std;

void Solve(int idx, string &ds,set<string>&ans,string &s,map<int,int>&mp){
    if(ds.size()==s.size()){
        ans.insert(ds);
    }
    for(int i = 0 ; i < s.size() ; i++){
        if(mp[i]==0){
          mp[i]=1;
          ds+=s[i];
          Solve(idx,ds,ans,s,mp);
          ds.pop_back();
          mp[i]=0;  
        }
        
    }
}
int main()
{
    string s;
    cin>>s;
    set<string>ans;
    string ds="";
    map<int,int>mp;
    Solve(0,ds,ans,s,mp);
    // sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}