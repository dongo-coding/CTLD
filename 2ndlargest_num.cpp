#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {  //condition to find 2nd-largest number
            max2 = a[i];
        }
    }

    if (max2 == INT_MIN) {
        cout << "NOT FOUND";
    } else {
        cout << max2 << endl;
    }

    return 0;
}
