/*
 * test_main.cpp
 *
 *  Created on: 13-Jul-2019
 *      Author: Mani Kumar
 */

#include "test_precomp.h"

int main(int argc, char** argv) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  //::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
