
#include <catch2/catch_all.hpp>
#include <stdio.h>
#include <string.h>
#include <template/version.h>

TEST_CASE("get_version_string returns expected value") {
    CHECK(0 == strcmp("0.0.0", get_version_string()));
}
