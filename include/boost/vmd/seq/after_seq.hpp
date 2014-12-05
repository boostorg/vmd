#if !defined(BOOST_VMD_AFTER_SEQ_HPP)
#define BOOST_VMD_AFTER_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/seq/begin_seq.hpp>
#include <boost/vmd/detail/is_from.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after the beginning seq of a macro parameter.

    param = a macro parameter.

    returns   = The preprocessor tokens after the beginning seq of the macro parameter.
    			If the param does not start with a seq, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_SEQ(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_BEGIN_SEQ(param,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#define BOOST_VMD_AFTER_SEQ_D(d,param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_BEGIN_SEQ_D(d,param,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_SEQ_HPP */
