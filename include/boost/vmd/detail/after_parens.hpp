#if !defined(BOOST_VMD_DETAIL_AFTER_PARENS_HPP)
#define BOOST_VMD_DETAIL_AFTER_PARENS_HPP

#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/detail/begin_parens.hpp>

#define BOOST_VMD_DETAIL_AFTER_PARENS_DATA(parens) BOOST_VMD_GEN_EMPTY parens
#define BOOST_VMD_DETAIL_AFTER_PARENS_NOT_FOUND(parens) (,)
#define BOOST_VMD_DETAIL_AFTER_PARENS(parens) (BOOST_VMD_DETAIL_BEGIN_PARENS(parens),BOOST_VMD_DETAIL_AFTER_PARENS_DATA(parens))

#endif /* BOOST_VMD_DETAIL_AFTER_PARENS_HPP */
