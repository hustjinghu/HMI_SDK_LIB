#ifndef GEN3UI_NONMEDIASHOWTEST_H
#define GEN3UI_NONMEDIASHOWTEST_H


#include "test/MockModule.h"
#include "../NonMediaShow.h"

using ::testing::Return;
using ::testing::AtLeast;
using ::testing::_;
using ::testing::Invoke;
using ::testing::ReturnRef;

namespace test {
    namespace hmi_sdk {
        namespace rpc_test {

            class CNonMediaShowTest:public ::testing::Test
            {
            public:
                CNonMediaShowTest();
                static void SetUpTestCase();
                static void TearDownTestCase();
                virtual void SetUp();
                virtual void TearDown();

            };

        }

    }
}

#endif // GEN3UI_NONMEDIASHOWTEST_H
