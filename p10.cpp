#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    // Solution sol;
    ll A, B, C;
    bool sw = 0;
    cin >> A >> B >> C;
    vector<ll> vec, x, y;
    vec.push_back(max(A, B));
    vec.push_back(min(A, B));

    if (A<B)
        sw = 1;
    for (int i=1; vec[i]; ++i) {
        vec.push_back(vec[i-1]%vec[i]);
        cout << vec[i-1] << " " << vec[i] << " " << vec[i-1]%vec[i] << endl;
    }

    ll n = vec.size();
    x.resize(n);
    y.resize(n);
    x[0] = y[1] = 1;
    for (int i=2; i<n; ++i) {
        x[i] = x[i-2];
        y[i] = y[i-2];
        cout << x[i] << " " << y[i] << endl;
        cout << x[i-1] << " " << y[i-1] << endl;
        cout << vec[i-2] << endl;
        x[i] -= (vec[i-2] / vec[i-1]) * x[i-1];
        y[i] -= (vec[i-2] / vec[i-1]) * y[i-1];
        cout << x[i] << " " << y[i] << endl;
    }
    
    cout << "\nx" << endl;
    for (int i=0; i<n; ++i)
        cout << x[i] << " ";
    cout << "\ny" << endl;
    for (int i=0; i<n; ++i)
        cout << y[i] << " ";

    if(sw==1)
        swap(x, y);

    cout << "\nx" << endl;
    for (int i=0; i<n; ++i)
        cout << x[i] << " ";
    cout << "\ny" << endl;
    for (int i=0; i<n; ++i)
        cout << y[i] << " ";

    ll gcd_n = vec[n-2];
    if (C%gcd_n) {
        cout << "N" << endl;
        system("PAUSE");
        return 0;
    }

    ll X = x[n-2] * (C / gcd_n), Y = y[n-2] * (C / gcd_n);
    cout << X << " " << Y << endl;
    if (x[n-1]<0) {
        x[n-1] = -x[n-1];
        y[n-1] = -y[n-1];
    }

    if ((X>=x[n-1]) || X<0) {
        X = (X%x[n-1] + x[n-1]) % x[n-1];
        Y = (C- X*A) / B;
    }
    cout << "Y" << endl;
    cout << X << " " << Y << endl;

    system("PAUSE");
    return 0;

}