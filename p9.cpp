#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t, b;
    ld area;
    cin >> t;
    while (t--) {
        cin >> b;
        area = pow(1.1, 31) * b / 2;
        cout << area << endl;
        // cout << ceil(area) << endl;

        if (abs(area - (ll)(area)) <= area * 1e-14) {
            cout << (ll)(area) << endl;
        }
        else {
            cout << (ll)(area + 1) << endl;
        }
    } 
    return 0;
}