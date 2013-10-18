#if !defined(BOOST_VMD_DETAIL_CHECK_IF_VALUE_HPP)
#define BOOST_VMD_DETAIL_CHECK_IF_VALUE_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

#define BOOST_VMD_DETAIL_CHECK_IF_VALUE_PARENS ()

#define BOOST_VMD_DETAIL_CHECK_IF_VALUE_CAT(param,key) \
    	( \
    	BOOST_PP_CAT \
    		( \
   			BOOST_VMD_MAP_, \
    		BOOST_PP_CAT \
    			( \
    			key, \
   				param \
    			) \
    		) \
    	BOOST_PP_EMPTY BOOST_VMD_DETAIL_CHECK_IF_VALUE_PARENS \
    	) \
/**/

#endif /* BOOST_VMD_DETAIL_CHECK_IF_VALUE_HPP */
