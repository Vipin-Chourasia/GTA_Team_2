#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "SourceCode/Calculator.h"

int maxi(int i1, int i2)
{
    return (i1 > i2) ? i1 : i2;
}

void test_maxi(void)
{
    CU_ASSERT(maxi(0,2) == 2);
}

void test_add(void)
{
    CU_ASSERT(add(1,2) == 3);
}

void test_subtract(void)
{
    CU_ASSERT(subtract(1,2) == -1);
}
int main() {
    CU_initialize_registry();
    CU_pSuite suite_maxi = CU_add_suite("maxi_test", 0, 0);
    CU_pSuite suite_add = CU_add_suite("add_test", 0, 0);
    CU_pSuite suite_subtract = CU_add_suite("subtract_test", 0, 0);

    CU_add_test(suite_maxi, "maxi_fun", test_maxi);
    CU_add_test(suite_add, "add_fun", test_add);
    CU_add_test(suite_subtract, "subtract_fun", test_subtract);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
