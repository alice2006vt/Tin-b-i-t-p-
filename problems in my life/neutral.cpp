#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("neutral.inp","r",stdin);
	freopen("neutral.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector<int>a(n);
	vector<int>b(m);
	for(int i = 1; i <=n;i++){
		cin >> a[i];
	}
	for(int i = 1; i <=m;i++){
		cin >> b[i];
	}
	int x1=0,y1=0,x2=0,y2=0;
	for(int i = 1; i <=n;i++){
		if (a[i] >0)
			x1++;
		if (a[i] <0)
			y1++;
	}
	for(int i = 1; i <=m;i++){
		if (b[i] >0)
			x2++;
		if (b[i] < 0)
			y2++;
	}
	int result = (x1*y2) + (x2*y1);
	cout << result;
	return 0;
	
}
