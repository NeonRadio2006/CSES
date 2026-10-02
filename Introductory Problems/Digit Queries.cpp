#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the number of quereis as input
    int q;
    cin>>q;
    // For each query:-
    while(q--){
        // Take the position as input on which we have to return the digit at that position
        long long k;
        cin>>k;
        // digitLength denoted the number of digits of the numbers in the current block
        // curr denotes how many numbers are in the current block
        // sPos denotes the starting position of the current block in the string (1-based)
        long long digitLength=1,curr=9,sPos=1;
        // Now we will find the block which contains k
        while(k>sPos+digitLength*curr-1){
            // For every digitLength=1,2,3,.. the number of numbers in their resp blocks are 9,90,900,.. with the length of the blocks being 9,180,2700,..
            // Take this sPos to the sPos of the next block 
            sPos+=curr*digitLength;
            // digitLength keeps increasing
            digitLength++;
            // As number of numbers is a GP with a=9 and r=10
            curr*=10;
        }
        // Find the first number of the block
        long long fn=pow(10,digitLength-1);
        // Find how many complete numbers have we passed before k
        long long off=(k-sPos)/digitLength;
        // This will give the number whose one of the digit is in the kth position
        long long tn=fn+off;
        // Convert this number to string
        string n=to_string(tn);
        // p denotes the position of k wrt n
        long long p=(k-sPos)%digitLength;
        // Print the answer for this query
        cout<<n[p]<<endl;
    }
    return 0;
}
