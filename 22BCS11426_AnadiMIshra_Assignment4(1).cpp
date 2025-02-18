#include <bits/stdc++.h>
using namespace std;

vector<int> beautifulArray(int n) {
    vector<int> result = {1};
    while (result.size() < n) {
        vector<int> temp;
        for (int num : result) {
            if (2 * num - 1 <= n) temp.push_back(2 * num - 1);
        }
        for (int num : result) {
            if (2 * num <= n) temp.push_back(2 * num);
        }
        result = temp;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = beautifulArray(n);
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
