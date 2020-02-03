#include "unity_fixture.h"
#include "GildedRose.h"

TEST_GROUP(Rose);

TEST_SETUP(Rose) {}

TEST_TEAR_DOWN(Rose) {}

TEST(Rose, InitItem_ReturnsValidItem)
{
    Item i;
    Item *actual;

    actual = init_item(&i, "Test Item", 3, 4);

    TEST_ASSERT_NOT_NULL(actual);
    TEST_ASSERT_EQUAL_STRING("Test Item", actual->name);
    TEST_ASSERT_EQUAL_INT(3, actual->sellIn);
    TEST_ASSERT_EQUAL_INT(4, actual->quality);
}

TEST_GROUP_RUNNER(Rose)
{
    RUN_TEST_CASE(Rose, InitItem_ReturnsValidItem);
}
