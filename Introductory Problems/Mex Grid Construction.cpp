#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    int n;
    cin>>n;
    // Why XOR gives a number which is not equal to the number to it's left and above?
    // Ans => For a fixed row i, only j changes hence every (i,j) in a row is different
    // and for fixed column j, only i changes hence every (i,j) in a column is different
    // How it gives the MEX?
    // Ans => Let the value at the cell (i,j) be x, i.e x=i^j
    // Now let y<x, and we have to proove that y has occured somewhere to the left or somewhere above
    // As y<x, the highest bit where x and y differ in that bit position x will be 1 and y will be 0
    // Now as x has 1 at that position that means i and j differs in that bit position
    // Case 1 (i has 1 and j has 0):- y=i'^j, now both j and y are 0 at that position then i' has to be also 0 at that position but w have assumed it to be 1
    // That means i'<i, which means (i',j) appears above (i,j)
    // Case 2 (i has 0 and j has 1):- y=i^j', now both i and y are 0 at that position then j' has to be also 0 at that position but we have assumed it to be 1
    // That means j<j', which means (i,j') appears left to (i,j)
    // Hence we have shown that for every y<i^j, it appears either above or to the left
    // But we have already prooved that i^j itself does not appear anywhere above or to the left
    // Therefore max is i^i
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<(i^j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
