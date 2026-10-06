#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    int n,x;
    cin>>n>>x;
    // Taking the intgers as input and storing them with their 1-based indexing
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    // Sorting wrt the elements
    sort(a.begin(),a.end());
    // Initializing two pointers
    int l=0;
    int r=n-1;
    while(l<r){
        // Find the usm of elements at indices l and r
        int sum=a[l].first+a[r].first;
        // If the sum id equal to x then print this pair of l and r and return immediately
        if(sum==x){
            cout<<a[l].second<<" "<<a[r].second<<"\n";
            return 0;
        }
        // If sum is lesser than x than increment l
        else if(sum<x){
            l++;
        }
        // Otherwise decrement r
        else{
            r--;
        }
    }
    // Print "IMPOSSIBLE" if no pair exists
    cout<<"IMPOSSIBLE\n";
    return 0;
}
