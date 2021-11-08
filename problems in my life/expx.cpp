#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10000000];
	cin >> n;
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int x = a[(n+1) /2];
	int sum = 0;
	for(int i = 0;i <n;i++){
		sum = sum + abs(a[i]-x);
	}
    cout << sum;

	return 0;
}
