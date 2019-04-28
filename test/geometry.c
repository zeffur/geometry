#include "../src/geometry.h"
#include "../thirdparty/ctest.h"

CTEST(circle, S_Circle)
{
    // Given
    double S = 0.0;
    Figure circle = {CIRCLE, {0, 0, 12}, 3};

    // When
    S_Circle(&S, &circle);

    // Then
    const double exp = 452.389324;
    ASSERT_DBL_NEAR(S, exp);
}

CTEST(circle, S_Circle1)
{
    // Given
    double S = 0.0;
    Figure circle = {CIRCLE, {0, 0, 12}, 3};

    // When
    S_Circle(NULL, &circle);

    // Then
    const double exp = 0.0;
    ASSERT_DBL_NEAR(S, exp);
}

CTEST(circle, S_Circle2)
{
    // Given
    double S = 0.0;
    Figure circle = {CIRCLE, {0, 0, 12}, 3};

    // When
    S_Circle(NULL, NULL);

    // Then
    const double exp = 0.0;
    ASSERT_DBL_NEAR(S, exp);
}

CTEST(circle, S_Circle3)
{
    // Given
    double S = 0.0;
    Figure circle = {CIRCLE, {0, 0}, 3};

    // When
    S_Circle(&S, &circle);

    // Then
    const double exp = 0.0;
    ASSERT_DBL_NEAR(S, exp);
}
/*----------------------------------------------------------------------------*/
CTEST(circle, P_Circle)
{
    // Given
    double P = 0.0;
    Figure circle = {CIRCLE, {0, 0, 12}, 3};

    // When
    P_Circle(&P, &circle);

    // Then
    const double exp = 75.398224;
    ASSERT_DBL_NEAR(P, exp);
}

CTEST(circle, P_Circle1)
{
    // Given
    double P = 0.0;
    Figure circle = {CIRCLE, {0, 0, 12}, 3};

    // When
    P_Circle(NULL, &circle);

    // Then
    const double exp = 0.0;
    ASSERT_DBL_NEAR(P, exp);
}

CTEST(circle, P_Circle2)
{
    // Given
    double P = 0.0;
    Figure circle = {CIRCLE, {0, 0, 12}, 0};

    // When
    P_Circle(&P, &circle);

    // Then
    const double exp = 0.0;
    ASSERT_DBL_NEAR(P, exp);
}
