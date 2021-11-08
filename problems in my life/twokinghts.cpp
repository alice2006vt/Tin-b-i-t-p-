#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int k =1;k <=n;++k){
		long long result = k * k, answer = result*(result-1)/2;
		if (k >2){
			answer -= 4 *(k-1)*(k-2);
		}
		cout << answer << "\n";
	}
}
