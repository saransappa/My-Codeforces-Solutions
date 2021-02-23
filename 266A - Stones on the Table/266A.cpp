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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1])count++;
    }
    cout<<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    solve();
	return 0;
}