#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input n
    long long n;
    cin>>n;
    // Tkae the sequence of integers
    vector<long long>x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    // Insert it in a set
    set<long long>a(x.begin(),x.end());
    // Print the size of the set
    cout<<a.size()<<endl;
    return 0;
}
