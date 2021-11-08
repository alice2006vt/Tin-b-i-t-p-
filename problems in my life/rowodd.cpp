#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    freopen("rowodd.inp","r",stdin);
	freopen("rowodd.out","w",stdout);
	int n;
	cin >> n;
	ll a[1000000];
	for(int i = 1; i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	bool check = true;
	for(int i =1;i <= n;i++){
         ll t = i;
		if (a[i] != (t*i+2)){

			check = false;
			break;
		}
	}
		if (check==true)
			for(int i =1;i <= n;i++){
			   cout << a[i] << "\n";
			}
		else 
			cout << "0";
	
	return 0;
}
