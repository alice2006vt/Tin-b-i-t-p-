#include <bits/stdc++.h>
#define endl "\n"

typedef long long ll;

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("arith.inp","r",stdin);
	freopen("arith.out","w",stdout);
    int n;  cin>>n;
    ll a[n];
    for (int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    int d=a[2]-a[1];
    for (int i=2;i<n;i++)
        if (a[i]+d!=a[i+1]){
            cout<<-1;
            return 0;
        }
    for (int i=1;i<=n;i++)
        cout<<a[i]<<endl;
    return 0;
}

