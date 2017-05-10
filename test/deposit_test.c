#include <deposit.h>
#include <ctest.h>

CTEST(arithmetic_suite, calc)
{
    const double a = 80000;
    const unsigned int b = 200;
    
    const double result = calcularing(a, b);
    
    const double expected = 84800;
    ASSERT_DBL_NEAR(expected, result);
}