#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int y=0;y<t;y++){
        string a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<a.size();i++){
          //  if(a[i]!=b[i]){
                char temp = c[i];
                if(c[i]==a[i]){
                    c[i] = b[i];
                    b[i] = temp;
                }
                else{
                    c[i] = a[i];
                    a[i] = temp;
                }
          
        }
       // cout<<"Final" <<a<<" "<<b<<" "<<c<<endl;
        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
