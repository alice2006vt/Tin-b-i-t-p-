#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("sumeven2.inp","r",stdin);
	freopen("sumeven2.out","w",stdout);
	int n;
	cin >>n;
	vector<int>a(n);
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	int even = 0;
	for(int i = 0;i <n;i++){
		if (a[i] % 2 ==0){
		     even++;
		}
	}
	int odd = n - even;
	int sum = (((even-1)*even) /2) + (((odd-1)*odd) /2);
	cout << sum;

	return 0;

}
