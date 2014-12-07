#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP

#include <boost/preprocessor/control/expr_if.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/generic/elem.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem_after.hpp>
#include <boost/vmd/detail/match_identifier.hpp>
#include <boost/vmd/detail/mods.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_IDS(after,tuple,mods) \
	BOOST_PP_EXPR_IF \
		( \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER \
			( \
			BOOST_PP_TUPLE_ELEM(1,BOOST_PP_TUPLE_ELEM(0,tuple)), \
			BOOST_VMD_DETAIL_MODS_RESULT_OTHER(mods) \
			), \
		after \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_PRE_IR(after,tuple,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_VMD_IS_EMPTY \
				( \
				BOOST_VMD_DETAIL_MODS_RESULT_OTHER(mods) \
				), \
			BOOST_VMD_IS_EMPTY \
				( \
				after \
				) \
			), \
		BOOST_VMD_IDENTITY(after), \
		BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_IDS \
		) \
	(after,tuple,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_PRE(after,tuple,mods) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_PRE_IR(after,tuple,mods)) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_VELEM(tuple,mods) \
	BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_PRE \
		( \
		BOOST_VMD_DETAIL_ELEM_AFTER \
			( \
			tuple, \
			BOOST_VMD_TYPE_IDENTIFIER \
			), \
		tuple, \
		mods \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_PROCESS(elem,vseq,mods) \
	BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_VELEM \
		( \
		BOOST_VMD_ELEM \
			( \
			elem, \
			vseq, \
			BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, \
			BOOST_VMD_RETURN_AFTER \
			), \
		mods \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_PROCESS_D(d,elem,vseq,mods) \
	BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_VELEM \
		( \
		BOOST_VMD_ELEM_D \
			( \
			d, \
			elem, \
			vseq, \
			BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, \
			BOOST_VMD_RETURN_AFTER \
			), \
		mods \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER(elem,...) \
	BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_PROCESS \
		( \
		elem, \
		BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__), \
		BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_D(d,elem,...) \
	BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_PROCESS_D \
		( \
		d, \
		elem, \
		BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__), \
		BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP */
