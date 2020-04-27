#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int count=0;
        while(n>=10){
            int k=n-n%10;
            n=n%10;
            count +=k ;
            n+=floor(k/10);
        }
        count+=n;
        cout<<count<<endl;
    }
	return 0;
}
