#if !defined(BOOST_VMD_DETAIL_ARRAY_EQUAL_HPP)
#define BOOST_VMD_DETAIL_ARRAY_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/generic/type.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/equal_type.hpp>
#include <boost/vmd/detail/recurse/data_equal/data_equal_specific.hpp>

#define BOOST_VMD_DETAIL_ARRAY_EQUAL(arf,ars) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_TYPE(arf,ars,BOOST_VMD_TYPE_ARRAY), \
			BOOST_VMD_DETAIL_DATA_EQUAL_SPECIFIC, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(arf,ars,BOOST_VMD_TYPE_ARRAY) \
		) \
/**/

#define BOOST_VMD_DETAIL_ARRAY_EQUAL_D(d,arf,ars) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_TYPE_D(d,arf,ars,BOOST_VMD_TYPE_ARRAY), \
			BOOST_VMD_DETAIL_DATA_EQUAL_SPECIFIC_D, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(d,arf,ars,BOOST_VMD_TYPE_ARRAY) \
		) \
/**/

#define BOOST_VMD_DETAIL_ARRAY_NOT_EQUAL(arf,ars) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_ARRAY_EQUAL(arf,ars) \
		) \
/**/

#define BOOST_VMD_DETAIL_ARRAY_NOT_EQUAL_D(d,arf,ars) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_ARRAY_EQUAL_D(d,arf,ars) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_ARRAY_EQUAL_HPP */
