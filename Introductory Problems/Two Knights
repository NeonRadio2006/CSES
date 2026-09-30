#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    int n;
    cin>>n;
    // Calculating for each k from 1 to n
    for(int k=1;k<=n;k++){
        // Number of ways to choose 2 sqaures from k² squares
        long long tc=k*k;
        long long tw=(tc*(tc-1))/2;
        // Two knights hit each other when they are in a 2x3 and 3x2 submatrix
        // And each orientation have 2 possible combinations
        // Hence 4 total possibilty
        // there are (k-1)(k-2) subsquares in a kxk chessboard
        long long s=4*(k-1)*(k-2);
        // Printing the final answer
        cout<<tw-s<<endl;
    }
    return 0;
}
