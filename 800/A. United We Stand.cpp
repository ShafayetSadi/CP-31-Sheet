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
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    vector<int> b, c;
    sort(arr, arr+n);
    b.push_back(arr[0]);
    for (int i=1; i<n; i++) {
        bool flag = false;
        for (int j=0; j<b.size(); j++) {
            if (b[j] % arr[i] == 0) {
                flag = true;
                break;
            }
        }
        if (flag) {
            b.push_back(arr[i]);
        }
        else {
            c.push_back(arr[i]);
        }
    }
    if (b.size() == 0 or c.size() == 0) cout << -1 << endl;
    else {
        cout << b.size() << " " << c.size() << endl;
        for (int i=0; i<b.size(); i++) cout << b[i] << " ";
        cout << endl;
        for (int i=0; i<c.size(); i++) cout << c[i] << " ";
        cout << endl;
    }
}

void better_solve() {
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    vector<int> b, c;
    sort(arr, arr+n);

    if (arr[0] == arr[n-1]) cout << -1 << endl;
    else {
        int it=0;
        while(arr[it] == arr[0]) it++;
        cout << it << " " << n-it << endl;

        for (int i=0; i<it; i++) cout << arr[i] << " ";
            cout << endl;
        for (int i=it; i<n; i++) cout << arr[i] << " ";
            cout << endl;
    }
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