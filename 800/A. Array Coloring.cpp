#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN

const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    int n, x; cin >> n;
    int even = 0, odd = 0;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x & 1) odd++;
        else even++;
    }
    if (even) {
        if (odd & 1) NO;
        else YES;
    }
    else {
        if (odd & 1) NO;
        else YES;
    }
}

void better_solve() {
    // We can see that in both cases of even numbers, logic is same for odd numbers
    // So, we can ignore even numbers, as they don't change parity of numbers.
    int n, x; cin >> n;
    int odd = 0;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x & 1) odd++;
    }
    if (odd & 1) NO;
    else YES;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while(t--) {
        // solve();
        better_solve();
    }
    return 0;
}