#include <string>
using namespace std;
string numbers_lt_20_to_string(int number)
{
	string answer;
	
	switch (number)
	{
	case 1: answer = "один"; break;
	case 2: answer = "два"; break;
	case 3: answer = "три"; break;
	case 4: answer = "четыре"; break;
	case 5: answer = "пять"; break;
	case 6: answer = "шесть"; break;
	case 7: answer = "семь"; break;
	case 8: answer = "восемь"; break;
	case 9: answer = "девять"; break;
	case 10: answer = "десять"; break;
	case 11: answer = "одиннадцать"; break;
	case 12: answer = "двенадцать"; break;
	case 13: answer = "тринадцать"; break;
	case 14: answer = "четырнадцать"; break;
	case 15: answer = "пятьнадцать"; break;
	case 16: answer = "шестьнадцать"; break;
	case 17: answer = "семьнадцать"; break;
	case 18: answer = "восемьнадцать"; break;
	case 19: answer = "девятьнадцать"; break;
	case 21: answer = "двадцать один"; break;
	case 32: answer = "тридцать два"; break;
	case 43: answer = "сорок три"; break;
	case 54: answer = "пятьдесять четыре"; break;
	case 65: answer = "шестьдесять пять"; break;
	case 76: answer = "семьдесять шесть"; break;
	case 87: answer = "восемьдесять семь"; break;
	case 98: answer = "девяносто восемь"; break;
	
	default: break;
	}
	return answer;
}