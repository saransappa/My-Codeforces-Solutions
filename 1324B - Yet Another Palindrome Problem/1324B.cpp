#include <bits/stdc++.h>
using namespace std;
// This problem is solved using Dynamic Programming
// a - Given array
// c - Reverse of given array
// b - Table for DP
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;   
    cin>>t;
    for(int z=0;z<t;z++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int b[n+1][n+1];
        for(int i=0;i<n+1;i++){
            b[0][i]=0;
            b[i][0]=0;
        }
        int c[n];
        for(int i=0;i<n;i++){
            c[i] = a[n-i-1];
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(a[i-1]==c[j-1]){
                    b[i][j] = b[i-1][j-1] + 1;
                }
                else{
                    int r = max(b[i-1][j],b[i][j-1]);
                    b[i][j] = max(r,b[i-1][j-1]);
                }
            }
        }
        int m = INT_MIN;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                m = max(b[i][j],m);
            }
        }
        if(m>=3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}