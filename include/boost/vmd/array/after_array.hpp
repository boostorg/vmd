#if !defined(BOOST_VMD_AFTER_ARRAY_HPP)
#define BOOST_VMD_AFTER_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/array/begin_array.hpp>
#include <boost/vmd/detail/is_from.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after the beginning array of a macro parameter.

    veq = a vsequence

    returns   = The preprocessor tokens after the beginning array of the macro parameter.
    			If the param does not start with an array, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_ARRAY(vseq) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_BEGIN_ARRAY(vseq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_ARRAY_HPP */
