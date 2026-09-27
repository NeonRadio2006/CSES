#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take input
    long long n;
    cin>>n;
    // Keep repeating the process until n becomes 1
    while(true){
        // Print the current n
        cout<<n<<" ";
        // Break when n becomes 1
        if(n==1){
          break;
        }
        // Case when n is even
        if(n%2==0){
            n/=2;
        }
        // Case when n is odd
        else{
            n=3*n+1;
        }
    }
    return 0;
}
