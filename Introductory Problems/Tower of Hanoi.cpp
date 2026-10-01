#include <bits/stdc++.h>
using namespace std;
// Standard recursive code for tower of hanoi
void hanoi(int n,int f,int a,int t){
    if(n==0){
        return;  
    } 
    hanoi(n-1,f,t,a);
    cout<<f<<" "<<t<<endl;
    hanoi(n-1,a,f,t);
}
int main(){
    // Take the number of disks as input
    int n;
    cin>>n;
    // The minimum number of moves required will be 2ⁿ-1
    cout<<(1<<n)-1<<endl;
    // Print all the moves accordingly using a standard recursive code of tower of hanoi
    hanoi(n,1,2,3);
}
