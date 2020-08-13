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
}

void test_zero_one(void)
{
	TEST_ASSERT_EQUAL(false, is_prime(0));
	TEST_ASSERT_EQUAL(false, is_prime(1));
}

int test_main(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_is_prime);
	RUN_TEST(test_zero_one);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
