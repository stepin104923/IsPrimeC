#include "unity.h"
#include "is_prime.h"

/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

void test_is_prime(void)
{
	TEST_ASSERT_EQUAL(false, is_prime(  2u));
	TEST_ASSERT_EQUAL( true, is_prime(  5u));
	TEST_ASSERT_EQUAL( true, is_prime( 89u));
	TEST_ASSERT_EQUAL(false, is_prime(221u));
	TEST_ASSERT_EQUAL( true, is_prime(257u));
	TEST_ASSERT_EQUAL( true, is_prime(433u));
	TEST_ASSERT_EQUAL( true, is_prime(613u));
	TEST_ASSERT_EQUAL(false, is_prime(667u));
	TEST_ASSERT_EQUAL( true, is_prime(809u));
}

void test_zero_one(void)
{
	TEST_ASSERT_EQUAL(false, is_prime(0u));
	TEST_ASSERT_EQUAL(false, is_prime(1u));
}

void test_large(void)
{
	TEST_ASSERT_EQUAL(false, is_prime(8343u));
	TEST_ASSERT_EQUAL( true, is_prime(8443u));
	TEST_ASSERT_EQUAL(false, is_prime(6443u));
	TEST_ASSERT_EQUAL( true, is_prime(9161u));
	TEST_ASSERT_EQUAL(false, is_prime(9171u));
	TEST_ASSERT_EQUAL( true, is_prime(9181u));
}

void test_very_large(void)
{
	TEST_ASSERT_EQUAL( true, is_prime(2147483647u));
	TEST_ASSERT_EQUAL(false, is_prime(1914582657u));
}

void test_super_large(void)
{
	TEST_ASSERT_EQUAL( true, is_prime(10911097110311091151u));
	TEST_ASSERT_EQUAL( true, is_prime(11111111111111111011u));
	TEST_ASSERT_EQUAL(false, is_prime(11111111111110011011u));
}

int test_main(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_is_prime);
	RUN_TEST(test_zero_one);
	RUN_TEST(test_large);
	RUN_TEST(test_very_large);
	// Takes very long. Uncomment if you have a powerful enough machine
	// RUN_TEST(test_super_large);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
