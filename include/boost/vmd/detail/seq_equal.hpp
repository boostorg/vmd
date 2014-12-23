#if !defined(BOOST_VMD_DETAIL_SEQ_EQUAL_HPP)
#define BOOST_VMD_DETAIL_SEQ_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/generic/type.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/equal_type.hpp>
#include <boost/vmd/detail/recurse/data_equal/data_equal_specific.hpp>

#define BOOST_VMD_DETAIL_SEQ_EQUAL_IR(sqf,sqs) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_DATA_EQUAL_TYPE(lsf,lss,BOOST_VMD_TYPE_SEQ), \
		BOOST_VMD_DETAIL_DATA_EQUAL_SPECIFIC, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(sqf,sqs,BOOST_VMD_TYPE_SEQ) \
/**/

#define BOOST_VMD_DETAIL_SEQ_EQUAL_IR_D(d,sqf,sqs) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_DATA_EQUAL_TYPE_D(d,lsf,lss,BOOST_VMD_TYPE_SEQ), \
		BOOST_VMD_DETAIL_DATA_EQUAL_SPECIFIC_D, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(d,sqf,sqs,BOOST_VMD_TYPE_SEQ) \
/**/

#define BOOST_VMD_DETAIL_SEQ_EQUAL(sqf,sqs) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_SEQ_EQUAL_IR(sqf,sqs)) \
/**/

#define BOOST_VMD_DETAIL_SEQ_EQUAL_D(d,sqf,sqs) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_SEQ_EQUAL_IR_D(d,sqf,sqs)) \
/**/

#define BOOST_VMD_DETAIL_SEQ_NOT_EQUAL(sqf,sqs) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_SEQ_EQUAL(sqf,sqs) \
		) \

#define BOOST_VMD_DETAIL_SEQ_NOT_EQUAL_D(d,sqf,sqs) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_SEQ_EQUAL_D(d,sqf,sqs) \
		) \

#endif /* BOOST_VMD_DETAIL_SEQ_EQUAL_HPP */
