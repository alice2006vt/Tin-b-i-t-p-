#include <iostream>
using namespace std; 

int main(){
	freopen("number0.inp","r",stdin);
	freopen("number0.out","w",stdout);
    int n; 
    cin>>n; 
    int d=0; 
    while(n>=5){
        n=n/5; 
        d+=n; 
   }
   cout<<d; 
   return 0; 
}
