#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;   
    cin>>n;
    int r[n],b[n];
    for(int z=0;z<n;z++){
        cin>>r[z];
    }
    for(int z=0;z<n;z++){
        cin>>b[z];
    }
    int rc=0,bc=0;
    for(int i=0;i<n;i++){
        if(r[i]==1 && b[i]==0)rc++;
        else if(r[i]==0 && b[i]==1)bc++;
    }
    //cout<<rc<<" "<<bc<<endl;
    if(rc==bc && rc==n)cout<<"-1"<<endl;
    else{
        if(rc!=0)cout<<bc/rc +1<<endl;
        else cout<<"-1"<<endl;
    }
	return 0;
}