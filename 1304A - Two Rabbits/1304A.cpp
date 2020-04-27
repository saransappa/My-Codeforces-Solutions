#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int u=0;u<t;u++){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    int k= abs(x-y);
	    int l = a+b;
	    if(k%l==0){
	        cout<<k/l<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
}