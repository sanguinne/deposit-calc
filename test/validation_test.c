#include <deposit.h>
#include <ctest.h>

CTEST(correct_data, data)
{
    const double a = 1000;
    const unsigned int b = 400;

    const int result = correct_data(a, b);

    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}