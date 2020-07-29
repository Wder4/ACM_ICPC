#include <bits/stdc++.h>
#define size 1000
#define fpf 1000000009
using namespace std;

int dp[size][size];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, k, sum=0;
    
    
    dp[0][0] = dp[1][1] = dp[2][1] = 1;
    cin >> N >> k;
    // cout<<"test"<<endl;
    for(int i=2; i<=N; i++){
        for(int j=2; j<=min(k, i); j++)
            dp[i][j] = (dp[i-1][j-1] + dp[i-2][j-1]) % fpf;
    }
    
    for(int j=0; j<=k; j++) 
        sum = (sum + dp[N][j]) % fpf;
    cout << sum << endl;

    system("PAUSE");
    return 0;
}

