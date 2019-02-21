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
	BOOST_TEST_CHECK(numbers_lt_20_to_string(21) == string("�������� ����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(32) == string("�������� ���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(43) == string("����� ���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(54) == string("���������� ������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(65) == string("����������� ����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(76) == string("���������� �����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(87) == string("������������ ����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(98) == string("��������� ������"));

}

#endif