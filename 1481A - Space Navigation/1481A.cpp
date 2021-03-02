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
    int x,y;
    cin>>x>>y;
    string s;
    int r=0,l=0,u=0,d=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='U')u++;
        elif(s[i]=='D')d--;
        elif(s[i]=='L')l--;
        else r++;
    }
    if((x>0 && r>0)||(x<0 && l<0)||(x==0)){
        if((x>0 && r<x)||(x<0 && l>x)){
            cout<<"NO"<<endl;
            return;
        }
        if((y>0 && u>0)||(y<0 && d<0)||(y==0)){
            if((y>0 && u<y)||(y<0 && d>y)){
                cout<<"NO"<<endl;
                return;
            }
            else cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
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