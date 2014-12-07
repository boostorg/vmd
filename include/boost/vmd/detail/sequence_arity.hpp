#if !defined(BOOST_VMD_DETAIL_SEQUENCE_ARITY_HPP)
#define BOOST_VMD_DETAIL_SEQUENCE_ARITY_HPP

#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/bitnor.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/is_from.hpp>
#include <boost/vmd/detail/sequence_elem.hpp>

#define BOOST_VMD_DETAIL_IS_MULTI_TUPLE(tuple) \
	BOOST_PP_BITNOR \
		( \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)), \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,tuple)) \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_UNARY_TUPLE(tuple) \
	BOOST_PP_BITAND \
		( \
		BOOST_PP_NOT \
			( \
			BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)) \
			), \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,tuple)) \
		) \
/**/

// UNARY

#define BOOST_VMD_DETAIL_IS_UNARY(vseq) \
	BOOST_VMD_DETAIL_IS_UNARY_TUPLE \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM(BOOST_VMD_ALLOW_AFTER,0,vseq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_UNARY_D(d,vseq) \
	BOOST_VMD_DETAIL_IS_UNARY_TUPLE \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,BOOST_VMD_ALLOW_AFTER,0,vseq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

// MULTI

#define BOOST_VMD_DETAIL_IS_MULTI(vseq) \
	BOOST_VMD_DETAIL_IS_MULTI_TUPLE \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM(BOOST_VMD_ALLOW_AFTER,0,vseq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_MULTI_D(d,vseq) \
	BOOST_VMD_DETAIL_IS_MULTI_TUPLE \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,BOOST_VMD_ALLOW_AFTER,0,vseq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_SEQUENCE_ARITY_HPP */
