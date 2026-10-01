#include<bits/stdc++.h>
using namespace std;
void solve(){
    // Take the input
    int n,a,b;
    cin>>n>>a>>b;
    // If the combined score of both the players is greater than n,then it is not impossible
    if(a+b>n){
        cout<<"NO"<<endl;
        return;
    }
    // If the score of any of the player is 0 but the combined score is not,then also it is not possible
    if((a==0||b==0)&&(a+b!=0)){
        cout<<"NO"<<endl;
        return;
    }
    // Otherwise it is possible
    // Print "YES"
    cout<<"YES"<<endl;
    // Assume that the player A places cards in sequential manner
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    // Mkaing score of player A as a and player B as b
    for(int i=a+1;i<=a+b;i++){
        cout<<i<<" ";
    }
    for(int i=1;i<=a;i++){
        cout<<i<<" ";
    }
    // Print the remaining cards sequentially
    for(int i=a+b+1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    // Take the number of test cases as input
    int t;
    cin>>t;
    // Solce for each test case
    while(t--){
        solve();
    }
    return 0;
}
