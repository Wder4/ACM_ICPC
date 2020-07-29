#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
        int arr[8];
    public:
        Solution(){
            for(int i=0; i<8; ++i)
                arr[i] = i+2;
        }
        int Arcane(int N) {
            int res = 0, mul = 0, chk = 0;
            if(N==1)
                return 1;
            int i = 7;
            while(1) {
                if(N==1)
                    break;
                int flag = N%arr[i];
                if(!flag) {
                    chk = 0;
                    res += arr[i]*pow(10, mul);
                    mul++;
                    N /= arr[i];
                    if(N>=arr[i])
                        i = 7;         
                    else
                        i--;  
                }
                else if(flag){
                    chk++;
                    i--;
                    if(chk >= 8)
                        return -1;     
                }                          
            }
            return res;             
        }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    Solution sol;
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int N;
    cin >> N;
    cout << sol.Arcane(N) << endl;
    system("PAUSE");
    return 0;
}