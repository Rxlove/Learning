/*����
�Ӽ�������һ���������λ������Ҫ����ȷ�ط�������İ�λ��ʮλ�͸�λ�������ֱ�����Ļ��������������ÿ�����һ�����ķ�ʽ�������������š�

����
һ���������λ����

���
һ���������λ����*/

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
