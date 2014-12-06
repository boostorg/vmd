#if !defined(BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/control/expr_if.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/generic/elem.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/match_identifier.hpp>
#include <boost/vmd/detail/mods.hpp>
#include <boost/vmd/detail/elem_split_identifier.hpp>

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS(id,mods) \
	BOOST_PP_EXPR_IF \
		( \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER \
			( \
			id, \
			BOOST_VMD_DETAIL_MODS_RESULT_OTHER(mods) \
			), \
		id \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS_IND_RES_SC(id,match) \
	( \
	id, \
	BOOST_PP_DEC(match) \
	) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS_IND_RES(id,match) \
	BOOST_PP_IF \
		( \
		match, \
		BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS_IND_RES_SC, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(id,match) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS_IND(id,mods) \
	BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS_IND_RES \
		( \
		id, \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER \
			( \
			id, \
			BOOST_VMD_DETAIL_MODS_RESULT_OTHER(mods) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_INDT(id,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(id), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS_IND \
		) \
	(id,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_NE_IND_FALSE_IR(id,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(id), \
		BOOST_VMD_IDENTITY(id), \
		BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS \
		) \
	(id,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_INDF(id,mods) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_NE_IND_FALSE_IR(id,mods)) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_NE(id,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_MODS_IS_RESULT_INDEX(mods), \
		BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_INDT, \
		BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_INDF \
		) \
	(id,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_PRE_IR(id,mods,cempty) \
	BOOST_PP_IIF \
		( \
		cempty, \
		BOOST_VMD_IDENTITY(id), \
		BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_NE \
		) \
	(id,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_PRE(id,mods,cempty) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_PRE_IR(id,mods,cempty)) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_PROCESS(elem,vseq,mods) \
	BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_PRE \
		( \
		BOOST_VMD_DETAIL_ELEM \
			( \
			BOOST_VMD_ELEM \
				( \
				elem, \
				vseq, \
				BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE \
				), \
			BOOST_VMD_TYPE_IDENTIFIER \
			), \
		mods, \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_DETAIL_MODS_RESULT_OTHER(mods) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_MODS(elem,vseq,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_TUPLE_ELEM(BOOST_VMD_DETAIL_MODS_TUPLE_AFTER,mods), \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER, \
        BOOST_VMD_DETAIL_ELEM_IDENTIFIER_PROCESS \
		) \
	(elem,vseq,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER(elem,...) \
	BOOST_VMD_DETAIL_ELEM_IDENTIFIER_MODS \
		( \
		elem, \
		BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__), \
		BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_INDEX,__VA_ARGS__) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP */
