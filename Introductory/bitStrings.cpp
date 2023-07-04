#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i = 0 ; i < n ; i++){
        ans=(ans%m*2%m)%m;
    }
    cout<<ans<<endl;
    return 0;
}