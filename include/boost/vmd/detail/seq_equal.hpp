#if !defined(BOOST_VMD_DETAIL_SEQ_EQUAL_HPP)
#define BOOST_VMD_DETAIL_SEQ_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/generic/type.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/data_equal.hpp>
#include <boost/vmd/detail/equal_type.hpp>

#define BOOST_VMD_DETAIL_SEQ_EQUAL_NC(sqf,sqs) \
	BOOST_VMD_DETAIL_DATA_EQUAL(sqf,sqs,BOOST_PP_SEQ_SIZE,BOOST_PP_SEQ_ELEM) \
/**/

#define BOOST_VMD_DETAIL_SEQ_EQUAL_NC_D(d,sqf,sqs) \
	BOOST_VMD_DETAIL_DATA_EQUAL_D(d,sqf,sqs,BOOST_PP_SEQ_SIZE,BOOST_PP_SEQ_ELEM) \
/**/

/*

	Check if the types are both arrays

*/

#define BOOST_VMD_DETAIL_SEQ_EQUAL_IR(sqf,sqs) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(sqf), \
				BOOST_VMD_TYPE_SEQ \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(sqs), \
				BOOST_VMD_TYPE_SEQ \
				) \
			), \
		BOOST_VMD_DETAIL_SEQ_EQUAL_NC, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(sqf,sqs) \
/**/

#define BOOST_VMD_DETAIL_SEQ_EQUAL_IR_D(d,sqf,sqs) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				BOOST_VMD_TYPE(sqf), \
				BOOST_VMD_TYPE_SEQ \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				BOOST_VMD_TYPE(sqs), \
				BOOST_VMD_TYPE_SEQ \
				) \
			), \
		BOOST_VMD_DETAIL_SEQ_EQUAL_NC_D, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(d,sqf,sqs) \
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
