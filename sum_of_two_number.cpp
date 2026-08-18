#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    map<int, int> mpp;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        // Current number x hai, toh hume target - x chahiye
        int needed = target - x;

        // Check karo kya needed number pehle mil chuka hai
        if (mpp.find(needed) != mpp.end()) {
            cout << mpp[needed] << " " << i << endl;
            return 0;
        }

        // Nahi mila, toh current number ko future ke liye store kar lo
        mpp[x] = i;
    }

    // Puri array check karne ke baad bhi pair nahi mila
    cout << "IMPOSSIBLE" << endl;

    return 0;
}