#if !defined(BOOST_VMD_DETAIL_SPLIT_HPP)
#define BOOST_VMD_DETAIL_SPLIT_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/replace.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/empty_result.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_CT_EXTRACT(tuple) \
	BOOST_PP_TUPLE_REPLACE \
		( \
		tuple, \
		0, \
		BOOST_PP_TUPLE_ELEM(1,BOOST_PP_TUPLE_ELEM(0,tuple)) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_CT_EXTRACT_D(d,tuple) \
	BOOST_PP_TUPLE_REPLACE_D \
		( \
		d, \
		tuple, \
		0, \
		BOOST_PP_TUPLE_ELEM(1,BOOST_PP_TUPLE_ELEM(0,tuple)) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_CT(tuple,type) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			type, \
			BOOST_PP_TUPLE_ELEM(0,BOOST_PP_TUPLE_ELEM(0,tuple)) \
			), \
		BOOST_VMD_DETAIL_ELEM_SPLIT_CT_EXTRACT, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_CT_D(d,tuple,type) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL_D \
			( \
			d, \
			type, \
			BOOST_PP_TUPLE_ELEM(0,BOOST_PP_TUPLE_ELEM(0,tuple)) \
			), \
		BOOST_VMD_DETAIL_ELEM_SPLIT_CT_EXTRACT_D, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(d,tuple) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT(tuple,type) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_ELEM_SPLIT_CT \
		) \
	(tuple,type) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_D(d,tuple,type) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_ELEM_SPLIT_CT_D \
		) \
	(d,tuple,type) \
/**/

#endif /* BOOST_VMD_DETAIL_SPLIT_HPP */
