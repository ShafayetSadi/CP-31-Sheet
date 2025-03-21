#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

const int MOD = 1e9 + 7;

int32_t main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc; cin >> tc;
    while (tc--) {
        int n, empty_cell = 0, ans = 0;
        string str; cin >> n >> str;
        
        for (char c : str) {
            if (c == '.') empty_cell++;
            else if (empty_cell) {
                if (empty_cell >= 3) {
                    ans = 2;
                    empty_cell = 0;
                    break;
                }
                else ans += min(empty_cell, 2);
                empty_cell = 0;
            }
        }
        
        if (empty_cell >= 3) ans = 2;
        else ans += min(empty_cell, 2);
        cout << ans << endl;
    }
    
    return 0;
}