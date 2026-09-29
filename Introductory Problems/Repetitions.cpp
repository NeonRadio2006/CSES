#include <bits/stdc++.h>
using namespace std;
// Simple sliding window solution
int main(){
    // Take the input
    string s;
    cin>>s;
    // cnt denoted the length of the current window
    // ans denoted the maximum length
    int cnt=1,ans=1;
    for(int i=1;i<s.size();i++){
        // If the previous character is same as the current one, then expand the window by incrementing the count
        if(s[i]==s[i-1]){
            cnt++;          
        }
        // If we have encounterd a new character then reset cnt
        else{
            cnt=1;        
        }
        // Update the ans
        ans=max(ans,cnt);
    }
    // Print the final answer
    cout<<ans<<"\n";
    return 0;
}
