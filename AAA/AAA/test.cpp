#ifdef TEST

#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string("�����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string("������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string("������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string("�������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string("�������������"));
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
	BOOST_TEST_CHECK(number_less_100_to_string(20) == string("��������"));
	BOOST_TEST_CHECK(number_less_100_to_string(30) == string("��������"));
	BOOST_TEST_CHECK(number_less_100_to_string(40) == string("�����"));
	BOOST_TEST_CHECK(number_less_100_to_string(50) == string("����������"));
	BOOST_TEST_CHECK(number_less_100_to_string(60) == string("�����������"));
	BOOST_TEST_CHECK(number_less_100_to_string(70) == string("����������"));
	BOOST_TEST_CHECK(number_less_100_to_string(80) == string("������������"));
	BOOST_TEST_CHECK(number_less_100_to_string(90) == string("���������"));
}

BOOST_AUTO_TEST_CASE( test_case3 )
{
	BOOST_TEST_CHECK(number_less_1000_to_string(100) == string("���"));
	BOOST_TEST_CHECK(number_less_1000_to_string(200) == string("������"));
	BOOST_TEST_CHECK(number_less_1000_to_string(300) == string("������"));
	BOOST_TEST_CHECK(number_less_1000_to_string(400) == string("���������"));
	BOOST_TEST_CHECK(number_less_1000_to_string(500) == string("�������"));
	BOOST_TEST_CHECK(number_less_1000_to_string(600) == string("��������"));
	BOOST_TEST_CHECK(number_less_1000_to_string(700) == string("�������"));
	BOOST_TEST_CHECK(number_less_1000_to_string(800) == string("���������"));
	BOOST_TEST_CHECK(number_less_1000_to_string(900) == string("���������"));
	BOOST_TEST_CHECK(number_less_1000_to_string(137) == string("��� �������� ����"));
}
#endif