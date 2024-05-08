#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>

#include "address_book.hpp"

TEST_CASE("entries can be added and removed") {
	address_book ab;
	CHECK_FALSE(ab.has_entry("Jane Doe"));
	ab.add_entry("Jane Doe");
	CHECK(ab.has_entry("Jane Doe"));
	ab.remove_entry("Jane Doe");
	CHECK_FALSE(ab.has_entry("Jane Doe"));
}

TEST_CASE("check entries length") {
	address_book ab;
    CHECK_THROWS(ab.add_entry("123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890q"));
}

TEST_CASE("check first capital letter is read out of list") {
	address_book ab;
	ab.add_entry("jane m doe");
	CHECK(ab.has_entry("Jane M Doe"));
}

TEST_CASE("check first capital letter is read out of list") {
	address_book ab;
	ab.add_entry("jane m doe");
	CHECK(ab.has_entry("Jane M Doe"));
}
