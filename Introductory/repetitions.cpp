#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    int maxi=INT_MIN;
    for(int i = 0 ; i< s.size() ;i++ ){
        while(i+1<s.size() && s[i]==s[i+1]){
            cnt++;
            i++;
        }
        maxi=max(maxi,cnt+1);
        cnt=0;
    }
    cout<<maxi<<endl;
    return 0;
}