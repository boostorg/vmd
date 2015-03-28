#if !defined(BOOST_VMD_DETAIL_SEQUENCE_SIZE_HPP)
#define BOOST_VMD_DETAIL_SEQUENCE_SIZE_HPP

#include <boost/preprocessor/array/size.hpp>
#include <boost/vmd/detail/sequence_to_array.hpp>

#define BOOST_VMD_DETAIL_SEQUENCE_SIZE(vseq) \
	BOOST_PP_ARRAY_SIZE(BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY(vseq)) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_SIZE_D(d,vseq) \
	BOOST_PP_ARRAY_SIZE(BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY_D(d,vseq)) \
/**/

#endif /* BOOST_VMD_DETAIL_SEQUENCE_SIZE_HPP */
