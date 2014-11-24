#if !defined(BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP

#include <boost/preprocessor/control/expr_if.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem.hpp>
#include <boost/vmd/detail/match_identifier.hpp>
#include <boost/vmd/detail/mods.hpp>
#include <boost/vmd/detail/split_identifier.hpp>

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS(id,mods) \
	BOOST_PP_EXPR_IF \
		( \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER \
			( \
			id, \
			BOOST_PP_TUPLE_ELEM \
				( \
				BOOST_VMD_DETAIL_MODS_TUPLE_OTHER, \
				mods \
				) \
			), \
		id \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IPRE(id,mods) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_VMD_IS_EMPTY \
				( \
				BOOST_PP_TUPLE_ELEM \
					( \
					BOOST_VMD_DETAIL_MODS_TUPLE_OTHER, \
					mods \
					) \
				), \
			BOOST_VMD_IS_EMPTY(id) \
			), \
		BOOST_VMD_IDENTITY(id), \
		BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS \
		) \
	(id,mods) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_PRE(id,mods) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IPRE(id,mods)) \
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
		mods \
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
		BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP */
