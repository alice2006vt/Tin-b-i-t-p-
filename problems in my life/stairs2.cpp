// code on gvim 
// date : 11.1.2021
// time : 7.30 AM
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
#define readfle freopen("stairs2.inp","r",stdin)
#define writefle freopen("stairs2.out","w",stdout)
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
int n; int a[110]; string f[110];

// function
void Read(){
	cin >> n;
	vlp(i,1, n){
		cin >> a[i];
	}
}
string add(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=a[i]-48 + b[i]-48 + carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+48)+res;
    }
    if(carry>0) res="1"+res;
    return res;
}
void Solve(){
    Read();
    if (a[1] ==0)
		f[1] = '0'; 
	 else 
		f[1] = '1';
	if (a[2] == 0)
		 f[2] = '0';
	else 
		 if (a[1] == 0)
			  f[2] = '1';
		 else 
			  f[2] = '2';
	for(int i  = 3; i <= n;i++){
		f[i] = add(f[i-1],f[i-2]);
		if (a[i] ==0){
			f[i] = '0';
		}
	}
	cout << f[n];

}
// Main
int main(){
	fstio;
  #ifndef ONLINE_JUDGE
	 //readfle;
	 //writefle;
  #endif  
	Solve();
	return 0;
}
