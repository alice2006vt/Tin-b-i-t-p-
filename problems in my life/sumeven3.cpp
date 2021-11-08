#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("sumeven3.inp","r",stdin);
	freopen("sumeven3.out","w",stdout);
	int n,even = 0;
	cin >> n;
	vector<int>a(n);
	for(int i = 1; i <=n;i++){
		cin >> a[i];
		if (a[i] % 2==0)
			even++;
	}
	int odd = n - even;
	int result = (((odd-1)*odd)/2)*even + (((even-2)*(even-1))/2)*even/3;
	cout << result;
	return 0;
}
