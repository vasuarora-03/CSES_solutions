#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> events;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        events.push_back({a, +1}); // arrival
        events.push_back({b, -1}); // departure
    }

    sort(events.begin(), events.end());

    int current = 0;
    int maxi = 0;

    for (auto event : events) {
        current += event.second;
        maxi = max(maxi, current);
    }

    cout << maxi << endl;

    return 0;
}