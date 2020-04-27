#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function

template <typename... T>
void read(T&... args){          // Function to read multiple arguments
    ((cin>>args), ...);
}

template <typename... T>
void write(T&... args){          // Function to write multiple arguments
    ((cout<<args<<" "), ...);
}

void solve(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a')c++;
    }
    int k = s.size();
    k/=2;
    if(c>k){
        cout<<s.size()<<endl;
    }
    else{
        cout<<2*c - 1<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    //int t;   
    //cin>>t;
    //for(int y=0;y<t;y++){
        solve();
    //}
	return 0;
}