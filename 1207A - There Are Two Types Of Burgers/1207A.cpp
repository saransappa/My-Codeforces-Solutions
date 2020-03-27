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
    int b,p,f,h,c,pro=0;
    read(b,p,f,h,c);
    if(h>c){
        while(b>=2 && p>=1){
            b-=2;
            p--;
            pro+=h;
        }
        while(b>=2 && f>=1){
            b-=2;
            f--;
            pro+=c;
        }
    }
    else{
        while(b>=2 && f>=1){
            b-=2;
            f--;
            pro+=c;
        }
        while(b>=2 && p>=1){
            b-=2;
            p--;
            pro+=h;
        }
    }
    cout<<pro<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;   
    cin>>t;
    for(int y=0;y<t;y++){
        solve();
    }
	return 0;
}