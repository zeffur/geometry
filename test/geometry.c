#include <sum.h>

#include <ctest.h>

CTEST(geometry, S_Circle)
{
    // Given
    const int S = 0;
    Figure circle = {CIRCLE, {0 0 12}, 3};

    // When
    S_Circle(&S, circle);

    // Then
    const int exp = 452.389;
    ASSERT_DBL_NEAR(S, exp);
}
