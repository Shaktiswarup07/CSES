#include<bits/stdc++.h>
using namespace std;

void Solve(int n,int a,int b, int mid,vector<pair<int,int>>&ans){
    if(n==0) return;
    Solve(n-1,a,mid,b,ans);
    ans.push_back({a,b});
    // cout<<a<<" "<<b<<endl;
    Solve(n-1,mid,b,a,ans);
}
int main()
{
    int n;
    cin>>n;
    int a=1,b=3,mid=2;
    vector<pair<int,int>>ans;
    Solve(n,a,b,mid,ans);
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}