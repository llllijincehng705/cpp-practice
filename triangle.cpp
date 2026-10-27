#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "请输入三角形的三条边长：";
    cin >> a >> b >> c;

    // 判断能否构成三角形：任意两边之和大于第三边
    if (a + b > c && a + c > b && b + c > a) {
        cout << "可以构成三角形" << endl;
        if (a == b && b == c) {
            cout << "等边三角形" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "等腰三角形" << endl;
        } else {
            cout << "普通三角形" << endl;
        }
    } else {
        cout << "不能构成三角形" << endl;
    }
    return 0;
}
