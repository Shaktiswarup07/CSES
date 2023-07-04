#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int t;cin>>t;while(t--){

    
    int n;
    cin>>n;
    int cnt=0;
    int i=5;
    while((n/i)!=0){
        cnt+=(n/i);
        i*=5;
    }
    cout<<cnt<<endl;
    return 0;
}