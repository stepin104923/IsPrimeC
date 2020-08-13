#include "unity.h"
#include "is_prime.h"

/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

void test_is_prime(void)
{
	TEST_ASSERT_EQUAL(false, is_prime(2));
	TEST_ASSERT_EQUAL(true, is_prime(5));
	TEST_ASSERT_EQUAL(true, is_prime(89));
	TEST_ASSERT_EQUAL(false, is_prime(221));
	TEST_ASSERT_EQUAL(true, is_prime(257));
	TEST_ASSERT_EQUAL(true, is_prime(433));
	TEST_ASSERT_EQUAL(true, is_prime(613));
	TEST_ASSERT_EQUAL(false, is_prime(667));
	TEST_ASSERT_EQUAL(true, is_prime(809));
}

void test_zero_one(void)
{
	TEST_ASSERT_EQUAL(false, is_prime(0));
	TEST_ASSERT_EQUAL(false, is_prime(1));
}

void test_large(void)
{
	TEST_ASSERT_EQUAL(false, is_prime(8343));
	TEST_ASSERT_EQUAL(true, is_prime(8443));
	TEST_ASSERT_EQUAL(false, is_prime(6443));
	TEST_ASSERT_EQUAL(true, is_prime(9161));
	TEST_ASSERT_EQUAL(false, is_prime(9171));
	TEST_ASSERT_EQUAL(true, is_prime(9181));
}

void test_very_large(void)
{
	TEST_ASSERT_EQUAL(true, is_prime(2147483647));
	TEST_ASSERT_EQUAL(false, is_prime(1914582657));
}

void test_super_large(void)
{
	TEST_ASSERT_EQUAL(true, is_prime(10911097110311091151));
	TEST_ASSERT_EQUAL(true, is_prime(11111111111111111011));
	TEST_ASSERT_EQUAL(false, is_prime(11111111111110011011));
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
