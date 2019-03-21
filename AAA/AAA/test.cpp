#ifdef TEST

#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string("один"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string("два"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string("три"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string("четыре"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string("пять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string("шесть"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string("семь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string("восемь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string("девять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string("десять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string("одиннадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string("двенадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string("тринадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string("четырнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string("пятьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string("шестьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string("семьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string("восемьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string("девятьнадцать"));
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
	BOOST_TEST_CHECK(number_less_100_to_string(16) == string("шестьнадцать"));
	BOOST_TEST_CHECK(number_less_100_to_string(58) == string("пятьдесять восемь"));
	BOOST_TEST_CHECK(number_less_100_to_string(20) == string("двадцать"));
	BOOST_TEST_CHECK(number_less_100_to_string(30) == string("тридцать"));
	BOOST_TEST_CHECK(number_less_100_to_string(40) == string("сорок"));
	BOOST_TEST_CHECK(number_less_100_to_string(50) == string("пятьдесять"));
	BOOST_TEST_CHECK(number_less_100_to_string(60) == string("шестьдесять"));
	BOOST_TEST_CHECK(number_less_100_to_string(70) == string("семьдесять"));
	BOOST_TEST_CHECK(number_less_100_to_string(80) == string("восемьдесять"));
	BOOST_TEST_CHECK(number_less_100_to_string(90) == string("девяносто"));
}

BOOST_AUTO_TEST_CASE( test_case3 )
{
	BOOST_TEST_CHECK(number_less_1000_to_string(70) == string("семьдесять"));
	BOOST_TEST_CHECK(number_less_1000_to_string(113) == string("сто тринадцать"));
	BOOST_TEST_CHECK(number_less_1000_to_string(100) == string("сто"));
	BOOST_TEST_CHECK(number_less_1000_to_string(200) == string("двести"));
	BOOST_TEST_CHECK(number_less_1000_to_string(300) == string("триста"));
	BOOST_TEST_CHECK(number_less_1000_to_string(400) == string("четыреста"));
	BOOST_TEST_CHECK(number_less_1000_to_string(500) == string("пятьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(600) == string("шестьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(700) == string("семьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(800) == string("восемьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(900) == string("девятьсот"));
}
BOOST_AUTO_TEST_CASE( test_case4 )
{
	BOOST_TEST_CHECK(objects_less_100_to_string(1, "шар", "шара", "шаров") == string("один шар"));
	BOOST_TEST_CHECK(objects_less_100_to_string(1, "предмет", "предмета", "предметов") == string("один предмет"));
	BOOST_TEST_CHECK(objects_less_100_to_string(3, "предмет", "предмета", "предметов") == string("три предмета"));
	BOOST_TEST_CHECK(objects_less_100_to_string(6, "предмет", "предмета", "предметов") == string("шесть предметов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(11, "предмет", "предмета", "предметов") == string("одиннадцать предметов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(13, "предмет", "предмета", "предметов") == string("тринадцать предметов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(17, "предмет", "предмета", "предметов") == string("семьнадцать предметов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(21, "предмет", "предмета", "предметов") == string("двадцать один предмет"));
	BOOST_TEST_CHECK(objects_less_100_to_string(22, "предмет", "предмета", "предметов") == string("двадцать два предмета"));
	BOOST_TEST_CHECK(objects_less_100_to_string(30, "предмет", "предмета", "предметов") == string("тридцать предметов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(38, "предмет", "предмета", "предметов") == string("тридцать восемь предметов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(264, "предмет", "предмета", "предметов") == string("двести шестьдесять четыре предмета"));
}
BOOST_AUTO_TEST_CASE( test_case5 )
{
	BOOST_TEST_CHECK(currency_to_string(25, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек") == string("двадцать пять рублей, семьдесять три копейки"));
	BOOST_TEST_CHECK(currency_to_string(11, "рубль", "рубля", "рублей", 65, "копейка", "копейки", "копеек") == string("одиннадцать рублей, шестьдесять пять копеек"));
	BOOST_TEST_CHECK(currency_to_string(53, "рубль", "рубля", "рублей", 21, "копейка", "копейки", "копеек") == string("пятьдесять три рубля, двадцать один копейка"));

}
#endif