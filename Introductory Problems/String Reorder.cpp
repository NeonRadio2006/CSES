#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input string
    string s;
    cin>>s;
    // Determine the length of the input string
    int n=s.length();
    // Frequency vector to count frequencies of each character
    vector<int>freq(26,0);
    // Count the frequency of each character
    for(char c:s){
        freq[c-'A']++;
        // If frequency of any charcter becomes more that ceil(n/2), then it is a impossible case
        if(freq[c-'A']*2>n+1){
            cout<<-1<<"\n";
            return 0;
        }
    }
    // Initialize and empty string ans
    string ans="";
    // Denotes the previous character we placed
    int prevChar=-1;
    // At every step ew require the number of remaing places we currently have 
    for(int rem=n;rem>0;rem--){
        // Denotes the character we have to place right now
        int currChar=-1;
        // This denotes a character which if not picked right now then we will be not able to place it in future
        int criticalChar=-1;
        // Check the next smallest available valid character
        for(int i=0;i<26;i++){
            // Only consider a character if it's frequency is +ve and is not equal to the previous character placed
            if(freq[i]>0&&i!=prevChar){
                // Pick this character
                if(currChar==-1){
                    currChar=i;
                }
                // Pick this character as critical
                if(freq[i]*2>rem){
                    criticalChar=i;
                }
            }
        }
        // If there is a critical character then this should be the character getting placed
        if(criticalChar!=-1){
            currChar=criticalChar;
        }
        // Append the current character to ans string
        ans+=(char)(currChar+'A');
        // Decrement it's frequency
        freq[currChar]--;
        // Assign this charcter as previous character for next iteration
        prevChar=currChar;
    }
    // Print the answer
    cout<<ans<<"\n";
    return 0;
}
