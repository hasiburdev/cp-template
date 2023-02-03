#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve();
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test_case = 1;
  cin >> test_case;
  while (test_case--)
    solve();
  return 0;
}
void solve() {
    string s;
    vector<int> v;
    cin >> s;
    if(s.size() == 2) {
        cout << s[1] << endl;
    } else {
        int mn = 100;
        for(int i=0; i<s.size(); i++) {
            v.push_back(stoi( to_string(s[i])));
        }
        for(int i=0; i<v.size(); i++) {
            if(v[i] < mn) mn = v[i];
        }
        cout << mn -48 << endl;
    }
}