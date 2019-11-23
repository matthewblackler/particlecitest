#include "MyLibrary.h"
#include "UnitTest++.h"

SUITE(Addition)
{
  TEST(AddOnePlusOne)
  {
    CHECK_EQUAL(2, add_two_numbers(1, 1));
  }
  TEST(AddTwoPlusTwo)
  {
    CHECK_EQUAL(4, add_two_numbers(2, 2));
  }
}
