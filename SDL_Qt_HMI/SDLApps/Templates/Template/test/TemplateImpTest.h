#ifndef GEN3UI_TEMPLATEIMPTEST_H
#define GEN3UI_TEMPLATEIMPTEST_H


#include "test/MockModule.h"

using ::testing::Return;
using ::testing::AtLeast;
using ::testing::_;
using ::testing::Invoke;
using ::testing::ReturnRef;

namespace test {
    namespace hmi_sdk {
        namespace rpc_test {

            class TemplateImpTest:public ::testing::Test
            {
            public:
                TemplateImpTest();
                static void SetUpTestCase();
                static void TearDownTestCase();
                virtual void SetUp();
                virtual void TearDown();

            };

        }

    }
}

#endif // TEMPLATEIMPTEST_H
