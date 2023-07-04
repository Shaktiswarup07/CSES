#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i = 0 ; i < s.size() ; i++){
        mp[s[i]]++;
    }
    int cnt=0;
    string fhalf,lhalf;
    string mid;
    for(auto i:mp){
        if(i.second%2!=0) {
            cnt++;
            for(int j = 0 ; j < i.second; j++) mid+=i.first;
        }
        else{
            for(int j = 0 ; j < i.second/2 ; j++){
                fhalf+=i.first;
                lhalf+=i.first;
            }
        }
        if(cnt>1) {
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }

    }
    reverse(lhalf.begin(),lhalf.end());
    string ans=fhalf+mid+lhalf;
    cout<<ans<<endl;

    return 0;
}