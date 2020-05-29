
#include <iostream>
#include <math.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--) {
        ll a, b;
        cin >> a >> b;

        ll min_v = min(a ,b);
        ll max_v = max(a, b);
        ll res = max(min_v * 2, max_v);
        cout << res * res << "\n";
    }
    return 0;
}