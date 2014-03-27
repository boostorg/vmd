#if !defined(BOOST_VMD_ASSERT_HPP)
#define BOOST_VMD_ASSERT_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/assert.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Conditionally causes an error to be generated.

    cond = A condition that determines whether an assertion occurs.  Valid values range from 0 to BOOST_PP_LIMIT_MAG.

    returns = If cond expands to 0, this macro causes an error.  Otherwise, it expands to nothing.
              For all compilers other than Visual C++ the error is a preprocessing error.
              For Visual C++ the error is caused by output invalid C++: this error could be
              masked if the invalid output is ignored by a macro which invokes this macro.
    
*/
# define BOOST_VMD_ASSERT(cond) \
	BOOST_VMD_DETAIL_ASSERT(cond) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ASSERT_HPP */
