#include <cppunit/TestCaller.h>
#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TestRunner.h>

#include "src/physics.h"

// ===== 7.0206 Introduction to cppunit ===== //

// class BasicTest : public CppUnit::TestCase {
//    public:
//     BasicTest(std::string name) : CppUnit::TestCase(name) {}
//     void runTest() override {
//         CPPUNIT_ASSERT(2 + 2 == 5);
//         CPPUNIT_ASSERT(2 + 2 == 3);
//     }
// };

// int main() {
//     BasicTest test{"BasicTest"};
//     test.runTest();
//     return 0;
// }

/* compile with:
 g++ main.cpp -lcppunit
 to include the library*/

// ===== 7.0208 Adding better output and multiple tests ===== //

class FixtureTests : public CppUnit::TestFixture {
   public:
    void setUp() override {
        printf("Setup is called\n");
    }

    void tearDown() override {
        printf("tearDown is called\n");
    }

    void testAddition() {
        CPPUNIT_ASSERT(2 + 1 == 3);
        CPPUNIT_ASSERT(2 + 2 == 4);
    }
    void testLogic() {
        CPPUNIT_ASSERT(true == true);
        CPPUNIT_ASSERT(false == false);
    }
    void testThingPosition() {
        Thing thing{5.0f, 10.0f, 1.0f};
        CPPUNIT_ASSERT(thing.getX() == 5.0f);
    }
    void testThingStartsStill() {
        Thing thing{5.0f, 10.0f, 1.0f};
        thing.update();
        CPPUNIT_ASSERT(thing.getX() == 5.0f);
    }
    void testThingMoves() {
        Thing thing{5.0f, 10.0f, 1.0f};
        thing.applyForce(1, 1);
        thing.update();
        // we'll assume a simple force model
        // where applying a force means it
        // adds that dX each time we update
        CPPUNIT_ASSERT(thing.getX() == 6.0f);
    }
    void testThingCollide() {
        Thing thing1{5.0f, 10.0f, 1.0f};
        Thing thing2{5.0f, 12.0f, 1.0f};
        thing1.update();
        thing2.update();
        CPPUNIT_ASSERT(thing1.didCollide(thing2) == true);
    }
};

int main() {
    CppUnit::TextUi::TestRunner runner{};
    runner.addTest(new CppUnit::TestCaller<FixtureTests>{
        "test the addition operator",
        &FixtureTests::testAddition});

    runner.addTest(new CppUnit::TestCaller<FixtureTests>{
        "test the logic",
        &FixtureTests::testLogic});

    runner.addTest(new CppUnit::TestCaller<FixtureTests>{
        "test the thing position is correct",
        &FixtureTests::testThingPosition});

    runner.addTest(new CppUnit::TestCaller<FixtureTests>{
        "test starts still",
        &FixtureTests::testThingStartsStill});

    runner.addTest(new CppUnit::TestCaller<FixtureTests>{
        "test force",
        &FixtureTests::testThingMoves});

    runner.addTest(new CppUnit::TestCaller<FixtureTests>{
        "test collide",
        &FixtureTests::testThingCollide});

    runner.run();
    return 0;
}