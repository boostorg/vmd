#if !defined(BOOST_VMD_ASSERT_IS_TYPE_HPP)
#define BOOST_VMD_ASSERT_IS_TYPE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_TYPE(ppident)

#else

#include <boost/vmd/assert.hpp>
#include <boost/vmd/is_type.hpp>

#define BOOST_VMD_ASSERT_IS_TYPE(ppident) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_TYPE(ppident), \
      	BOOST_VMD_IS_TYPE_ASSERT_ERROR \
      	) \
/**/

#define BOOST_VMD_ASSERT_IS_TYPE_D(d,ppident) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_TYPE_D(d,ppident), \
      	BOOST_VMD_IS_TYPE_ASSERT_ERROR \
      	) \
/**/

#endif // !BOOST_VMD_ASSERT_DATA

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ASSERT_IS_TYPE_HPP */
