#include <bits/stdc++.h>
using namespace std;

int fastModularExpo(int a, long long n, int MOD) {
  if (n == 0)
    return 1;
  if (n % 2 == 0)
    return fastModularExpo((1LL * a * a) % MOD, n / 2, MOD);
  return (1LL * a * fastModularExpo(a, n - 1, MOD)) % MOD;
}

<<<<<<< Updated upstream
void solve() {
 
}
=======
int main() { return 0; }
>>>>>>> Stashed changes
