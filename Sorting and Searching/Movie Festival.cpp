#include<bits/stdc++.h>
using namespace std;
bool Comp(pair<int,int>x,pair<int,int>y){
    return x.second<y.second;
}
int main(){
    // Take the number of movies as input
    int n;
    cin>>n;
    // Take the start and end time of each movie as input
    vector<pair<int,int>>times;
    for(int i=0;i<n;i++){
        int startTime,endTime;
        cin>>startTime>>endTime;
        times.push_back({startTime,endTime});
    }
    // Sort the movies in ascending order of end time using a custom comparator
    sort(times.begin(),times.end(),Comp);
    // Initialize the answer with 0
    // lastEnd denotes the ending time of the movies we watched at last
    int ans=0;
    int lastEnd=0;
    // Traverse through every pair of start and end times
    for(auto time:times){
        int start=time.first;
        int end=time.second;
        // If the start time of current movie is greater than or equal to th end time of the movie we watched just before this
        if(start>=lastEnd){
            // Then increment the answer and update the lastEnd
            ans++;
            lastEnd=end;
        }
    }
    // Print the final answer
    cout<<ans<<"\n";
    return 0;
}
