#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int h,m;
		cin>>h>>m;
		int k = 23-h;
		int l = 60-m;
		int t = k*60 + l;
		cout<<t<<endl;
	}
	return 0;
}
