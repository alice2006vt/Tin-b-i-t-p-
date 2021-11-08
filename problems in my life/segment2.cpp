#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("segment2.inp","r",stdin);
	freopen("segment2.out","w",stdout);
	int n;
	cin >> n;
	vector<int>a(n);
	
	for(int i = 0; i <n;i++){
		cin >> a[i];
	}
	long long kq = 0 , sum = 0;
	for(int i  =0; i <n;i+=1){
		if (a[i] >=0)
			sum += a[i];
		else 
			sum = 0;
		kq = max(kq,sum);
	}
	cout << kq;
	return 0;
}
