#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total_cost = k * w * (w + 1) / 2;

    int borrow_amount = total_cost - n;

    if (borrow_amount > 0) {
        cout << borrow_amount << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
