#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

/*Code starts from here */

void solve(){
    int a,b,n;
    cin>>a>>b>>n;
    int c=0;
    while(a<=n && b<=n){
        if(a>b){
            b+=a;
        }
        else{
            a+=b;
        }
        c++;
    }
    cout<<c<<endl;
}

int main() {
    int t;   
    cin>>t;
    for(int y=0;y<t;y++){
        solve();
    }
	return 0;
}