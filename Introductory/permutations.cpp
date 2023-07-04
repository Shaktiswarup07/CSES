//2413
// 1 2
// 31  42 5
// 41  52  63
// 14 25 36
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else{
        int x=(n/2)+1;
        int y=1;
        for(int i = 0 ; i < n ; i++){
            if(i%2==0){
                cout<<x<<" ";
                x++;
            }
            else{
                cout<<y<<" ";
                y++;
            }
        }

    }
    return 0;
}