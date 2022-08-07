#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();

int main() {
	optimize();

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
#endif

	clock_t start_time = clock();
	int t = 1;
	// cin >> t;
	while(t--) solve();
	clock_t end_time = clock();
	double run_time = (end_time - start_time) / CLOCKS_PER_SEC; 

	cerr << "Run Time: " << run_time << " ";	
}

void solve() {

}