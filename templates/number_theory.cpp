#include<iostream>
#include<map>
using namespace std;

map<int, int> primeFactorize(int n);
map<int, int> primeFactorizeRootN(int n); 

int main() {
    // Test the functions here.
    map<int, int> m = primeFactorize(24);
    for(auto u:m) {
        cout << u.first << ": " << u.second << endl;
    }


    return 0;
}

// bool isPrime(int number) {

// }

// vector<int> sieveOfEretosthenes(int number) {
     
// }

// Prime Factorization
// Complexity O(n)
map<int, int> primeFactorize(int n) {
    map<int, int> m;
    for(int i=2; i<=n; i++) {
        if(n%i==0) {
            int count = 0;
            while(n%i==0) {
                m[i]++;
                n/=i;
            }
        }
    }
    return m;
}
// Complexity O(√n) 
map<int, int> primeFactorizeRootN(int n) {
    map<int, int> m;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            int count = 0;
            while(n%i==0) {
                m[i]++;
                n/=i;
            }
        }
    }
    if(n>1) m[n] = 1;
    return m;
}