#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, m, ans;
    int rem = 0;
    cin >> N;
    cin >> m;
    int *a = new int[N];
    for (int i=0; i<N; ++i) 
        cin >> a[i];
    int x = *max_element(a, a+N);
    for (int i=0; i<N; ++i)
        rem += x-a[i];
    if (m>rem) 
        ans = x + floor((m-rem)/ N) + !!((m-rem)% N);
    else 
        ans = x;
    cout << ans << endl;

    delete[] a;
    system("PAUSE");
    return 0;
}