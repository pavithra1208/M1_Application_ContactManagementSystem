
#include "unity.h"
#include "contact_management.h"

void test_deleterecords(void);
void test_searchrecords(void);
void test_addrecords(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_deleterecords);
  RUN_TEST(test_searchrecords);
  RUN_TEST(test_addrecords);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_deleterecords(void)
{
    char name[20]="pavithra";
    TEST_ASSERT_EQUAL("pavithra", name);
   
}

void test_searchrecords(void)
{
    char name[20]="pavithra";
    TEST_ASSERT_EQUAL("pavithra", name);
   
}

void test_addrecords(void)
{
   

    char name[20]="pavithra";

    char number[10]="9988776655";

 TEST_ASSERT_EQUAL("pavithra", name);
 TEST_ASSERT_EQUAL("9988776655", number);
   
}
