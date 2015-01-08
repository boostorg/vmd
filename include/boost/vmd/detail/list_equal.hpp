#if !defined(BOOST_VMD_DETAIL_LIST_EQUAL_HPP)
#define BOOST_VMD_DETAIL_LIST_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/get_type.hpp>
#include <boost/vmd/detail/equal_type.hpp>
#include <boost/vmd/detail/recurse/data_equal/data_equal_specific.hpp>

#define BOOST_VMD_DETAIL_LIST_EQUAL(lsf,lss) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_TYPE(lsf,lss,BOOST_VMD_TYPE_LIST), \
			BOOST_VMD_DETAIL_DATA_EQUAL_SPECIFIC, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(lsf,lss,BOOST_VMD_TYPE_LIST) \
		) \
/**/

#define BOOST_VMD_DETAIL_LIST_EQUAL_D(d,lsf,lss) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_TYPE_D(d,lsf,lss,BOOST_VMD_TYPE_LIST), \
			BOOST_VMD_DETAIL_DATA_EQUAL_SPECIFIC_D, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(d,lsf,lss,BOOST_VMD_TYPE_LIST) \
		) \
/**/

#define BOOST_VMD_DETAIL_LIST_NOT_EQUAL(lsf,lss) \
	BOOST_PP_COMPL(BOOST_VMD_DETAIL_LIST_EQUAL(lsf,lss)) \
/**/

#define BOOST_VMD_DETAIL_LIST_NOT_EQUAL_D(d,lsf,lss) \
	BOOST_PP_COMPL(BOOST_VMD_DETAIL_LIST_EQUAL_D(d,lsf,lss)) \
/**/

#endif /* BOOST_VMD_DETAIL_LIST_EQUAL_HPP */
