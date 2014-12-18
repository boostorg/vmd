#if !defined(BOOST_VMD_DETAIL_ARRAY_EQUAL_HPP)
#define BOOST_VMD_DETAIL_ARRAY_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/generic/type.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/data_equal.hpp>
#include <boost/vmd/detail/equal_type.hpp>

#define BOOST_VMD_DETAIL_ARRAY_EQUAL_NC(arf,ars) \
	BOOST_VMD_DETAIL_DATA_EQUAL(arf,ars,BOOST_PP_ARRAY_SIZE,BOOST_PP_ARRAY_ELEM) \
/**/

#define BOOST_VMD_DETAIL_ARRAY_EQUAL_NC_D(d,arf,ars) \
	BOOST_VMD_DETAIL_DATA_EQUAL_D(d,arf,ars,BOOST_PP_ARRAY_SIZE,BOOST_PP_ARRAY_ELEM) \
/**/

#define BOOST_VMD_DETAIL_ARRAY_EQUAL_IR(arf,ars) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(arf), \
				BOOST_VMD_TYPE_ARRAY \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(ars), \
				BOOST_VMD_TYPE_ARRAY \
				) \
			), \
		BOOST_VMD_DETAIL_ARRAY_EQUAL_NC, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(arf,ars) \
/**/

#define BOOST_VMD_DETAIL_ARRAY_EQUAL_IR_D(d,arf,ars) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				BOOST_VMD_TYPE(arf), \
				BOOST_VMD_TYPE_ARRAY \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				BOOST_VMD_TYPE(ars), \
				BOOST_VMD_TYPE_ARRAY \
				) \
			), \
		BOOST_VMD_DETAIL_ARRAY_EQUAL_NC_D, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(d,arf,ars) \
/**/

#define BOOST_VMD_DETAIL_ARRAY_EQUAL(arf,ars) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ARRAY_EQUAL_IR(arf,ars)) \
/**/

#define BOOST_VMD_DETAIL_ARRAY_EQUAL_D(d,arf,ars) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ARRAY_EQUAL_IR_D(d,arf,ars)) \
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
