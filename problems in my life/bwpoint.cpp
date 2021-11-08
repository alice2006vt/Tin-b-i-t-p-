#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[1000005],b[10000005];
	for(int i = 1; i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n;i++){
		cin >> b[i];
	}
	sort(a + 1, a + n + 1);
   	sort(b + 1, b + n + 1);	
	int result = 0,d =1;
	// binary search here
	int middle = min(a[1],b[1]) -1;
	for(int i = 1; i <=n;i++){
	    while (d <=n && b[d] <=middle) d++;
		if (d > n) 
			break;
		if (a[i] < middle) 
			continue;
		result++;
		middle = max(a[i],b[d]);
	}
	cout << result;
}
