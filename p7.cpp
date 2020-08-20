#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char **str = new char *[n+1];
    for (int i=0; i<2; ++i)
        str[i] = new char[n+1];
    cin >> str[0] >> str[1];

    int **dp = new int *[n+1];
    for (int i=0; i<n+1; ++i)
        dp[i] = new int[n+1];

    for (int i=0; i<=n; i++)
        dp[i][0] = 0;
    for (int j=0; j<=n; ++j)
        dp[0][j] = 0;

    for (int i=1 ; i<=n; ++i)
        for (int j=1; j<=n; ++j) {
            if (str[0][i-1] == str[1][j-1]) 
                dp[i][j] = dp[i-1][j-1] + 1;
            else if (dp[i-1][j] >= dp[i][j-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i][j-1];
        }
    for (int i=0; i<=n; ++i) {
        for (int j=0; j<=n; ++j)
            cout << dp[i][j] << " ";
        cout << endl;
    }

    cout << dp[n][n] << endl;

    // free
    for (int i=0; i<2; ++i)
        delete [] str[i];
    delete [] str;
    for (int i=0; i<n+1; ++i)
        delete [] dp[i];
    delete [] dp;

    return 0;
};



















471011