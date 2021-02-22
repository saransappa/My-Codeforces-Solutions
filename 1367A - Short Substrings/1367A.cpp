#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

/*Code starts from here */

void solve(){
    string s,t;
    cin>>s;
    int i=0;
    while(i<s.size()-1){
        if(s[i]==s[i+1]){
            t+=s[i];
            i++;
        }
        else{
            t+=s[i];
        }
        i++;
    }
    t+=s[s.size()-1];
    cout<<t<<endl;
}

int main() {
    int t;
    cin>>t;
    for(int y=0;y<t;y++){
        solve();
    }
   
	return 0;
}