#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("countang.inp","r",stdin);
	freopen("countang.out","w",stdout);
	int n,x,y;
	cin >> n;
	for(int i =1 ; i <=n;i++){
		cin >> x >> y ;
	}
	cout << n * (n-1) /2;
	return 0;
}
