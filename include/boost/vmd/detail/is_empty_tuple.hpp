#if !defined(BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_HPP)
#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/is_empty.hpp>

#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_CEM(tuple) \
	BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)) \
/**/

#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_SIZE(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL(BOOST_PP_TUPLE_SIZE(tuple),1), \
		BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_CEM, \
		BOOST_VMD_GEN_ZERO \
		) \
	(tuple) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_HPP */
