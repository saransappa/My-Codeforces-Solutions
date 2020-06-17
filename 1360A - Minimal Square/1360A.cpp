#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

/*Code starts from here */

void solve(){
    int a[2];
    cin>>a[0]>>a[1];
    sort(a,a+2);
    if(2*a[0]>=a[1]){
        cout<<(2*a[0])*(2*a[0])<<endl;
    }
    else{
        cout<<(a[1]*a[1])<<endl;
    }
}

int main() {
    int t;   
    cin>>t;
    for(int y=0;y<t;y++){
        solve();
    }
	return 0;
}