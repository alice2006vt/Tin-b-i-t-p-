// code on gvim
// date :
// author : kyjro
// Tags
// Idea : 
#include<bits/stdc++.h>
using namespace std;
// code fast
#define vlp(i,l,r) for(int i =l;i <=r;i++)
#define vlpt(i,l,r) for(int i =l;i >=r;i--)
#define readfile freopen("countdiv.inp","r",stdin);
#define writefile freopen("countdiv.out","w",stdout);
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// stuff
typedef long long ll;
typedef unsigned long long ull;
// declare const
const int size = 1e5 + 5;
const int maxn = 1e9 + 5;
const ll MAX = 1e18;
// declare variable
ll n; ll d = 0,i = 1;

// function
pair<ll, ll> factor(ll n) {
    ll s = 0;
    while ((n & 1) == 0) {
        s++;
        n >>= 1;
    }
    return {s, n};
}
ll pow(ll a, ll d, ll n) {
    ll result = 1;
    a = a % n;
    while (d > 0) {
        if (d & 1) result = result * a % n;
        d >>= 1;
        a = a * a % n;
    }
    return result;
}
bool test_a(ll s, ll d, ll n, ll a) {
    if (n == a) return true;
    ll p = pow(a, d, n);
    if (p == 1) return true;
    for (; s > 0; s--) {
        if (p == n-1) return true;
        p = p * p % n;
    }
    return false;
}
bool miller(ll n) {
    if (n < 2) return false;
    if ((n & 1) == 0) return n == 2;
    ll s, d;
    tie(s, d) = factor(n-1);
    return test_a(s, d, n, 2) && test_a(s, d, n, 3);
}
int main(){
	fast;
	//readfile; writefile;
	cin >> n;
	while (i <=n){
	 if (miller(i))
		if (n % i ==0){
			d++;
		}
		i++;
	}
	cout << d;

	return 0;
}
