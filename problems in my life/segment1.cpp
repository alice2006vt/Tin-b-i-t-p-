#include<bits/stdc++.h>
#define forp(i,l,r) for(int i=l;i <=r;i++)
#define form(i,l,r) for(int i=l;i >=r;i--)
using namespace std;

int main(){
	freopen("segment1.inp","r",stdin);
	freopen("segment1.out","w",stdout);
	int n,d = 0,kq =0;
	cin >> n;
	vector<long long>a(n);
	forp(i,1,n){
		cin >> a[i];
	}
	forp(i,1,n){
		if (a[i] <a[i+1]){
            d++;
		}
		else 
			 d=1;
        kq = max(kq,d);		
	}
	cout << kq;
	return 0;
	
}

