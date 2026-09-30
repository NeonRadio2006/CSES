#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    long long n;
    cin>>n;
    // Total sum from 1 to n
    long long s=n*(n+1)/2;
    // If the total sum is odd then it is impossible to divide it in 2 equal halves
    if(s%2){
        cout<<"NO"<<endl;
        return 0;
    }
    // Print "YES"
    cout<<"YES"<<endl;
    // Now we have to find the sets
    // Each set should have half the sum
    long long h=s/2;
    vector<long long>s1,s2;
    for(long long i=n;i>=1;i--){
        // If half sum is not completed till yet then include it in 1st set
        if(h>=i){
            s1.push_back(i);
            // And subtract from it
            h-=i;
        }
        // Else include it in the 2nd set
        else{
            s2.push_back(i);
        }
    }
    // Printing the sets
    cout<<s1.size()<<endl;
    for(long long x:s1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<s2.size()<<endl;
    for(long long x:s2){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
