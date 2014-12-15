#if !defined(BOOST_VMD_DETAIL_TUPLE_EQUAL_HPP)
#define BOOST_VMD_DETAIL_TUPLE_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/generic/type.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/data_equal.hpp>
#include <boost/vmd/detail/equal_type.hpp>

#define BOOST_VMD_DETAIL_TUPLE_EQUAL_NC(tpf,tps) \
	BOOST_VMD_DETAIL_DATA_EQUAL(tpf,tps,BOOST_PP_TUPLE_SIZE,BOOST_PP_TUPLE_ELEM) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_EQUAL_NC_D(d,tpf,tps) \
	BOOST_VMD_DETAIL_DATA_EQUAL_D(d,tpf,tps,BOOST_PP_TUPLE_SIZE,BOOST_PP_TUPLE_ELEM) \
/**/

/*

	Check if the types are both arrays

*/

#define BOOST_VMD_DETAIL_TUPLE_EQUAL_IR(tpf,tps) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(tpf), \
				BOOST_VMD_TYPE_TUPLE \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(tps), \
				BOOST_VMD_TYPE_TUPLE \
				) \
			), \
		BOOST_VMD_DETAIL_TUPLE_EQUAL_NC, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(tpf,tps) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_EQUAL_IR_D(d,tpf,tps) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				BOOST_VMD_TYPE(tpf), \
				BOOST_VMD_TYPE_TUPLE \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				BOOST_VMD_TYPE(tps), \
				BOOST_VMD_TYPE_TUPLE \
				) \
			), \
		BOOST_VMD_DETAIL_TUPLE_EQUAL_NC_D, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(d,tpf,tps) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_EQUAL(tpf,tps) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_TUPLE_EQUAL_IR(tpf,tps)) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_EQUAL_D(d,tpf,tps) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_TUPLE_EQUAL_IR_D(d,tpf,tps)) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_NOT_EQUAL(tpf,tps) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_TUPLE_EQUAL(tpf,tps) \
		) \

#define BOOST_VMD_DETAIL_TUPLE_NOT_EQUAL_D(d,tpf,tps) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_TUPLE_EQUAL_D(d,tpf,tps) \
		) \

#endif /* BOOST_VMD_DETAIL_TUPLE_EQUAL_HPP */
