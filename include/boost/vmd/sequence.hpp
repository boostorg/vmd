#if !defined(BOOST_VMD_SEQUENCE_HPP)
#define BOOST_VMD_SEQUENCE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence.hpp>

#define BOOST_VMD_SEQUENCE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE(vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQUENCE_HPP */
