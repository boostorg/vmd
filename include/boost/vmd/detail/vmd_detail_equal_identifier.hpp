#if !defined(BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_HPP

#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/logical/nor.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/vmd/vmd_is_empty.hpp>

#define BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_PARENS ()

#define BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_CAT(param,key) \
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
    	BOOST_PP_EMPTY BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_PARENS \
    	) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_PRED(d,state) \
	BOOST_PP_NOR \
		( \
		BOOST_PP_TUPLE_ELEM(3,state), \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_TUPLE_ELEM(2,state), \
			BOOST_PP_TUPLE_SIZE \
				( \
				BOOST_PP_TUPLE_ELEM(1,state) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_OP(d,state) \
	( \
	BOOST_PP_TUPLE_ELEM(0,state), \
	BOOST_PP_TUPLE_ELEM(1,state), \
	BOOST_PP_INC(BOOST_PP_TUPLE_ELEM(2,state)), \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EXPAND \
			( \
			BOOST_VMD_IS_EMPTY BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_CAT \
				( \
				BOOST_PP_TUPLE_ELEM(0,state), \
				BOOST_PP_TUPLE_ELEM \
					( \
					BOOST_PP_TUPLE_ELEM(2,state), \
					BOOST_PP_TUPLE_ELEM(1,state) \
					) \
				) \
			), \
		BOOST_PP_INC(BOOST_PP_TUPLE_ELEM(2,state)), \
		0 \
		) \
	) \
/**/

#endif /* BOOST_VMD_DETAIL_EQUAL_IDENTIFIER_HPP */
