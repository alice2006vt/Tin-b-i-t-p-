// code on gvim 
// date : 1.11.2021
// time : 1.40 PM
// region : japan
// author : kyjro
/*  Libaries */
#include<iostream>
#include<algorithm>
#include<tuple>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<queue>
#include<stack>
#include<cstring>
#include<functional>
#include<set>
#include<list>
#include<cmath>
#include<iomanip>
#include<bitset>
#include<iterator>
#include <utility>
using namespace std;
/*  code fast */
typedef double dble;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldble;
#define vlp(i,l,r) for(int i = l; i <= r;i++)
#define vlt(i,l,r) for(int i = l; i >= r;i--)
#define readfle freopen(".inp","r",stdin)
#define writefle freopen(".out","w",stdout)
#define read(n) scanf("%d",&n);
#define write(n) printf("%d",&n)
#define eld "\n"
#define wile(i) while (i--)
#define vetor(a) vector<int>a(n);
#define llvetor(b) vector<ll>b(n);
#define llvecto(c) vector<ll>c;
#define mem(a,val) memset(a, val, sizeof(a));
#define frt first
#define scd second
#define fstio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/* declare const */
const int MOD1 = 1e7;
const int MOD2 = 1e9;
const ll MODBIGNUM = 1e18;
const ldble pi =3.141592653589793;
const int SIZE = 1e5 + 5;

// declare variable
int n; int a[100][100],b[100][100];
// function
void Solve(){
	vlp(i,1,n-1){
	   b[i][0] = 1;
       b[i][i+1] = -1;
	}
	b[0][0] = 0;
	b[1][1] = a[1][1];
	vlp(i,2,n){
		vlp(j,1,i){
			b[i][j] = max(b[i-1][j-1],b[i-1][j])+a[i][j];
		}
	}
	int maxposition = 1;
	vlp(i,2,n){
		if (b[n][maxposition] < b[n][i])
			maxposition = i;
	}
		cout << b[n][maxposition];
	
}
	
void Read(){
    cin >> n;
	vlp(i,1,n){
		vlp(j,1,i){
			cin >> a[i][j];
		}
	}

}
// Main
int main(){
	fstio;
  #ifndef ONLINE_JUDGE
	// readfle;
	// writefle;
  #endif  
	Read();
	Solve();
	return 0;
}
