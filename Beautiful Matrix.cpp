#include <iostream>
using namespace std;

int main() {
    int x, y; // coordinates of the 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int a;
            cin >> a;
            if (a == 1) {
                x = i;
                y = j;
            }
        }
    }
    int ans = abs(x - 2) + abs(y - 2);
    cout << ans << endl;
    return 0;
}
