#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		int A,B;
		cin>>A>>B;
		int count=0;
		for(int a=1;a<=A;a++){
			for(int b=1;b<=B;b++){
				string s1=lexical_cast<string>(a);
				string s2=to_string(b);
				string s=s1+s2;
				int z=(a*b)+a+b;
				string r=to_string(z);
				if(r==s){
					count++;
				}
			} 
		}
		cout<<count<endl;
	}
	return 0;
}

