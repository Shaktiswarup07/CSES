#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll k=(n*(n+1))/2;
    if(k%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        ll req=k/2;
        int i=n;
        ll cnt=0;
        vector<int>v;
        vector<int>mp(1000001,0);
        while(req>=i){
            cnt++;
            req-=i;
            mp[i]=1;
            v.push_back(i);
            i--;
        }
        if(req){
            mp[req]=1;
            v.push_back(req);
        }
        cout<<"YES"<<endl;
        cout<<v.size()<<endl;
        for(auto j:v) cout<<j<<" ";
        cout<<endl;
        cout<<n-v.size()<<endl;
        for(int j = n ; j>=1 ; j--){
            if(mp[j]==0) cout<<j<<" ";
        }cout<<endl;
        

        
    }
    return 0;
}