#if !defined(BOOST_VMD_AFTER_NUMBER_HPP)
#define BOOST_VMD_AFTER_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/number/begin_number.hpp>
#include <boost/vmd/detail/is_from.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after a number of a macro parameter.

    vseq      = A v-sequence to test.

    returns   = expands to the preprocessor tokens after a number.
    			If the number is not found, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_NUMBER(vseq) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_BEGIN_NUMBER(vseq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_NUMBER_HPP */
