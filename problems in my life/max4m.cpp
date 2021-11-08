#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("max4m.inp","r",stdin);
    freopen("max4m.out","w",stdout);

    int n;  cin>>n;

    long long a[n];   for (int i=1;i<=n;i++)
                            cin>>a[i];

    sort(a+1,a+n+1);

    long long t1 = a[1]*a[2]*a[3]*a[4],
              t2 = a[1]*a[2]*a[n]*a[n-1],
              t3 = a[n]*a[n-1]*a[n-2]*a[n-3];

    cout<<max(t1,max(t2,t3));

    return 0;
}
