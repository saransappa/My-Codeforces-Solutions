#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

template <typename... T>
void read(T&... args){          // Function to read multiple arguments
    ((cin>>args), ...);
}

template <typename... T>
void write(T&... args){          // Function to write multiple arguments
    ((cout<<args<<" "), ...);
}

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

/*Code starts from here */

void solve(){
    int n,k;
    cin>>n>>k;
    if((n-(k-1)>0 && (n-(k-1))%2==1 ) ||(n-(k-1)*2>0 && (n-(k-1)*2)%2==0)){
        cout<<"YES"<<endl;
        if((n-(k-1))%2==1){
            for(int i=0;i<k-1;i++){
                cout<<"1"<<" ";
            }
            cout<<(n-(k-1))<<endl;
        }
        else{
            for(int i=0;i<k-1;i++){
                cout<<"2"<<" ";
            }
            cout<<(n-(k-1)*2)<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
    clock_t start, end;
    /* Recording the starting clock tick.*/
    start = clock(); 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;   
    cin>>t;
    for(int y=0;y<t;y++){
        solve();
    }
    // Recording the end clock tick. 
    end = clock();
    // Calculating total time taken by the program. 
    //double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    //cout << "Time taken by program is : " << fixed << time_taken << setprecision(5); 
    //cout << " sec " << endl; 
	return 0;
}