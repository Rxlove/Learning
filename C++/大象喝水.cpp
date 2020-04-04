/*描述
一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

输入
输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。

输出
输出一行，包含一个整数，表示大象至少要喝水的桶数。*/

#include <iostream>
using namespace std;
int main() {
    int h, r, n, sum;
    double total, pi;
    pi = 3.14159;
    sum = 20000;
    cin >> h >> r;
    total = pi * r * r * h;
    n = sum / total;
    if (n < sum / total)
    {
        cout << n + 1 << endl;
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}
