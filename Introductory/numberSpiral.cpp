#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll r,c;
        cin>>r>>c;
        if(r>c){
            if(r%2==0){
                cout<<r*r-c+1<<endl;
            }
            else{
                r--;
                cout<<r*r+1+c-1<<endl;
            }
        }
        else{
            if(c%2==1){
                cout<<c*c-r+1<<endl;
            }
            else{
                c--;
                cout<<c*c+1+r-1<<endl;
            }
        }
    }
    
    return 0;
}