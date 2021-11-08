// code on gvim 
// date : 27.10.2021
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
using namespace std;
/*  code fast */
typedef double dble;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldble;
#define vlp(i,l,r) for(int i = l; i <= r;i++)
#define vlt(i,l,r) for(int i = l; i >= r;i--)
#define readfle freopen("c11pnum.inp","r",stdin)
#define writefle freopen("c11pnum.out","w",stdout)
#define read(n) scanf("%d",&n);
#define write(n) printf("%d",&n)
#define eld "\n"
#define wile(i) while (i--)
#define vetor(a) vector<int>a(n);
#define mem(a,val) memset(a, val, sizeof(a));
#define frt first
#define scd second
#define fstio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/* declare const */
const int MOD1 = 1e7;
const int MOD2 = 1e9;
const ll MODBIGNUM = 1e18;
const ldble pi =3.141592653589793; 
const int size = 1e5;
// declare variable
ll n; short k; vector<ll>a; 
int t; bool check[size]; 
// function
void sieve(){
    check[0] = check[1] =1 ;
	vlp(i,2,size-1){
	   if (!check[i]){
	        a.push_back(i);
			for(int j = 2 * i; j < size;j+=i)
			    check[j] = 1;
	   }
	}
}
void Read(){
	}

void Solve(){
	sieve();
    read(t);
    wile(t){
	  read(n); read(k);	
	  ll res =0;
	  for(int i = 0; i < a.size()-k;i++){
		  ll cur = 1;
		  bool co = 0;
		  for(int j = i; j < i + k; j++){
			  if (cur > n / a[j]){
				  co =1;
				  break;
			  }
			  cur = cur * a[j];
		  }
		  if (co ==1) continue;
		  if (cur <=n)
			  res = cur;
	  }
	  if (res == 0) 
		  cout << -1 << eld;
	  else 
		   cout << res << eld;
    }
}
// Main
int main(){
	fstio;
  #ifndef ONLINE_JUDGE
	// readfle;
	// writefle;
  #endif  
	
	Solve();
	return 0;
}
