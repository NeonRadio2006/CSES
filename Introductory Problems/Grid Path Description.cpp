#include<bits/stdc++.h>
using namespace std;
// Class implementation of the main logic
class Solution{
public:
    // String s
    string s;
    // Visited matrix to check if a cell is already visited or not
    bool visited[7][7];
    // Answer to return
    int ans=0;
    // To move in all 4 directions in the matrix
    int dr[4]={1,-1,0,0};
    int dc[4]={0,0,-1,1};
    // Boolean function to determine whether the the cell in which we are going is a valid cell or not
    bool isValidCell(int r,int c){
        return r>=0&&r<7&&c>=0&&c<7&&!visited[r][c];
    }
    // Dfs code with backtracking and pruning
    void dfs(int r,int c,int steps){
        // If we have reached the detination
        if(r==6&&c==0){
            // Then increment the answer iff we have done 48 steps, otherwise not
            if(steps==48){
                ans++;
            }
            return;
        }
        // If we have done 48 steps but have no reached the destination then it is an invalid path, just return it
        if(steps==48){
            return;
        }
        // If the cells to the left and right of our current cell are valid but
        // the cells above and down are not
        // Then we have to return as when we move in any one direction the opposite one will nver get a visit in the dfs
        // Bcz it will create a vertical wall of visisted cells
        if(isValidCell(r,c-1)&&isValidCell(r,c+1)&&!isValidCell(r-1,c)&&!isValidCell(r+1,c)){
            return;
        }
        // If the cells to the up and down of our current cell are valid but
        // the cells to left and right are not
        // Then we have to return as when we move in any one direction the opposite one will nver get a visit in the dfs
        // Bcz it will create a horizontal wall of visisted cells
        if(!isValidCell(r,c-1)&&!isValidCell(r,c+1)&&isValidCell(r-1,c)&&isValidCell(r+1,c)){
            return;
        }
        // Mark this cells as true
        visited[r][c]=true;
        // If the current character is '?', then we have to try every possible directions from here
        if(s[steps]=='?'){
            // Trying all the 4 directions
            for(int k=0;k<4;k++){
                int nr=r+dr[k];
                int nc=c+dc[k];
                if(isValidCell(nr,nc)){
                    dfs(nr,nc,steps+1);
                }
            }
        }
        // If the current charcter is not then we have to abide by the fixed direction given in the input string
        else{
            // Determine the next cell
            int nr=r;
            int nc=c;
            if(s[steps]=='D'){
                nr++;
            }
            else if(s[steps]=='U'){
                nr--;
            }
            else if(s[steps]=='L'){
                nc--;
            }
            else if(s[steps]=='R'){
                nc++;
            }
            // Try that path
            if(isValidCell(nr,nc)){
                dfs(nr,nc,steps+1);
            }
        }
        // Backtrack
        visited[r][c]=false;
    }
    // Function to call
    int solve(string path){
        s=path;
        // Set the visited matrix to false
        memset(visited,false,sizeof(visited));
        // Call the DFS
        dfs(0,0,0);
        // Return the answer
        return ans;
    }
};
int main(){
    // Take the input string
    string s;
    cin>>s;
    // Initialize the object
    Solution obj;
    // Print the final answer
    cout<<obj.solve(s)<<"\n";
    return 0;
}
