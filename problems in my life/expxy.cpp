#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("expxy.inp","r",stdin);
	freopen("expxy.out","w",stdout);
	int n;
	cin >> n;
	int x[100000],y[100000];
	for(int i =1; i <=n;i++){
		cin >> x[i] >> y[i];
	}
	sort(x+1,x+n+1);
	sort(y+1,y+n+1);
	int x1,y1;
	x1 = x[(1+n) /2];
	y1 = y[(1+n)/2];
	double distance = (abs(x1 -x[1])) + (abs(y1-y[1]));
    for(int i =2; i <=n;i++){
		distance = distance + abs(x1-x[i]) + abs(y1-y[1]);
	}
	cout << fixed << setprecision(2) << distance;

    return 0;
}
