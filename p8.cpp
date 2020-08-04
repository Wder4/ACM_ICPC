#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (n<k) {
            cout << "NO" << endl;
            continue;
        }
        else if (n%2  && k%2==0) {
            cout << "NO" << endl;
            continue;
        }
        else if (n%2==0 && k%2) {
            if (n < k*2) {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            for(k; k>1; --k) {
                cout << "2 ";
                n -= 2;
            }
            cout << n << endl;
        } 
        else {
            cout << "YES" << endl;
           for(k; k>1; --k) {
                cout << "1 ";
                n -= 1;
            }
            cout << n << endl;
        }
    }

    return 0;
}