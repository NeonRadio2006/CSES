// 1.Brute Force Approach
// Time:-O(n²)
// Space:-O(n)
// TLE
#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take the input n
    int n;
    cin>>n;
    // Take the input integers
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    // In this approach we will construct all the rounds
    vector<vector<int>>rounds;
    // Traverse the array
    for(int i=0;i<n;i++){
        // Extract the element
        int x=p[i];
        // If this the first element then create a new vector with this x in it and insert it in rounds
        if(rounds.empty()){
            rounds.push_back({x});
        }
        // Otherwise:-
        else{
            // Initialize a boolean variable denoting whether we have found a round in which we can collect this x or not
            bool found=false;
            // Check rounds until we have not found a valid round
            for(auto &round:rounds){
                if(round.back()+1==x){
                    round.push_back(x);
                    found=true;
                    break;
                }
            }
            // If we a round is not found then create a new round
            if(!found){
                rounds.push_back({x});
            }
        }
    }
    // Finale answer will be the number of rounds, that is the size of the rounds 2D vector
    cout<<rounds.size()<<"\n";
    return 0;
}
// 2.Optimal Approach
// Time:-O(n)
// Space:-O(n)
// AC
#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take the input n
    int n;
    cin>>n;
    // Take the input integers and store their indices in which they are present
    vector<int>p(n+1);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p[x]=i;
    }
    // Initialize the answer with 1
    int ans=1;
    // If p[i]<p[i+1], that means i+1 appears after i which means that we can pick both i and i+1 in same round
    // Hence incrementing the answer only when p[i]>p[i+1]
    for(int i=1;i<n;i++){
        if(p[i]>p[i+1]){
            ans++;
        }
    }
    // print the final answer
    cout<<ans<<"\n";
    return 0;
}
