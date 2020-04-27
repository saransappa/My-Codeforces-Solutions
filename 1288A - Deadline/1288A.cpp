#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		int n;
		int d;
		cin>>n>>d;
		if(d<=n){cout<<"YES"<<endl;}
		else{
			int k=0;
			for(int i=1;i<=n;i++){
				k=(int)(i+ceil((double)d/(i+1)));
				//cout<<k<<endl;
				if(k<=n){break;}
			}
			if(k<=n){cout<<"YES"<<endl;}
			else{cout<<"NO"<<endl;}
		}
	}
	return 0;
}
