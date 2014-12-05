#if !defined(BOOST_VMD_IS_BEGIN_SEQ_HPP)
#define BOOST_VMD_IS_BEGIN_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/not.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/seq/begin_seq.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Tests whether a parameter begins with a seq.

    param = a macro parameter.

    returns = 1 if the param begins with a seq,
              0 if it does not.
    
*/
#define BOOST_VMD_IS_BEGIN_SEQ(param) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_SEQ(param) \
			) \
		) \
/**/

#define BOOST_VMD_IS_BEGIN_SEQ_D(d,param) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_SEQ_D(d,param) \
			) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_BEGIN_SEQ_HPP */
