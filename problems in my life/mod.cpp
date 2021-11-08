#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("mod.inp","r",stdin);
	freopen("mod.out","w",stdout);
	int n,k, sum =1;
	cin>> n >> k;
	vector<int>a(n);
	for(int i =1 ; i <=n;i++){
		cin >> a[i];
	}
	for(int i = 1; i <=n;i++){
           sum = ((sum*a[i])%k)% k;
	}
	cout << sum;
	return 0;

}
