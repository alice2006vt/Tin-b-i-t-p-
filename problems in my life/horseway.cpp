#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	vector<int>a(m);
	for(int i = 0; i < m;i++){
		cin >> a[i];
	}
	int f[n+1];
	memset(f , 0 , sizeof(f));
	f[0] = 1;
	for(int i = 0; i <=n;i++){
	  for(int j = 0; j < m;j++)
		  if(a[j] + i <=n){ f[a[j] + i] += f[i];}
	}
	cout << f[n] << endl;
	return 0;
}
