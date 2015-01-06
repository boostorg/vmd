#if !defined(BOOST_VMD_DETAIL_ELEM_HPP)
#define BOOST_VMD_DETAIL_ELEM_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/empty.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/equal_type.hpp>

#define BOOST_VMD_DETAIL_ELEM_PROCESS(tuple,type) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE \
			( \
			BOOST_PP_TUPLE_ELEM(0,tuple), \
			type \
			), \
		BOOST_PP_TUPLE_ELEM(1,tuple) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_PROCESS_D(d,tuple,type) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE_D \
			( \
			d, \
			BOOST_PP_TUPLE_ELEM(0,tuple), \
			type \
			), \
		BOOST_PP_TUPLE_ELEM(1,tuple) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM(tuple,type) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_COMPL \
			( \
			BOOST_VMD_IS_EMPTY(tuple) \
			), \
		BOOST_VMD_DETAIL_ELEM_PROCESS, \
		BOOST_VMD_EMPTY \
		) \
	(tuple,type) \
/**/

#define BOOST_VMD_DETAIL_ELEM_D(d,tuple,type) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_COMPL \
			( \
			BOOST_VMD_IS_EMPTY(tuple) \
			), \
		BOOST_VMD_DETAIL_ELEM_PROCESS_D, \
		BOOST_VMD_EMPTY \
		) \
	(d,tuple,type) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_HPP */
