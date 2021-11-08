#include<bits/stdc++.h>
using namespace std;
int demsl(int a[],int n){
    unordered_map<int, int> pres;
    int s = 0;
	int maxx = 0;
	for(int i = 0; i < n;i++){
		s += a[i];
		if (a[i] == 0 && maxx ==0)
			maxx = 1;
		if (s ==0){
			maxx = i+1;

		}
		if (pres.find(s) != pres.end()){
			maxx = max(maxx,i - pres[s]);
		}
		else {
			pres[s] = i;
		}
	}
	return maxx;
}

int main(){
	freopen("segmsum0.inp","r",stdin);	
	freopen("segmsum0.out","w",stdout);
    int n,a[100009];
	cin >> n;
	for(int i = 1; i <=n;i++){
		cin >> a[i];
	}
	cout << demsl(a,n);
		return 0;
}
