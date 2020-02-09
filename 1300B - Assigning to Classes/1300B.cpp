#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+(2*n));
        int k=a[n];
        int l=a[n-1];
        cout<<abs(k-l)<<endl;
    }
	return 0;
}