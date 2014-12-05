#if !defined(BOOST_VMD_LIST_LIST_HPP)
#define BOOST_VMD_LIST_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/vmd/list/is_list.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning list, and the preprocessor tokens after the beginning list, of a macro parameter.

    param = input possibly beginning with a Boost PP list.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a list, both elements of the tuple are empty.
   				If the param does start with a list, the first element is the list 
   				and the second element is the preprocessor tokens after the beginning list.
    
*/
#define BOOST_VMD_LIST(vseq) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_IS_LIST(vseq), \
		vseq \
		) \
/**/

#define BOOST_VMD_LIST_D(d,vseq) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_IS_LIST_D(d,vseq), \
		vseq \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_LIST_LIST_HPP */
