/*����
һֻ����ڿ��ˣ�Ҫ��20��ˮ���ܽ�ʣ�������ֻ��һ����h���ף�����뾶Ϊr���׵�СԲͰ(h��r��������)���ʴ�������Ҫ�ȶ���Ͱˮ�Ż��ʡ�

����
������һ�У�����������������һ���ո�ֿ����ֱ��ʾСԲͰ����h�͵���뾶r����λ�������ס�

���
���һ�У�����һ����������ʾ��������Ҫ��ˮ��Ͱ����*/

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
