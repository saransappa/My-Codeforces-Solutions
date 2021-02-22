#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

/*Code starts from here */

void solve(){
    int n;
    cin>>n;
    int a[n];
    string s="",t="";
    for(int i=0;i<n;i++){
        if(i%2==0){
            t+="0";
        }
        else{
            t+="1";
        }
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            s+="0";
        }
        else{
            s+="1";
        }
    }
    int c1=0,c2=0;
    for(int i=0;i<n;i+=2){
        if(s[i]!=t[i])c1++;
    }
    for(int i=1;i<n;i+=2){
        if(s[i]!=t[i])c2++;
    }
    if(n==1){
        if(s=="1"){
            cout<<"-1"<<endl;
        }
        else if(s=="0"){
            cout<<"0"<<endl;
        }
    }
    else{
        if(c1==c2){
            cout<<c1<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
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