#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
	    int n;
	    cin>>n;
	    vector <int> v;
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	        v.push_back(k);
	    }
	    sort(v.begin(),v.end());
	    int z;
	    while(1){
	        
	        if(v.size()==1){
	            cout<<"YES"<<endl;
	            break;
	        }
	        z = v.size();
	        for(int i=0;i<v.size();i++){
	            int p =0;
	            for(int j=0;j<v.size();j++){
    	            if(i!=j && abs(v[i]-v[j])<=1){
    	                v.erase(v.begin()+i);
                        p =1;
                        break;
    	            }
	            }
	            if(p==1){
	                break;
	            }
	        }
	        if(v.size()==1){
	            cout<<"YES"<<endl;
	            break;
	        }
	        if(z==v.size()){
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
