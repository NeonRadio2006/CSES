#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    long long n,t=0,ans=LLONG_MAX;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
        t+=a[i];
    }
    // Each apple has 2 possibility
    // We have to try every possible confguration
    for(int m=0;m<(1<<n);m++){
        long long s=0;
        for(long long i=0;i<n;i++){
            if(m&(1<<i)){
                s+=a[i];
            }
        }
        long long d=abs(t-2*s);
        // Update the answer accordingly
        ans = min(ans,d);
    }
    // Print the final answer
    cout<<ans<<endl;
    return 0;
}
