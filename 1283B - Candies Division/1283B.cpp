#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int n,k;
		cin>>n>>k;
		if(n%k==0){
			cout<<n<<endl;
		}
		else{
			int p = n%k;
			int z = k/2;
			if(p>z){
				int s = p-z;
				cout<<n-s<<endl;
			}
			else{
				cout<<n<<endl;
			}
		}
	}
	return 0;
}
