#include<bits/stdc++.h>
using namespace std;
void Solve(int idx,string& ds, vector<string>&ans,int n){
    if(idx==n){
        ans.push_back(ds);
        return;
    }
    ds+='0';
    Solve(idx+1,ds,ans,n);
    ds.pop_back();
    ds+='1';
    Solve(idx+1,ds,ans,n);
    ds.pop_back();
}
int main()
{
    int n;
    cin>>n;
    vector<string>ans;
    string ds="";
    Solve(0,ds,ans,n);
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }
    vector<string>fans;
    for(int i =0 ; i < ans.size() ; i++){
        string p=ans[i];
        string x;
        if(i==0){
            fans.push_back(p);
        }
        else{
            x.push_back(ans[i][0]);
            for(int j=1;j<p.size() ; j++){
                char a=p[j];
                char b=p[j-1];
                if(a==b) x+='0';
                else x+='1';
            }
             fans.push_back(x);

        }
    }
    for(auto i:fans){
        cout<<i<<endl;
    }
    return 0;
}