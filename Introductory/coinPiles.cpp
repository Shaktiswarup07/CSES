#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mini=min(a,b);
        int maxi=max(a,b);
        // mini*=2;
        if(maxi>(mini*2)){
            cout<<"NO"<<endl;
        }
        else{
            if((a+b)%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}