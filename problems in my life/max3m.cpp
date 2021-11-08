#include<bits/stdc++.h>
using namespace std;
int main(){ 
    freopen("max3m.inp","r",stdin);
    freopen("max3m.out","w",stdout);

	int n;
	cin >> n;
	int a[100000];
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
    sort(a,a+n);
	long long max1,max2,max3,max4;
	max1 = a[0]*a[1]*a[n-1];
	max2 = a[n-1] * a[n-2] * a[n-3];
    cout << max(max1,max2);
	return 0;
	
}
