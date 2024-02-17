#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);


        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }


        vector<pair<int, int>> combined;
        for (int i = 0; i < n; ++i) {
            combined.push_back({a[i], b[i]});
        }

        sort(combined.begin(), combined.end());

    
        for (int i = 0; i < n; ++i) {
            a[i] = combined[i].first;
            b[i] = combined[i].second;
        }

  
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
