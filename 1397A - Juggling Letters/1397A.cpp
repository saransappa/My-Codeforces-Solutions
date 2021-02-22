#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
	    int n;
	    cin>>n;
	    map <int,int> m;
	   // k='abcdefghijklmnopqrstuvwxyz'
	    for(int i=0;i<n;i++){
	        string s;
	        cin>>s;
	        for(int j=0;j<s.size();j++){
	            m[s[j]-'a']++;       
	        }
	    }
	    bool d = false;
	    for(int i=0;i<=26;i++){
	        if(m[i]%n!=0){
	            cout<<"NO"<<endl;
	            d = true;
	            break;
	        }
	    }
	    if(!d)
	    cout<<"YES"<<endl;
	}
	return 0;
}
