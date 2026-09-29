#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take the input size
    int n;
    cin>>n;
    // Take the input integers
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // Initialize the number of moves required with 0
    long long moves=0;
    for(int i=1;i<n;i++){
        // If the previous element is greater than our current element then we need to increase our current element by the difference between them
        if(a[i]<a[i-1]){
            moves+=(a[i-1]-a[i]);
            a[i]=a[i-1];  
        }
    }
    // Print the final number of moves
    cout<<moves<<"\n";
    return 0;
}
