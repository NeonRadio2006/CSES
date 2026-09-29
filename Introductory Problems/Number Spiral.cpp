#include<bits/stdc++.h>
using namespace std;
// The solution is totally based on observation/pattern recognition
// We have to set up a logic between each layer and parity using perfect squares
// Each layer k ends with k², so acc to that we then check the parity of the larger one among x and y
// And using that parity and a mathematical observation to how to calculate the number present at that particular cell
void solve(){
    // Take the input row and column
    long long x,y,ans;
    cin>>x>>y;
    // Case when x<=y
    if(x<=y){
        // If y is odd
        if(y%2){
            ans=y*y-x+1;
        }
        // If y is even
        else{
            ans=(y-1)*(y-1)+x;
        }
    }
    // Case when x>y
    else{
        // If x is odd
        if(x%2){
            ans=(x-1)*(x-1)+y;
        }
        // If x is even
        else{
            ans=x*x-y+1;
        }
    }
    // Print the final answer
    cout<<ans<<endl;
}
int main(){
    // Take the number of test cases as input
    int t;
    cin>>t;
    // Solve for each test case
    while(t--){
        solve();
    }
    return 0;
}
