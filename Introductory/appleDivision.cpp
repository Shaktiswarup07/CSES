#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void Solve(ll idx,ll &tar,vector<ll>&v, ll sum, ll &mini){
    if(idx==v.size()){
        if(tar==sum) return;
        ll a=abs(sum-tar);
        ll b=tar;
        mini=min(mini,abs(a-b));
        return;
    }

    //take
    tar+=v[idx];
    Solve(idx+1,tar,v,sum,mini);

    tar-=v[idx];
    Solve(idx+1,tar,v,sum,mini);
}
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(ll i = 0 ; i < n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll tar=0;
    ll mini=LLONG_MAX;
    Solve(0,tar,v,sum,mini);
    cout<<mini<<endl;

    return 0;
}