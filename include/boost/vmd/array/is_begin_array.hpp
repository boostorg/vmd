#if !defined(BOOST_VMD_IS_BEGIN_ARRAY_HPP)
#define BOOST_VMD_IS_BEGIN_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/not.hpp>
#include <boost/vmd/array/begin_array.hpp>
#include <boost/vmd/is_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Tests whether a parameter begins with an array.

    param = a macro parameter.

    returns = 1 if the param begins with an array,
              0 if it does not.
    
*/
#define BOOST_VMD_IS_BEGIN_ARRAY(param) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_ARRAY(param) \
			) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_BEGIN_ARRAY_HPP */
