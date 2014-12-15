#if !defined(BOOST_VMD_DETAIL_LIST_EQUAL_2_HPP)
#define BOOST_VMD_DETAIL_LIST_EQUAL_2_HPP

#include <boost/vmd/detail/recurse/list_equal/list_equal_headers.hpp>

#define BOOST_VMD_DETAIL_LIST_EQUAL_2_NC(lsf,lss) \
	BOOST_VMD_DETAIL_DATA_EQUAL_2(lsf,lss) \
/**/

#define BOOST_VMD_DETAIL_LIST_EQUAL_2_NC_D(d,lsf,lss) \
	BOOST_VMD_DETAIL_DATA_EQUAL_2_D(d,lsf,lss) \
/**/

#define BOOST_VMD_DETAIL_LIST_EQUAL_2_IR(lsf,lss) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(lsf), \
				BOOST_VMD_TYPE_LIST \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(lss), \
				BOOST_VMD_TYPE_LIST \
				) \
			), \
		BOOST_VMD_DETAIL_LIST_EQUAL_2_NC, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(lsf,lss) \
/**/

#define BOOST_VMD_DETAIL_LIST_EQUAL_2_IR_D(d,lsf,lss) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				BOOST_VMD_TYPE_D(d,lsf), \
				BOOST_VMD_TYPE_LIST \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				BOOST_VMD_TYPE_D(d,lss), \
				BOOST_VMD_TYPE_LIST \
				) \
			), \
		BOOST_VMD_DETAIL_LIST_EQUAL_2_NC_D, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(d,lsf,lss) \
/**/

#define BOOST_VMD_DETAIL_LIST_EQUAL_2(lsf,lss) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_LIST_EQUAL_2_IR(lsf,lss)) \
/**/

#define BOOST_VMD_DETAIL_LIST_EQUAL_2_D(d,lsf,lss) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_LIST_EQUAL_2_IR_D(d,lsf,lss)) \
/**/

#endif /* BOOST_VMD_DETAIL_LIST_EQUAL_2_HPP */
