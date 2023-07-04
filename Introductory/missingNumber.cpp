#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll reqSum=(n*(n+1))/2;
    ll sum=0;
    for(int i = 0 ;  i< n-1 ; i++){
        ll x;
        cin>>x;
        sum+=x;
    }
    cout<<reqSum-sum<<endl;

    return 0;
}