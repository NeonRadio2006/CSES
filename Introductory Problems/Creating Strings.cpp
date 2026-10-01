#include <bits/stdc++.h>
using namespace std;
long long fact(long long n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
// The total number of unique arrangements of all the characters of our string will be:-
// n!/(f1! * f2! * f3! * ....) where f1,f2,f3,.. are frequencies of each character in the string
long long total(string &s){
    long long n=s.size();
    long long pa=fact(n);
    vector<long long>f(26,0);
    for(long long i=0;i<n;i++){
        f[s[i]-'a']++;
    }
    for(long long i=0;i<26;i++){
        if(f[i]){
            pa=pa/fact(f[i]);
        }
    }
    return pa;
}
// Function to generate all the unique strings
void generate(string &s,int i,set<string> &st){
    // Base Case
    if(i==s.size()){
        st.insert(s);
        return;
    }
    // Backtracking code
    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);
        generate(s,i+1,st);
        swap(s[i],s[j]);
    }
}
int main(){
    // Take the input string
    string s;
    cin>>s;
    // Print the total number of strings
    cout<<total(s)<<endl;
    // Set to find all the unique strings possible
    set<string>st;
    // Generating all the strings
    generate(s,0,st);
    // Printing all the strings
    for(auto s:st){
        cout<<s<<endl;
    }
    return 0;
}
