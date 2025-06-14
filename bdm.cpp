#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i += 2) {
        int left = (i - 1 >= 0) ? a[i - 1] : 0;
        int right = (i + 1 < n) ? a[i + 1] : 0;
        a[i] += abs(right - left);               //transforming the 1D-array
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}