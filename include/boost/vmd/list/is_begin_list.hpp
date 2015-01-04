#if !defined(BOOST_VMD_IS_BEGIN_LIST_HPP)
#define BOOST_VMD_IS_BEGIN_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/list.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Tests whether a parameter begins with a list.

    param = input possibly beginning with a Boost PP list.

    returns = 1 if the param begins with a list,
              0 if it does not.
    
*/
#define BOOST_VMD_IS_BEGIN_LIST(param) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_DETAIL_LIST(param) \
			) \
		) \
/**/

#define BOOST_VMD_IS_BEGIN_LIST_D(d,param) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_DETAIL_LIST_D(d,param) \
			) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_BEGIN_LIST_HPP */
