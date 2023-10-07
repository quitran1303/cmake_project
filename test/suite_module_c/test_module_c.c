#include <unity.h>

#include <module_c.h>

void setUp(void){
    //set up necessary things
}

void tearDown(void){
    //Clean up things
}

void test_AverageFiveBytes_should_AverageMidRangeValues_suite3(void)
{
    TEST_ASSERT_EQUAL_HEX8(40, AverageFiveBytes(30, 40, 50, 40, 40));
    TEST_ASSERT_EQUAL_HEX8(40, AverageFiveBytes(10, 70, 40, 40, 40));
    TEST_ASSERT_EQUAL_HEX8(33, AverageFiveBytes(33, 33, 33, 33, 33));
}

void test_AverageFiveBytes_should_AverageHighValues_suite3(void)
{
    TEST_ASSERT_EQUAL_HEX8(80, AverageFiveBytes(70, 80, 90, 80, 80));
    TEST_ASSERT_EQUAL_HEX8(127, AverageFiveBytes(127, 127, 127, 127, 127));
    TEST_ASSERT_EQUAL_HEX8(84, AverageFiveBytes(0, 126, 126, 84, 84));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_AverageFiveBytes_should_AverageMidRangeValues_suite3);
    RUN_TEST(test_AverageFiveBytes_should_AverageHighValues_suite3);

    return UNITY_END();
}
