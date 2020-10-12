
#include "foo.h"
#include "unity.h"

#define SIZEARRAY 6

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo1(void)
{
  /* All of these should pass */
  TEST_ASSERT_EQUAL(-2, foo(1,2));
  TEST_ASSERT_EQUAL(-1, foo(2,2));
}

void test_foo2(void)
{
  TEST_ASSERT_EQUAL(2, foo(5,2)); // vai dar erro !!!!
}

void test_sort1(void)
{
  int list[] = {1,4,3,6,9,7};
  int expectedList[] = {1,3,4,6,7,9};

  sort(list, SIZEARRAY, sizeof(int));

  for(int i=0;i<SIZEARRAY;i++)
  {
    TEST_ASSERT_EQUAL(expectedList[i],list[i]);
  }
}
/// Values duplicated
void test_sort_duplicatedValues(void)
{
  int list[] = {1,4,1,6,9,7};
  int expectedList[] = {1,1,4,6,7,9};

  // printf ("Unsorted: ");
  // for(int i=0;i<SIZEARRAY;i++)
  // {
  //   printf("%i ", list[i]);
  // }
  // printf("\n");

  sort(list, SIZEARRAY, sizeof(int));

  // printf ("Sorted: ");
  // for(int i=0;i<SIZEARRAY;i++)
  // {
  //   printf("%i ", list[i]);
  // }
  // printf("\n");

  for(int i=0;i<SIZEARRAY;i++)
  {
    TEST_ASSERT_EQUAL(expectedList[i],list[i]);
  }
}

void test_sort_negativeValues(void)
{
  int list[] = {1,4,-3,6,9,7};
  int expectedList[] = {-3,1,4,6,7,9};

  sort(list, SIZEARRAY, sizeof(int));

  for(int i=0;i<SIZEARRAY;i++)
  {
    TEST_ASSERT_EQUAL(expectedList[i],list[i]);
  }
}

void test_sort_OneValue(void)
{
  int list[] = {1};
  int expectedList[] = {1};

  sort(list, 1, sizeof(int));

  for(int i=0;i<1;i++)
  {
    TEST_ASSERT_EQUAL(expectedList[i],list[i]);
  }
}

void test_sort_OneValueDifferent(void)
{
  int list[] = {9,9,9,9,1,9};
  int expectedList[] = {1,9,9,9,9,9};

  sort(list, SIZEARRAY, sizeof(int));

  for(int i=0;i<SIZEARRAY;i++)
  {
    TEST_ASSERT_EQUAL(expectedList[i],list[i]);
  }
}

void test_sort_OnlyNegativeValues(void)
{
  int list[] = {-9,-5,-7,-69,-14,-79};
  int expectedList[] = {-79,-69,-14,-9,-7,-5};

  sort(list, SIZEARRAY, sizeof(int));

  for(int i=0;i<SIZEARRAY;i++)
  {
    TEST_ASSERT_EQUAL(expectedList[i],list[i]);
  }
}

void test_sort_BigArray(void)
{
  int list[] = {40,3,2,4,5,6,7,8,9,10,11,12,23,34,15,16,27,18,19,20,21,22,13,24,25,26,17,28,39,30,31,32,33,14,35,36,37,38,29,1};
  int expectedList[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};

  sort(list, 40, sizeof(int));

  for(int i=0;i<40;i++)
  {
    TEST_ASSERT_EQUAL(expectedList[i],list[i]);
  }
}

void test_sort_With0Values(void)
{
  int list[] = {1,4,-3,6,0,7};
  int expectedList[] = {-3,0,1,4,6,7};

  sort(list, SIZEARRAY, sizeof(int));

  for(int i=0;i<SIZEARRAY;i++)
  {
    TEST_ASSERT_EQUAL(expectedList[i],list[i]);
  }
}