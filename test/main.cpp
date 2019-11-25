
#include <gtest/gtest.h>

/**
 * @brief      main function
 * @param      argc int
 * @param      argv  char
 * @return     int
 */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
