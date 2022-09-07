#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define F first
#define S second
#define PB push_back
#define all(p) p.begin(), p.end()
#define optimize()                                                             \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl "\n"
#define sz(x) (int)x.size()
#define fraction(x)                                                            \
  cout.unsetf(ios::floatfield);                                                \
  cout.precision(x);                                                           \
  cout.setf(ios::fixed, ios::floatfield);

#ifndef ONLINE_JUDGE
#define file()                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout);
#else
#define file()
#endif

const double eps = 1e-9;
const double PI = acos(-1);

void solve();

int main() {
  optimize();
  // file();

  clock_t start_time = clock();
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
  clock_t end_time = clock();
  double run_time = (end_time - start_time);
  cerr << "Run Time: " << run_time << "ms" << endl;
}

void staricaseSearch(int arr[][4], int n, int m, int target) {
  int row = 0, column = m - 1;
  while (row < n || column >= 0) {
    if (target == arr[row][column]) {
      cout << "Row: " << row << endl
           << "Column: " << column << endl
           << "Value: " << arr[row][column] << endl;
      return;
    } else if (target > arr[row][column]) {
      row++;
    } else if (target < arr[row][column]) {
      column--;
    }
  }
  cout << "404 NOT Found!" << endl;
}

void solve() {
  int arr[][4] = {
      {10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
  int n = 4, m = 4;
  staricaseSearch(arr, n, m, 55);
}
