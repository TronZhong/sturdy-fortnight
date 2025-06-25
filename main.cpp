#include <iostream>

#include <iostream>

using namespace std;

int main() {
    // 读取输入
    int remainder[9];
    for (int j = 0; j < 9; j++) {
        cin >> remainder[j];
    }

    int n = remainder[8]; // 最小可能值是 n ≡ i (mod 2)
    
    while (true) {
        bool found = true;
        for (int j = 8; j >= 0; j--) { // 检查所有条件
            if (n % (j + 2) != remainder[j]) {
                found = false;
                break;
            }
        }
        if (found) { // 找到符合所有条件的 n
            cout << n << endl;
            break;
        }
        n += 2; // 由于 n ≡ i (mod 2)，n 只能每次加 2
    }

    return 0;
}