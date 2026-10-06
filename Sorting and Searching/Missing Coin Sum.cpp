#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take the number of coins as input
    int n;
    cin>>n;
    // Take the coins as input
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    // Sort the given integers in ascending order
    sort(coins.begin(),coins.end());
    long long target=1;
    for(int i=0;i<n;i++){
        // If the current coin is greater than our target, we found the gap!
        if(coins[i]>target){
            break;
        }
        // Otherwise, we expand our reachable range by the coin's value
        target+=coins[i];
    }
    // Print the final answer
    cout<<target<<"\n";
    return 0;
}
