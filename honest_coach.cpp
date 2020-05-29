/**
 * https://codeforces.com/problemset/problem/1360/B
 * B. Honest Coach
 * */
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll t;
  cin >> t; // number of input

  while (t--) { // while the number of inputs keeps decreasing

    ll n; // length of array "strength"
    cin >> n;

    ll arr[n + 1];
    for (ll i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int start = 0;
    ll len_of_arr = sizeof(arr) / sizeof *(arr);

    sort(arr, arr + n);

    // while (start < len_of_arr) {
    //     cout << arr[start++] << "\n";
    // }

    ll min_diff = INT_MAX; // We want the must minimum value -> this would be float(inf) in python
    for (ll j = 0; j < n; j++) {
      if (min_diff > (arr[j + 1] - arr[j])) { // if the max value is bigger than value at pos (x + 1) - (x)
        min_diff = arr[j + 1] - arr[j];
      }
    }

    cout << min_diff << "\n";
  }
  return 0;
}
