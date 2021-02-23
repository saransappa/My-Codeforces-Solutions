#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

template <typename... T>
void read(T&... args){          // Function to read multiple arguments
    ((cin>>args), ...);
}

template <typename... T>
void write(T&... args){          // Function to write multiple arguments
    ((cout<<args<<" "), ...);
}

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

/*Code starts from here */

void solve(){
    string s;
    cin>>s;
    string t = "hello";
    int i=0,j=0;
    string k = "";
    //cout<<s<<endl;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            k+=s[i];
            i++;
            j++;
        }
        else{
            while(i<s.size() && s[i]!=t[j])i++;
        }
    }
    if(k==t)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    solve();
	return 0;
}