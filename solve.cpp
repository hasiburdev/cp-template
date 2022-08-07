#include <bits/stdc++.h>
using namespace std;

// typedef long long int ll

#define F first
#define S second
#define PB push_back
#define all(p) p.begin(), p.end()
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define endl "\n"
#define sz(x) (int)x.size()
#define fraction(x)             \
  cout.unsetf(ios::floatfield); \
  cout.precision(x);            \
  cout.setf(ios::fixed, ios::floatfield);

const double eps = 1e-9;
const double PI = acos(-1);

void solve();

int main()
{
  optimize();

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  clock_t start_time = clock();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  clock_t end_time = clock();
  double run_time = (end_time - start_time) / CLOCKS_PER_SEC * 1000;

  cerr << "Run Time: " << run_time << "ms" << endl;
}

void solve()
{
}