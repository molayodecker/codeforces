// #include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
    int weight;
    scanf("%d", &weight);
    if (weight == 2) {
        cout << "NO" << "\n";
    } else if ((weight%2) == 0 ) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}