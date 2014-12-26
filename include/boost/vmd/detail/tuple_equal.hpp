#if !defined(BOOST_VMD_DETAIL_TUPLE_EQUAL_HPP)
#define BOOST_VMD_DETAIL_TUPLE_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/generic/type.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/equal_type.hpp>
#include <boost/vmd/detail/recurse/data_equal/data_equal_specific.hpp>

#define BOOST_VMD_DETAIL_TUPLE_EQUAL(tpf,tps) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_TYPE(tpf,tps,BOOST_VMD_TYPE_TUPLE), \
			BOOST_VMD_DETAIL_DATA_EQUAL_SPECIFIC, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(tpf,tps,BOOST_VMD_TYPE_TUPLE) \
		) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_EQUAL_D(d,tpf,tps) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_TYPE_D(d,tpf,tps,BOOST_VMD_TYPE_TUPLE), \
			BOOST_VMD_DETAIL_DATA_EQUAL_SPECIFIC_D, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(d,tpf,tps,BOOST_VMD_TYPE_TUPLE) \
		) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_NOT_EQUAL(tpf,tps) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_TUPLE_EQUAL(tpf,tps) \
		) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_NOT_EQUAL_D(d,tpf,tps) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_TUPLE_EQUAL_D(d,tpf,tps) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_TUPLE_EQUAL_HPP */
