#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("mod1.inp","r",stdin);
	freopen("mod1.out","w",stdout);
	long long n,k,sum =1 ;
	cin >> n >> k;
    for(int i = 2; i <=n;i++){
        sum = ((sum  *i) %k)%k;
	}
	cout << sum;
	return 0;

}
