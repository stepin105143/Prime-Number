#include "unity.h"
#include "prime_number.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_prime_number_double_digit(void)
{
TEST_ASSERT_EQUAL(1, prime_number(11));
TEST_ASSERT_EQUAL(1, prime_number(17));
TEST_ASSERT_EQUAL(1, prime_number(31));
}

void test_prime_number_single_digit(void)
{
TEST_ASSERT_EQUAL(1, prime_number(7));
TEST_ASSERT_EQUAL(0, prime_number(6));
TEST_ASSERT_EQUAL(1, prime_number(1));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_prime_number_double_digit);
RUN_TEST(test_prime_number_single_digit);
return UNITY_END();
}
