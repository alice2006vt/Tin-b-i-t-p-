#include <bits/stdc++.h>
using namespace std;
bool tim(int arr[], int size, int n)
{
	int i = 1;
	int j = 2;

	while (i <= size && j <= size)
	{
		if (i != j && (arr[j] - arr[i] == n || arr[i] - arr[j] == n) )
		{
			cout << j <<" "<<  i;
			return true;
		}
		else if (arr[j]-arr[i] < n)
			j++;
		else
			i++;
	}

	return false;
}
int main()
{
	int n,k,a[1000];
	cin >> n >> k;
	for(int i = 1; i <= n;i++){
		cin >> a[i];
	}
	tim(a,n,k);
   	return 0;
}


