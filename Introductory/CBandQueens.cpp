#include<bits/stdc++.h>
using namespace std;

bool isPossible(int row,int col, vector<vector<char>>&board){
        int i=row,j=col;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q') return false;
            i--;j--;
        }
        i=row;j=col;
        while(i<board.size() && j>=0){
            if(board[i][j]=='Q') return false;
            i++;j--;
        }
        i=row;j=col;
        while(j>=0){
            if(board[i][j]=='Q') return false;
            j--;
        }
        return true;
    }

void Solve(int col, vector<vector<char>>&board, int&cnt){
    if(col==8){
        cnt++;
        return;
    }
    for(int i = 0 ; i< 8 ; i++){
        if(board[i][col]!='*' && isPossible(i,col,board) ){
            board[i][col]='Q';
            Solve(col+1,board,cnt);
            board[i][col]='.';
        }
    }
}
int main()
{
    vector<vector<char>>v(8,vector<char>(8,'.'));
    for(int i =0; i < 8 ; i++){
        for(int j = 0 ; j < 8 ; j++){
            char x;
            cin>>x;
            v[i][j]=x;
        }
    }
    int cnt=0;
    Solve(0,v,cnt);
    cout<<cnt<<endl;

    return 0;
}