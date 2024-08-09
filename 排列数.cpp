#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int a[110];
int p[110];
int vst[110];
int cnt = 0;
int n, k;
void print() {
	for (int i = 1; i <= k; i ++) {
		cout<<p[i]<<" ";
	} 
	cout<<endl;
}

void dfs(int x) {
	if (x > k) {
		print();
		cnt ++;
		return;
	}
	
	for (int i = 1; i <= n; i ++) {
		if (!vst[i]) {
			vst[i] = 1;
			p[x] = a[i];
			dfs(x + 1);
			vst[i] = 0;
		}
	}	
}

int main() {
	cin>>n>>k;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	}
	dfs(1); 
	return 0;
}
