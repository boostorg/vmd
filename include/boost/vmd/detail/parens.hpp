#if !defined(BOOST_VMD_DETAIL_PARENS_HPP)
#define BOOST_VMD_DETAIL_PARENS_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/punctuation/is_begin_parens.hpp>
#include <boost/preprocessor/punctuation/paren.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/empty.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/mods.hpp>
  
#define BOOST_VMD_DETAIL_BEGIN_PARENS_EXP2(...) ( __VA_ARGS__ ) BOOST_VMD_EMPTY BOOST_PP_LPAREN()
#define BOOST_VMD_DETAIL_BEGIN_PARENS_EXP1(vseq) BOOST_VMD_DETAIL_BEGIN_PARENS_EXP2 vseq BOOST_PP_RPAREN()
#define BOOST_VMD_DETAIL_BEGIN_PARENS(vseq) BOOST_PP_EXPAND(BOOST_VMD_DETAIL_BEGIN_PARENS_EXP1(vseq))

#define BOOST_VMD_DETAIL_AFTER_PARENS_DATA(vseq) BOOST_VMD_EMPTY vseq
#define BOOST_VMD_DETAIL_SPLIT_PARENS(vseq) (BOOST_VMD_DETAIL_BEGIN_PARENS(vseq),BOOST_VMD_DETAIL_AFTER_PARENS_DATA(vseq))

#define BOOST_VMD_DETAIL_PARENS_SPLIT(vseq) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_IS_BEGIN_PARENS(vseq), \
	  BOOST_VMD_DETAIL_SPLIT_PARENS, \
      BOOST_VMD_DETAIL_EMPTY_RESULT \
      ) \
    (vseq) \
/**/

#define BOOST_VMD_DETAIL_PARENS_PROCESS(vseq) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_IS_BEGIN_PARENS(vseq), \
      BOOST_VMD_DETAIL_BEGIN_PARENS, \
      BOOST_VMD_EMPTY \
      ) \
    (vseq) \
/**/

#define BOOST_VMD_DETAIL_PARENS(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_MODS_IS_RESULT_AFTER \
			( \
			BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
			), \
		BOOST_VMD_DETAIL_PARENS_SPLIT, \
		BOOST_VMD_DETAIL_PARENS_PROCESS \
		) \
	(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)) \
/**/

#define BOOST_VMD_DETAIL_PARENS_D(d,...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_MODS_IS_RESULT_AFTER \
			( \
			BOOST_VMD_DETAIL_NEW_MODS_D(d,BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
			), \
		BOOST_VMD_DETAIL_PARENS_SPLIT, \
		BOOST_VMD_DETAIL_PARENS_PROCESS \
		) \
	(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)) \
/**/

#endif /* BOOST_VMD_DETAIL_PARENS_HPP */
