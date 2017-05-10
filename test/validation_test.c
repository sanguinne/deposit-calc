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
CTEST(correct_data, data1)
{
    const double a = 20000;
    const unsigned int b = 400;
    
    const int result = correct_data(a, b);
    
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
CTEST(correct_data, data2)
{
    const double a = 1000;
    const unsigned int b = 200;
    
    const int result = correct_data(a, b);
    
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
CTEST(correct_data, data3)
{
    const double a = 10000;
    const unsigned int b = 200;
    
    const int result = correct_data(a, b);
    
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}