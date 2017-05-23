#include <deposit.h>
#include <ctest.h>

CTEST(arithmetic_suite, calc)
{
    const double a = 80000;
    const unsigned int b = 200;
    
    const double result = calcularing(a, b);
    
    const double expected = 84800;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, calc1)
{
    const double a = 80000;
    const unsigned int b = 20;

    const double result = calcularing(a, b);

    const double expected = 72000;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, calc2)
{
    const double a = 80000;
    const unsigned int b = 200;

    const double result = calcularing(a, b);

    const double expected = 84800;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, calc3)
{
    const double a = 80000;
    const unsigned int b = 100;

    const double result = calcularing(a, b);

    const double expected = 81600;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, calc4)
{
    const double a = 80000;
    const unsigned int b = 300;

    const double result = calcularing(a, b);

    const double expected = 89600;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, calc5)
{
    const double a = 800000;
    const unsigned int b = 20;

    const double result = calcularing(a, b);

    const double expected = 720000;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, calc6)
{
    const double a = 800000;
    const unsigned int b = 100;

    const double result = calcularing(a, b);

    const double expected = 824000;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, calc7)
{
    const double a = 800000;
    const unsigned int b = 200;

    const double result = calcularing(a, b);

    const double expected = 864000;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, calc8)
{
    const double a = 800000;
    const unsigned int b = 300;

    const double result = calcularing(a, b);

    const double expected = 920000;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
