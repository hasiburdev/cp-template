#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

#define endl '\n';

void solve();

int main() {
  int tc = 1;
  cin >> tc;
  while (tc--) {
    solve();
  }
}

void solve() {
  ll n, mx = 0, mxSecond = 0, mxIndex = 0;
  cin >> n;
  ll numbers[n];
  for (ll i = 0; i < n; i++) {
    ll in;
    cin >> in;
    numbers[i] = in;
    mxIndex = mx != max(mx, in) ? i : mxIndex;
    ll temp = mx;
    mx = max(mx, in);
    if (mx != temp)
      mxSecond = temp;
    else {
      mxSecond = max(mxSecond, in);
    }
  }

  if (mxSecond == 0)
    mxSecond = mx;
  for (ll i = 0; i < n; i++) {
    if (i == mxIndex)
      cout << numbers[i] - mxSecond << " ";
    else
      cout << numbers[i] - mx << " ";
  }
  cout << endl;
}
