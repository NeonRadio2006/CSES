#include<bits/stdc++.h>
using namespace std;
// Boolean function to check if it is possible to place a queen in this cell
bool ok(int r,int c,vector<string>&b){
    // If this cell is blocked then return false
    if(b[r][c]=='*'){
        return false;
    }
    // Check the top left diagonal
    int i=r-1,j=c-1;
    while(i>=0&&j>=0){
        if(b[i][j]=='q'){
            return false;
        }
        i--;
        j--;
    }
    // Check the same row
    j=c-1;
    while(j>=0){
        if(b[r][j]=='q'){
            return false;
        }
        j--;
    }
    // Check the bottom left diagonal
    i=r+1,j=c-1;
    while(i<8&&j>=0){
        if(b[i][j]=='q'){
            return false;
        }
        i++;
        j--;
    }
    // Finally return true
    return true;
}
// c denotes current column
void find(int c,int &a,vector<string>&b){
    // If we have placed queens in every column then increment the answer
    if(c==8){
        a++;
        return;
    }
    // Check every row of this column
    for(int r=0;r<8;r++){
        // Place a queen in this cell if possible
        if(ok(r,c,b)){
            b[r][c]='q';
            // Find the answer from here
            find(c+1,a,b);
            // Backtrack
            b[r][c]='.';
        }
    }
}
int main(){
    // Take the input chessboard as matrix of string
    vector<string>b(8);
    for(int i=0;i<8;i++){
        cin>>b[i];
    }
    // Initialize the answer with 0
    int ans=0,c=0;
    find(c,ans,b);
    // Print the final answer
    cout<<ans<<endl;
    return 0;
}
