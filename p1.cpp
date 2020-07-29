#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n; // m筆詢問, n個數字 
    int i, a, b;
    //int *data, *arr_xor;
    
    cin >> n >> m;
    int *data = new int[n];
    int *arr_xor = new int[n+1];
	//data = (int*) malloc((n+1)*sizeof(int));
    //arr_xor = (int*) malloc((n+1)*sizeof(int)); // a-1
    for(i=0; i<n; i++){
        cin >> data[i];
        if(data[i] > 100000007)
            return 0;
    }
    arr_xor[0] = 0;
    for(i=0; i<n; i++)
        arr_xor[i+1] = arr_xor[i] ^ data[i];
    for(i=0; i<m; i++){
        cin >> a >> b;  
        if((1<=a) && (a<=b))
            cout << (arr_xor[a-1]^arr_xor[b]) << endl;
        else
            return 0;
    }
	delete data;
	delete arr_xor;
    //free(data);
    //free(arr_xor);
    return 0;
}