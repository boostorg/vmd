#if !defined(BOOST_VMD_DETAIL_SPLIT_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_SPLIT_IDENTIFIER_HPP

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/push_back.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/match_identifier.hpp>
#include <boost/vmd/detail/mods.hpp>
#include <boost/vmd/detail/split.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IDS(tuple,mods) \
	BOOST_PP_IF \
		( \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER \
			( \
			BOOST_PP_TUPLE_ELEM(0,tuple), \
			BOOST_VMD_DETAIL_MODS_RESULT_OTHER(mods) \
			), \
		tuple, \
		(,) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IDS_RES_SC(tuple,match) \
	BOOST_PP_TUPLE_PUSH_BACK(tuple,BOOST_PP_DEC(match)) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IDS_RES(tuple,match) \
	BOOST_PP_IF \
		( \
		match, \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IDS_RES_SC, \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_INDT_FAIL \
		) \
	(tuple,match) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IDS_IND(tuple,mods) \
	BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IDS_RES \
		( \
		tuple, \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER \
			( \
			BOOST_PP_TUPLE_ELEM(0,tuple), \
			BOOST_VMD_DETAIL_MODS_RESULT_OTHER(mods) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_INDT_FAIL(...) \
	(,,) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_INDT(tuple,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM(0,tuple) \
			), \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_INDT_FAIL, \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IDS_IND \
		) \
	(tuple,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_INDF(tuple,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM(0,tuple) \
			), \
		BOOST_VMD_IDENTITY(tuple), \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IDS \
		) \
	(tuple,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_NE(tuple,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_MODS_IS_RESULT_INDEX(mods), \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_INDT, \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_INDF \
		) \
	(tuple,mods) \
/**/
	
#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IPRE(tuple,mods,cempty) \
	BOOST_PP_IIF \
		( \
		cempty, \
		BOOST_VMD_IDENTITY(tuple), \
		BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_NE \
		) \
	(tuple,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_PRE(tuple,mods,cempty) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_IPRE(tuple,mods,cempty)) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER(elem,vseq,mods) \
	BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER_CHK_PRE \
		( \
		BOOST_VMD_DETAIL_ELEM_SPLIT \
			( \
			BOOST_VMD_ELEM \
				( \
				elem, \
				vseq, \
				BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, \
				BOOST_VMD_RETURN_AFTER \
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

#endif /* BOOST_VMD_DETAIL_SPLIT_IDENTIFIER_HPP */
