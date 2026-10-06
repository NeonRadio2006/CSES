#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    int n;
    cin>>n;
    // Take the intgers as input
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    // Sort the given integers in ascending order
    sort(p.begin(),p.end());
    // We should make length of each stick equal to length of the median stick
    int target=p[n/2];
    // Initialize the answer with 0
    long long ans=0;
    // Calculate total number of operations required for each stick and add all of them up in answer
    for(int i=0;i<n;i++){
        ans+=abs(p[i]-target);
    }
    // Print the final answer
    cout<<ans<<"\n";
    return 0;
}
