#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("bishu.inp","r",stdin);
	//freopen("bishu.out","w",stdout);
	int n,q;
	cin >> n;
	vector<int>a(n);
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
    cin >> q;
	vector<int>b(q); 	for(int i =0; i < q;i++)
		cin >> b[i];
	for(int i =0; i < q;i++){
		int sum =0,d =0;
		for(int j = 0; j < n;j++)
			if (a[j] <=b[i]){
				sum += a[j];
		         d++;
	}
	cout << d <<" " << sum << "\n";
	}
	return 0;
}
