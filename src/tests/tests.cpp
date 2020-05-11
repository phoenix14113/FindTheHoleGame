#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../scrMain/Board.h"
#include "../scrMain/Menu.h"
#include "../scrMain/PlayGame.h"

TEST_CASE("Test case for board", "[board]") {
    // Setup
    Board b;
    b.setDifficulty(5);
    b.BoardConstruct();

    SECTION("test the position function") {
        REQUIRE(b.checkUserPosition() == 12);
    }

    // Teardown
}

TEST_CASE("Test case for scoring", "[scoring]") {
    // Setup
    PlayGame p;
    p.field.tempScore = 5;

    SECTION("test the menu difficulty") {
        REQUIRE(p.field.tempScore == 5);
    }

    // Teardown
}

TEST_CASE("Test case for playgame", "[playgame]") {
    // Setup
    PlayGame p;
    p.difficulty = 5;

    SECTION("test the playgame difficulty") {
        REQUIRE(p.difficulty == 5);
    }

    // Teardown
}
