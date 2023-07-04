#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    for(ll i = 1 ; i<=n ; i++){
        if(i==1) cout<<0<<endl;
        else if(i==2) cout<<6<<endl;
        else{
            ll k=i*i;
            ll num3x2=i-1;
            num3x2=num3x2*(i-3+1);
            ll num2x3=i-1;
            num2x3=num2x3*(i-3+1);
            ll totAtkPos=2*(num2x3+num3x2);
            cout<<((k)*(k-1))/2 - totAtkPos<<endl;
        }
    }
    return 0;
}