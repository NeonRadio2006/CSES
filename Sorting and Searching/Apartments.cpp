#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    long long n,m,k;
    cin>>n>>m>>k;
    // Take the desired size as input
    vector<long long>d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    // Take the size of each apartment as input
    vector<long long>s(m);
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    // Sort both the vectors
    sort(d.begin(),d.end());
    sort(s.begin(),s.end());
    // Initialize the answer with 0
    // i is the pointer to d vector
    // j is the pointer to s vector
    int ans=0,i=0,j=0;
    // Loop until both of the pointers denotes valid indices
    while(i<n && j<m){
        // Increment j if the size of the apartment is too small
        if(s[j]<d[i]-k){
            j++;
        }
        // Increment i if the size of the apartment is too big
        else if(s[j]>d[i]+k){
            i++;
        }
        // We have found the best apartment 
        // Increment the answer and both the pointers
        else{
            ans++;
            i++;
            j++;
        }
    }
    // Print the answer
    cout<<ans<<endl;
    return 0;
}
