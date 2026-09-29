#include <bits/stdc++.h>
using namespace std;
int main() {
    // Take the input
    long long n;
    cin>>n;
    // To calculate the sum of the (n-1) input integers
    long long s=0;
    // Take (n-1) input integers
    vector<long long>a(n-1);
    for(long long i=0;i<n-1;i++){
        cin>>a[i];
        // Calculate their sum
        s+=a[i];
    }
    // Calculate the sum from 1 to n
    long long as=(n*(n+1))/2;
    // The difference between these two sums will be the missing number
    cout<<as-s<<endl;
    return 0;
}
