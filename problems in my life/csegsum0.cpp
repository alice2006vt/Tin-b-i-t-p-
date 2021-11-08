#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n,int zero){
    unordered_map<int, int> sum;
	int result = 0;
	int curr = 0;
	for(int i = 0; i <n;i++){
		curr += a[i];
		if (curr == zero)
			result++;
		if (sum.find(curr - zero) != sum.end())
			result += sum[curr - zero];
		sum[curr]++;
	}
	return result;
}
int main(){
	freopen("csegsum0.inp","r",stdin);
	freopen("csegsum0.out","w",stdout);
	int n;
	cin >> n;
    int a[100];
	for(int i = 0; i <n;i++){
		cin >> a[i];
	}
	cout << check(a,n,0);
	return 0;

}
