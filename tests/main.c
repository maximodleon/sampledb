#include "munit.h"
#include <stdlib.h>

static MunitResult;

test_dbheader(const MunitParameter params[], void* data) {
}

static MunitTest tests[] = {
  {
    (char *) "/db/header",
    test_dbheader,
    NULL,
    NULL,
    MUNIT_TEST_OPTION_NONE,
    NULL
  }
};

static const MunitSuite test_suite = {
  (char*) "",
  tests,
  NULL,
  MUNIT_SUITE_OPTION_NONE
};

int main(int argc, char* argv[MUNIT_ARRAY_PARAM(argc + 1)]) {
  return munit_suite_main(&test_suite, (void*) "unit", argc, argv);
}
