#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int u=0;u<t;u++){
	    string s;
	    cin>>s;
	    int i=0;
	    int j=s.size()-1;
	    while(s[i]!='1' && i<s.size()){
	        i++;
	    }
	    while(s[j]!='1' && j>0){
	        j--;
	    }
	    int count = 0;
	    //cout<<"i ->"<<i<<"j ->"<<j<<endl;
	    for(int k=i;k<=j;k++){
	        if(s[k]=='0'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
