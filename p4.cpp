#include <bits/stdc++.h>
using namespace std;

int rootsum(int n){
    int res = 0;
    while(1){
        res += (n%10+n/10);
        n = res;
        if(res/10 == 0)
            break;
        res = 0;
    }
    return res;
}

int main()
{
    int N, k , x, num=0;
    scanf("%d", &N);
    for(N; N>0; N--){
        num=0;
        scanf("%d %d", &k, &x);
        while(k){
            if(rootsum(num) == x)
                k--;
            num++;
        }
        printf("%d\n", num-1);
    }

    system("PAUSE");
    return 0;
}


