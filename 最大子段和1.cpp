#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 2e5 + 10;
ll a[N];
ll sum[N];
int main() {
	int n;
	cin>>n;
	
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
		sum[i] = sum[i - 1] + a[i];
		
	}	
	ll ans = 0;
	for (int i = 1; i <= n; i ++){
		for (int j = i; j <= n; j ++) {
			
			ans = max(sum[j] - sum[i - 1], ans);
		}
	}	
	cout<<ans;
	
	return 0;
} 
