/*����
����6��������������6�������������ٴ���һ��������һ��ż����

����6������������������Ϊa����С��ż��Ϊb�����|a-b|��ֵ

����
����Ϊһ�У�6��������,��6����������С��100

���뱣֤��6���������ٴ���һ��������һ��ż��

���
���Ϊһ�У����������������С��ż��֮��ľ���ֵ*/

#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	int oddmax = 0;
	int evenmin = 100;
	int result = 0;
	for (int i = 0; i < 6; i++) {
		cin >> x;
		if (x % 2 == 0) {
			if (x < evenmin) evenmin = x;
		}
		else {
			if (x > oddmax) oddmax = x;
		}
	}
	result = oddmax - evenmin;
	if (result < 0) result = -result;
	cout << result << endl;
	return 0;
}
