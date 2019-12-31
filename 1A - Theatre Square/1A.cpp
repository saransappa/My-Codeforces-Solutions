#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a;
	cin>>n>>m>>a;
	long long int k,l;
	if(n%a==0){
		k=n/a;
	}
	else{
		k=n/a;
		k++;
	}
	if(m%a==0){
		l=m/a;
	}
	else{
		l=m/a;
		l++;
	}
	long long int p=k*l;
	cout<<p<<endl;
	return 0;
}
