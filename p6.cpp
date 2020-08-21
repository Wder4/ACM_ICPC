#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int balseq(string s, int N, int K) {
            vector<int> cnt;
            cnt.resize(26);

            for (int i=0; i<N; ++i) {
                cnt[s[i] - 'A']++;
                if (s[i]-'A' > K-1) 
                    return 0;
            } 
            int mini = 1e9;
            for (int i=0; i<K; ++i)
                mini = min(mini, cnt[i]);
            return mini * K;
        }

};

int main() {
    Solution sol;
    string s;
    int N, K;
    cin >> N >> K;     
    cin >> s;
    if (s.size() != N)
        return 0;
    cout << sol.balseq(s, N, K) << endl;

    return 0;
}


