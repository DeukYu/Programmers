/*
< ���ڿ� �� p�� y�� ���� >

-- ���� ����
�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�. 
s�� 'p'�� ������ 'y'�� ������ ���� ������ True, 
�ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 
'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�. 
��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.

���� ��� s�� "pPoooyY"�� true�� return�ϰ� "Pyy"��� false�� return�մϴ�.

-- ���ѻ���
���ڿ� s�� ���� : 50 ������ �ڿ���
���ڿ� s�� ���ĺ����θ� �̷���� �ֽ��ϴ�.

-- ����� ��
s			answer
"pPoooyY"	true
"Pyy"		false

-- ����� �� ����
����� �� #1
'p'�� ���� 2��, 'y'�� ���� 2���� �����Ƿ� true�� return �մϴ�.

����� �� #2
'p'�� ���� 1��, 'y'�� ���� 2���� �ٸ��Ƿ� false�� return �մϴ�.
*/
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	int count = 0;
	for (char c : s)
	{
		if (c == 'p' || c == 'P')
			++count;
		else if (c == 'y' || c == 'Y')
			--count;
	}
	return (count == 0) ? true : false;
}