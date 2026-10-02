#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    int n,m;
    cin>>n>>m;
    vector<string>g(n),a(n);
    // Take the input matrix
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    a=g;
    string l="ABCD";
    // For every cell
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // Check every character
            for(char c:l){
                // Ignore it c is the same character
                if(c==g[i][j]){
                    continue;
                }
                // Must not be same with an adjacent cell
                if(i>0&&a[i-1][j]==c){
                    continue;
                }
                if(j>0&&a[i][j-1]==c){
                    continue;
                }
                // Assign the character to this cell
                a[i][j]=c;
                break;
            }
        }
    }
    // Print the final asnwer
    for(auto &s:a){
        cout<<s<<endl;
    }
    return 0;
}
