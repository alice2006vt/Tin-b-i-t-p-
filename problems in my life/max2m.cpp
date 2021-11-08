#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("max2m.inp","r",stdin);
	freopen("max2m.out","w",stdout);
	int n;
	cin >> n;
	vector<int>a(n);
	for(int i = 0; i <n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	long long max1=a[0] * a[1],max2=a[n-1]*a[n-2];
    cout << max(max1,max2);
	return 0;

}
