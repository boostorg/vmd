#if !defined(BOOST_VMD_DETAIL_IS_TUPLE_HPP)
#define BOOST_VMD_DETAIL_IS_TUPLE_HPP

#include <boost/vmd/detail/is_entire.hpp>
#include <boost/vmd/detail/parens_split.hpp>
  
#define BOOST_VMD_DETAIL_IS_TUPLE(vseq) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_DETAIL_PARENS_SPLIT(vseq) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_TUPLE_HPP */
