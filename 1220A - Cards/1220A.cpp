#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define elif else if
template <typename... T>
void read(T&... args){          // Function to read multiple arguments
    ((cin>>args), ...);
}

template <typename... T>
void write(T&... args){          // Function to write multiple arguments
    ((cout<<args<<" "), ...);
}

void solve(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int o=0,n=0,e=0,r=0,z=0;
    for(int i=0;i<s.size();i++){
        char p  = s[i];
        if(p=='o')o++;
        elif(p=='n')n++;
        elif(p=='e')e++;
        elif(p=='z')z++;
        else r++;
    }
    string ans="";
    while(o>=1 && n>=1 && e>=1){
        o--;
        n--;
        e--;
        ans += "1 ";
    }
    while(z>=1 && e>=1 && r>=1 && o>=1){
        z--;
        e--;
        r--;
        o--;
        ans +="0 ";
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    solve();
	return 0;
}