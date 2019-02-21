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
	BOOST_TEST_CHECK(numbers_lt_20_to_string(21) == string("двадцать один"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(32) == string("тридцать два"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(43) == string("сорок три"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(54) == string("пятьдесять четыре"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(65) == string("шестьдесять пять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(76) == string("семьдесять шесть"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(87) == string("восемьдесять семь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(98) == string("девяносто восемь"));

}

#endif