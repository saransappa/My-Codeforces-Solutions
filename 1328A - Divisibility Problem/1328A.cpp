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

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;   
    cin>>t;
    for(int y=0;y<t;y++){
        int a,b;
        cin>>a>>b;
        int k = a%b;
        if(k!=0){
        cout<<b-k<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
	return 0;
}