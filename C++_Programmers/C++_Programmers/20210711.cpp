/*
< ¦���� Ȧ�� >

-- ���� ����
���� num�� ¦���� ��� "Even"�� ��ȯ�ϰ� Ȧ���� ��� "Odd"�� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.


-- ���� ����
num�� int ������ �����Դϴ�.
0�� ¦���Դϴ�.

-- ����� ��
num	return
3	"Odd"
4	"Even"
*/
#include <string>
#include <vector>

using namespace std;

string solution(int num) {
	if (num & 1) return "Odd";
	else return "Even";
}