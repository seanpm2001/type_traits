
#include "test.hpp"
#include "check_integral_constant.hpp"
#include TYPE_TRAITS(is_base_and_derived)

TT_TEST_BEGIN(is_base_and_derived)

BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<Derived,Base>::value), false);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<Derived,Derived>::value), true);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<Base,Base>::value), true);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<Base,Derived>::value), true);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<NonDerived,Base>::value), false);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<Base,void>::value), false);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<Base,const void>::value), false);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<void,Derived>::value), false);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<const void,Derived>::value), false);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<int, int>::value), false);
BOOST_CHECK_INTEGRAL_CONSTANT((::tt::is_base_and_derived<const int, int>::value), false);

TT_TEST_END





