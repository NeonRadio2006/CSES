#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    int n,m;
    cin>>n>>m;
    // Multiset to store the remaining ticket prices
    multiset<int>ticketPrices;
    // Take the prices of tickets as input and insert them in the multiset
    for(int i=0;i<n;i++){
        int price;
        cin>>price;
        ticketPrices.insert(price);
    }
    // Take the prices announced by each customer as input ans print the answer accordingly
    for(int i=0;i<m;i++){
        int maxPrice;
        cin>>maxPrice;
        // Find the smallest ticket price which is greater than the price announced by the customer
        auto it=ticketPrices.upper_bound(maxPrice);
        // The just prev to this price is our answer for this customer
        // But if this is the cheapest price then we have to print -1
        if(it==ticketPrices.begin()){
            cout<<-1<<"\n";
        }
        // If this is not the cheapest one
        else{
            // Then decrement the pointer
            --it;
            // Print the price present at it
            cout<<*it<<"\n";
            // Erase this entry from the multiset
            ticketPrices.erase(it);
        }
    }
    return 0;
}
