/*描述
从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。

输入
一个任意的三位整数

输出
一个任意的三位整数*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int num, h, t, o;
    cin >> num;
    o = num % 10;
    t = (num % 100 - o) / 10;
    h = (num - o - 10 * t) / 100;
    cout << h << endl << t << endl << o << endl;
    return 0;
}
