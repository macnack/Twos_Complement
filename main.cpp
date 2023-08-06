#include <iostream>
#include <cstdint>
#include <catch2/catch_test_macros.hpp>

int fromTwosComplement(uint8_t value) {
    // Check the sign bit (the most significant bit, 8th bit)
    if (value & 0x80) {
        // If the sign bit is set, it's a negative value.
        // Convert from two's complement to signed integer.
        return static_cast<int>(static_cast<int8_t>(value));
    } else {
        // If the sign bit is not set, it's a non-negative value.
        // The value is the same for signed and unsigned representation.
        return static_cast<int>(value);
    }
}

TEST_CASE( "uint to Two's Complement" ) {
    REQUIRE( fromTwosComplement(127) == 127 );
    REQUIRE( fromTwosComplement(129) == -127 );
    REQUIRE( fromTwosComplement(1) == 1 );
    REQUIRE( fromTwosComplement(255) == -1 );
    REQUIRE( fromTwosComplement(0) == 0 );
}
