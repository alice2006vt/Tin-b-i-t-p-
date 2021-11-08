#include<bits/stdc++.h>

using namespace std;
int d[] = {1,1,2,6,4,2,2,4,2,8};
int last(int n){
     if (n < 10)
	   return d[n];

if (((n/10)%10)%2==0)
     return (6*last(n/5)*d[n%10])%10;
else
	return (4*last(n/5)*d[n%10]) % 10;
}
int main(){
	freopen("other.inp","r",stdin);
	freopen("other.out","w",stdout);
	int n;
	while (cin >> n){
	cout << last(n);
    }
	return 0;
	
}
