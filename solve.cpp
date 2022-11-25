#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

void solve();

int main()
{

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}

void solve()
{
    ll n, mx = 0, mxSecond = 0, mxIndex = 0;
    cin >> n;
    ll numbers[n];
    for (ll i = 0; i < n; i++)
    {
        ll in;
        cin >> in;
        numbers[i] = in;
        mxIndex = mx != max(mx, in) ? i : mxIndex;
        ll temp = mx;
        // cout << temp << " t s " << mxSecond << endl;
        mx = max(mx, in);

        if (mx != temp)
            mxSecond = temp;
        else
        {
            mxSecond = max(mxSecond, in);
        }
    }

    if (mxSecond == 0)
        mxSecond = mx;

    // cout << mxSecond << endl;
    for (ll i = 0; i < n; i++)
    {
        // cout << "I:: " << i << endl;
        // cout << "idx::" << mxIndex << endl;

        if (i == mxIndex)
            cout << numbers[i] - mxSecond << " ";
        else
            cout << numbers[i] - mx << " ";
    }
    cout << endl;
}
