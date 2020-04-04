/*描述
输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。

设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值

输入
输入为一行，6个正整数,且6个正整数都小于100

输入保证这6个数中至少存在一个奇数和一个偶数

输出
输出为一行，输出最大的奇数与最小的偶数之差的绝对值*/

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
