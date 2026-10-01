#include<bits/stdc++.h>
using namespace std;
int main(){
    // The answer is basically 2ⁿ,but it might overflow the intger or even the long long limit
    // Hence we need to take modulo
    const long long MOD= 1e9 + 7;
    // Take the input n
    long long n;
    cin>>n;
    // Initialize the answer with 1
    long long ans=1;
    // Continously multiply with 2 and taking modulo
    for(long long i=1;i<=n;i++){
        ans=(2*ans)%MOD;
    }
    // Printing the answer
    cout<<ans<<endl;
    return 0;
}
