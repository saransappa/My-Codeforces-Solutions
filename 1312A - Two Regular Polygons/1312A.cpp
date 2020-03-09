#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main() {
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n,m;
        cin>>n>>m;
        int k = gcd(n,m);
        if(k==n || k==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
