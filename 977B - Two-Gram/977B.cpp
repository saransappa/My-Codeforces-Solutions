#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map <string,int> m;
    set<string> s1;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        string t = s.substr(i,2);
        s1.insert(t);
        m[t]++;
    }

    int maxi = INT_MIN;
    string ans = "";
    for(string k:s1){
        if(m[k]>maxi){
            maxi = max(maxi, m[k]);
            ans = k;
        }
    }
    cout<<ans<<endl;
    return 0;
}
