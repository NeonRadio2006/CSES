#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input 
    int n;
    cin>>n;
    // Initialize the answer
    vector<vector<int>>ans(n,vector<int>(n,-1));
    // For knight jumping 
    int dr[8]={-2,-2,-1,-1,1,1,2,2};
    int dc[8]={-1,1,-2,2,-2,2,-1,1};
    // Queue of pair 
    queue<pair<int,int>>q;
    q.push({0,0});
    // Answer for the top left cell will be 0
    ans[0][0]=0;
    // Standard bfs
    // We will think in backwrds direction
    // We will not apply BFS for each and every cell to find the minimum number of knight jump to reach top left cell
    // Rather we will start from the top left cell itself and start jumping from there
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        // Check every possible jump
        for(int i=0;i<8;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0&&nc>=0&&nr<n&&nc<n&&ans[nr][nc]==-1){
                ans[nr][nc]=ans[r][c]+1;
                q.push({nr,nc});
            }
        }
    }
    // Print the answer
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
