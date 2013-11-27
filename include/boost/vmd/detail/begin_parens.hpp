#if !defined(BOOST_VMD_DETAIL_BEGIN_PARENS_HPP)
#define BOOST_VMD_DETAIL_BEGIN_PARENS_HPP

#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/punctuation/paren.hpp>
#include <boost/vmd/gen_empty.hpp>

#define BOOST_VMD_DETAIL_BEGIN_PARENS_EXP2(...) ( __VA_ARGS__ ) BOOST_VMD_GEN_EMPTY BOOST_PP_LPAREN()
#define BOOST_VMD_DETAIL_BEGIN_PARENS_EXP1(param) BOOST_VMD_DETAIL_BEGIN_PARENS_EXP2 param BOOST_PP_RPAREN()

#define BOOST_VMD_DETAIL_BEGIN_PARENS(param) BOOST_PP_EXPAND(BOOST_VMD_DETAIL_BEGIN_PARENS_EXP1(param))

#endif /* BOOST_VMD_DETAIL_BEGIN_PARENS_HPP */
