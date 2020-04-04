//将一个数组中的值按逆序重新存放。例如，原来的顺序为8, 6, 5, 4, 1。要求改为1, 4, 5, 6, 8。
//输入为两行：第一行数组中元素的个数n（1 < n < 100)，第二行是n个整数，每两个整数之间用空格分隔。
//输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。

#include <iostream>
using namespace std;
int a[100];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (n--) { //常用的倒序计数循环，等价于while(n-->0)
        cout << a[n];
        if (n > 0) cout << " "; //如果不是最后一个数那么就要用空格分隔开
    }
    return 0;
}
//顺序输入倒序输出，但是如果我们要求通过修改数组本身实现逆序重放应该怎么做呢？