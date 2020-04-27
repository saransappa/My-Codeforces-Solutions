#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 

template <typename... T>
void read(T&... args){          // Function to read multiple arguments
    ((cin>>args), ...);
}

template <typename... T>
void write(T&... args){          // Function to write multiple arguments
    ((cout<<args<<" "), ...);
}

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int i=0,j=1;
    int sum=0;
    while(j<n){
        sum = sum + (abs(a[i]-a[j]));
        i+=2;
        j+=2;
    }
    cout<<sum<<endl;
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