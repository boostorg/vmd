#if !defined(BOOST_VMD_DETAIL_EQUAL_TYPE_HPP)
#define BOOST_VMD_DETAIL_EQUAL_TYPE_HPP

#include <boost/preprocessor/comparison/equal.hpp>

#define BOOST_VMD_DETAIL_EQUAL_TYPE(type1,type2) \
	BOOST_PP_EQUAL(type1,type2) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,type1,type2) \
	BOOST_PP_EQUAL_D(d,type1,type2) \
/**/

#endif /* BOOST_VMD_DETAIL_EQUAL_TYPE_HPP */
