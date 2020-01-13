#include "gtest/gtest.h"
#include "Vector2D.h"

TEST(Vector2DTestSuite, constructorTest01) {
    Vector2D v1(1, 1);
    
    std::string expectedResult = "(1, 1)";
    std::string result = v1.toString();
  EXPECT_EQ(expectedResult, result);
}
TEST(Vector2DTestSuite, equalTest01) {
    Vector2D v1(1, 1);
    Vector2D v2(1, 1);

    EXPECT_TRUE(v1 == v2);
}
TEST(Vector2DTestSuite, equalTest02) {
    Vector2D v1(1, 1);
    Vector2D v2(1, 1);

    EXPECT_FALSE(v1 != v2);
}
TEST(Vector2DTestSuite, equalTest03) {
    Vector2D v1(1, 1);
    Vector2D v2(1, 1);

    EXPECT_FALSE(v1 != v2);
}
TEST(Vector2DTestSuite, GreaterThanTest01) {
    Vector2D v1(1, 1);
    Vector2D v2(2, 2);

    EXPECT_FALSE(v1 > v2);
}
TEST(Vector2DTestSuite, GreaterThanTest02) {
    Vector2D v1(2, 2);
    Vector2D v2(1, 1);

    EXPECT_FALSE(v1 < v2);
}
TEST(Vector2DTestSuite, LessThanTest01) {
    Vector2D v1(1, 1);
    Vector2D v2(2, 2);

    EXPECT_FALSE(v1 > v2);
}
TEST(Vector2DTestSuite, LessThanTest02) {
    Vector2D v1(1, 1);
    Vector2D v2(2, 2);

    EXPECT_FALSE(v1 < v2);
}
TEST(Vector2DTestSuite, EqualLessThanTest01) {
    Vector2D v1(2, 2);
    Vector2D v2(1, 1);

    EXPECT_TRUE(v1 <= v2);
}
TEST(Vector2DTestSuite, EqualLessThanTest02) {
    Vector2D v1(1, 1);
    Vector2D v2(2, 2);

    EXPECT_TRUE(v1 <= v2);
}
TEST(Vector2DTestSuite, EqualGreaterThanTest01) {
    Vector2D v1(2, 2);
    Vector2D v2(1, 1);

    EXPECT_TRUE(v1 >= v2);
}
TEST(Vector2DTestSuite, EqualGreaterThanTest02) {
    Vector2D v1(1, 1);
    Vector2D v2(2, 2);

    EXPECT_TRUE(v1 >= v2);
}
TEST(Vector2DTestSuite, arithmaticOperatorTest03) {
    Vector2D v1(3, 4);

    Vector2D expectedResult(3, 4);
    Vector2D v2 = ++v1;

    ASSERT_EQ(v1, expectedResult);
    ASSERT_EQ(v2, Vector2D(2, 3));

}


