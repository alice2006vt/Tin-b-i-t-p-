#include <bits/stdc++.h>
using namespace std;
// day la mot thuat toan kiem tra uoc voi do phuc tap O(n ^1/3) 
// e dua vao y tuong duoi duong link o duoi nha thay
// https://codeforces.com/blog/entry/22317
 void sang(int n, bool prime[],bool primesquare[], int a[])
{
    for (int i = 2; i <= n; i++)
        prime[i] = true; 
       for (int i = 0; i <= (n * n + 1); i++)
        primesquare[i] = false;
 
    prime[1] = false;
 
    for (int p = 2; p * p <= n; p++) {

        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    int j = 0;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            a[j] = p;
            primesquare[p * p] = true;
            j++;
        }
    }
}
 

int demuoc(int n)
{

   if (n == 1)
        return 1;
    bool prime[n + 1], primesquare[n * n + 1];
    int a[n]; 
    sang(n, prime, primesquare, a);
    int ans = 1;
    for (int i = 0;; i++) {
        if (a[i] * a[i] * a[i] > n)
            break;
        int cnt = 1; 
        while (n % a[i] == 0) 
        {
            n = n / a[i];
            cnt = cnt + 1; 
        } 
        ans = ans * cnt;
    }
 
    if (prime[n])
        ans = ans * 2;
 
    else if (primesquare[n])
        ans = ans * 3;
    else if (n != 1)
        ans = ans * 4; 
    return ans; 
}
 
int main()
{
    freopen("veryhard.inp", "r", stdin);
    freopen("veryhard.out", "w", stdout);
    int n,a[199];
	cin >> n;
	for(int i = 0; i < n;i++){
		cin >> a[i];
		if (demuoc(a[i]) % 2==0)
			cout << "0" << " ";
		else
			 cout << "1" << " ";
	}

    return 0;
}
