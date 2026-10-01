#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input string
    string s;
    cin>>s;
    // Determine the length of the input string
    int n=s.size();
    // Initialize an empty answer string
    string ans(n,' ');
    // Two pointers
    int l=0,r=n-1;
    // Calculate the frequencies of each character of the string
    vector<int>f(26,0);
    for(int i=0;i<s.size();i++){
        f[s[i]-'A']++;
    }
    // This will denote the number of characters which have odd frequencies
    int o=0;
    // Calculate the number of characters which have odd frequencies
    for(int i=0;i<26;i++){
        if(f[i]%2){
            o++;
        }
    }
    // If there are more than 1 characters with odd frequencies,then it is not possible
    if(o>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    // Constructing the answer palindrome
    for(int i=0;i<26;i++){
        char c='A'+i;
        while(f[i]>=2){
            ans[l]=c;
            ans[r]=c;
            l++;
            r--;
            f[i]-=2;
        }
        if(f[i]==1){
            ans[n/2]=c;
        }
    }
    // Printing the final answer
    cout<<ans<<endl;
    return 0;
}
