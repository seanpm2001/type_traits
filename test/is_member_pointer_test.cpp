
#include "test.hpp"
#include "check_integral_constant.hpp"
#include TYPE_TRAITS(is_member_pointer)

TT_TEST_BEGIN(is_member_pointer)

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<f1>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<f2>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<f3>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<void*>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<mf1>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<mf2>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<mf3>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<mf4>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<cmf>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<mp>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<void>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::is_member_pointer<test_abc1>::value, false);

TT_TEST_END





