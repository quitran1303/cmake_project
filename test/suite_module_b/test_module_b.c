#include <unity.h>

#include <module_b.h>

void setUp(void){
    //set up necessary things
}

void tearDown(void){
    //Clean up things
}

void test_AverageFourBytes_should_AverageMidRangeValues_suite2(void)
{
    TEST_ASSERT_EQUAL_HEX8(40, AverageFourBytes(30, 40, 50, 40));
    TEST_ASSERT_EQUAL_HEX8(40, AverageFourBytes(10, 70, 40, 40));
    TEST_ASSERT_EQUAL_HEX8(33, AverageFourBytes(33, 33, 33, 33));
}

void test_AverageFourBytes_should_AverageHighValues_suite2(void)
{
    TEST_ASSERT_EQUAL_HEX8(80, AverageFourBytes(70, 80, 90, 80));
    TEST_ASSERT_EQUAL_HEX8(1270, AverageFourBytes(127, 127, 127, 127));
    TEST_ASSERT_EQUAL_HEX8(84, AverageFourBytes(0, 126, 126, 84));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_AverageFourBytes_should_AverageMidRangeValues_suite2);
    RUN_TEST(test_AverageFourBytes_should_AverageHighValues_suite2);

    return UNITY_END();
}
