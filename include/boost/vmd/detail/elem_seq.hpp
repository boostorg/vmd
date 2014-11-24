#if !defined(BOOST_VMD_DETAIL_ELEM_SEQ_HPP)
#define BOOST_VMD_DETAIL_ELEM_SEQ_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem.hpp>
#include <boost/vmd/detail/mods.hpp>
#include <boost/vmd/detail/split_seq.hpp>

#define BOOST_VMD_DETAIL_ELEM_SEQ_PROCESS(elem,...) \
	BOOST_VMD_DETAIL_ELEM(BOOST_VMD_ELEM(elem,__VA_ARGS__,BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE),BOOST_VMD_TYPE_SEQ) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SEQ(elem,...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_TUPLE_ELEM \
			( \
			1, \
			BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
			), \
		BOOST_VMD_DETAIL_ELEM_SPLIT_SEQ, \
		BOOST_VMD_DETAIL_ELEM_SEQ_PROCESS \
		) \
	(elem,__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_SEQ_HPP */
