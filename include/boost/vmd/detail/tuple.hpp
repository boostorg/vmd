#if !defined(BOOST_VMD_DETAIL_TUPLE_HPP)
#define BOOST_VMD_DETAIL_TUPLE_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/preprocessor/punctuation/is_begin_parens.hpp>
#include <boost/preprocessor/punctuation/paren.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/empty.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/mods.hpp>
  
#define BOOST_VMD_DETAIL_BEGIN_TUPLE_EXP2(...) ( __VA_ARGS__ ) BOOST_VMD_EMPTY BOOST_PP_LPAREN()
#define BOOST_VMD_DETAIL_BEGIN_TUPLE_EXP1(param) BOOST_VMD_DETAIL_BEGIN_TUPLE_EXP2 param BOOST_PP_RPAREN()
#define BOOST_VMD_DETAIL_BEGIN_TUPLE(param) BOOST_PP_EXPAND(BOOST_VMD_DETAIL_BEGIN_TUPLE_EXP1(param))

#define BOOST_VMD_DETAIL_AFTER_TUPLE_DATA(tuple) BOOST_VMD_EMPTY tuple
#define BOOST_VMD_DETAIL_SPLIT_TUPLE(tuple) (BOOST_VMD_DETAIL_BEGIN_TUPLE(tuple),BOOST_VMD_DETAIL_AFTER_TUPLE_DATA(tuple))

#define BOOST_VMD_DETAIL_TUPLE_BST_CS(vseq) \
	BOOST_PP_EQUAL(BOOST_PP_TUPLE_SIZE(BOOST_VMD_DETAIL_BEGIN_TUPLE(vseq)),1) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_BST(vseq) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_IS_BEGIN_PARENS(vseq), \
			BOOST_VMD_DETAIL_TUPLE_BST_CS, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(vseq) \
		) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_BSEQ_NXT(vseq) \
	BOOST_VMD_DETAIL_TUPLE_BST(BOOST_VMD_DETAIL_AFTER_TUPLE_DATA(vseq)) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_BSEQ(vseq) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_TUPLE_BST(vseq), \
			BOOST_VMD_DETAIL_TUPLE_BSEQ_NXT, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(vseq) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_TUPLE_CHK_SEQ(vseq) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_TUPLE_BSEQ(vseq), \
		BOOST_VMD_EMPTY, \
		BOOST_VMD_DETAIL_AFTER_TUPLE_DATA \
		) \
	(vseq) \
/**/

#define BOOST_VMD_DETAIL_AFTER_TUPLE(vseq) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_IS_BEGIN_PARENS(vseq), \
      BOOST_VMD_DETAIL_AFTER_TUPLE_CHK_SEQ, \
      BOOST_VMD_EMPTY \
      ) \
    (vseq) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_SPLIT_CHK_SEQ(vseq) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_TUPLE_BSEQ(vseq), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_SPLIT_TUPLE \
		) \
	(vseq) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_SPLIT(vseq) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_IS_BEGIN_PARENS(vseq), \
      BOOST_VMD_DETAIL_TUPLE_SPLIT_CHK_SEQ, \
      BOOST_VMD_DETAIL_EMPTY_RESULT \
      ) \
    (vseq) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_PROCESS_CHK_SEQ(vseq) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_TUPLE_BSEQ(vseq), \
		BOOST_VMD_EMPTY, \
		BOOST_VMD_DETAIL_BEGIN_TUPLE \
		) \
	(vseq) \
/**/

#define BOOST_VMD_DETAIL_TUPLE_PROCESS(vseq) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_IS_BEGIN_PARENS(vseq), \
      BOOST_VMD_DETAIL_TUPLE_PROCESS_CHK_SEQ, \
      BOOST_VMD_EMPTY \
      ) \
    (vseq) \
/**/

#define BOOST_VMD_DETAIL_TUPLE(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_MODS_IS_RESULT_AFTER \
			( \
			BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
			), \
		BOOST_VMD_DETAIL_TUPLE_SPLIT, \
		BOOST_VMD_DETAIL_TUPLE_PROCESS \
		) \
	(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)) \
/**/

#define BOOST_VMD_DETAIL_IS_BEGIN_TUPLE(vseq) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_DETAIL_TUPLE_PROCESS(vseq) \
			) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_TUPLE_HPP */
