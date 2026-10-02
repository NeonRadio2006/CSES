#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the number of customers as input
    int n;
    cin>>n;
    // a[i]={time,c} where time denotes arrival time of customer if c=='a' and departure time if c=='d'
    vector<pair<int,char>>a;
    // Take arrival and departure time of every customer as input and push it in the vector
    for(int i=0;i<n;i++){
        int arrivalTime;
        int departureTime;
        cin>>arrivalTime>>departureTime;
        a.push_back({arrivalTime,'a'});
        a.push_back({departureTime,'d'});
    }
    // Sort the vector according wrt time
    sort(a.begin(),a.end());
    // ans denoted the final answer
    // curr denoted the number of customers currently in the restaurant
    int ans=0,curr=0;
    // Traverse the sorted array
    for(int i=0;i<a.size();i++){
        // If the encountered time is an arrival time of some customer then increment curr
        if(a[i].second=='a'){
            curr++;
        }
        // Otherwise decrement it
        else{
            curr--;
        }
        // Update the answer accordingly
        ans=max(ans,curr);
    }
    // Print the final answer 
    cout<<ans<<"\n";
    return 0;
}
