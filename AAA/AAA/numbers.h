#include <string>
using namespace std;
string numbers_lt_20_to_string(int number)
{
	string answer;
	
	switch (number)
	{
	case 1: answer = "����"; break;
	case 2: answer = "���"; break;
	case 3: answer = "���"; break;
	case 4: answer = "������"; break;
	case 5: answer = "����"; break;
	case 6: answer = "�����"; break;
	case 7: answer = "����"; break;
	case 8: answer = "������"; break;
	case 9: answer = "������"; break;
	case 10: answer = "������"; break;
	case 11: answer = "�����������"; break;
	case 12: answer = "����������"; break;
	case 13: answer = "����������"; break;
	case 14: answer = "������������"; break;
	case 15: answer = "�����������"; break;
	case 16: answer = "������������"; break;
	case 17: answer = "�����������"; break;
	case 18: answer = "�������������"; break;
	case 19: answer = "�������������"; break;
	case 21: answer = "�������� ����"; break;
	case 32: answer = "�������� ���"; break;
	case 43: answer = "����� ���"; break;
	case 54: answer = "���������� ������"; break;
	case 65: answer = "����������� ����"; break;
	case 76: answer = "���������� �����"; break;
	case 87: answer = "������������ ����"; break;
	case 98: answer = "��������� ������"; break;
	
	default: break;
	}
	return answer;
}