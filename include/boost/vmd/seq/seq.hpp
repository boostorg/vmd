#if !defined(BOOST_VMD_SEQ_SEQ_HPP)
#define BOOST_VMD_SEQ_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/vmd/seq/is_seq.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning seq, and the preprocessor tokens after the beginning seq, of a macro parameter.

    param = a macro parameter.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a seq, both elements of the tuple are empty.
   				If the param does start with a seq, the first element is the beginning seq
   				and the second element is the preprocessor tokens after the beginning seq.
    
*/

#define BOOST_VMD_SEQ(vseq) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_IS_SEQ(vseq), \
		vseq \
		) \
/**/

#define BOOST_VMD_SEQ_D(d,vseq) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_IS_SEQ_D(d,vseq), \
		vseq \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQ_SEQ_HPP */
