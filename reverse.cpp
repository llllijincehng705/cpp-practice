#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "请输入一个整数：";
    cin >> n;

    int reversed = 0;
    int num = n < 0 ? -n : n;  // 先按正数处理
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    if (n < 0) reversed = -reversed;

    cout << "反转结果：" << reversed << endl;
    return 0;
}
