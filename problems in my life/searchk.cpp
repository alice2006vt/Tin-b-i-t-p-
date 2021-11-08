#include<bits/stdc++.h>
using namespace std;
int factor(int n,int m){
	int result = 0;
	while ( n > 0){
		result += n / m;
	n/= m;
	}
	return result;
}

int find(int n,int m){
	int result = INT_MAX;
	for(int i =2 ; i <=sqrt(m);i++){
		int dem = 0;
		while (m % i ==0){
			dem ++;
			m /=i;
		}
		if (dem > 0){
			int lthua = factor(n,i) / dem;
			result = min(result,lthua);
		}
	}
	if (m >=2 ) {
		int lthuap = factor(n,m);
		result = min(result,lthuap);
	}
	return result;
}
int main(){
	freopen("searchk.inp","r",stdin);
	freopen("searchk.out","w",stdout);
	int n , m;
	cin >> n >> m;
    cout << find(n,m);
	return 0;
}
