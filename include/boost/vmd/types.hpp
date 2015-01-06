#if !defined(BOOST_VMD_TYPES_HPP)
#define BOOST_VMD_TYPES_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/equal_type.hpp>

#define BOOST_VMD_TYPE_UNKNOWN 0
#define BOOST_VMD_TYPE_EMPTY 1
#define BOOST_VMD_TYPE_ARRAY 2
#define BOOST_VMD_TYPE_LIST 3
#define BOOST_VMD_TYPE_SEQ 4
#define BOOST_VMD_TYPE_TUPLE 5
#define BOOST_VMD_TYPE_IDENTIFIER 6
#define BOOST_VMD_TYPE_NUMBER 7
#define BOOST_VMD_TYPE_VSEQUENCE 8
#define BOOST_VMD_TYPE_TYPE 9

#define BOOST_VMD_EQUAL_TYPE(tyf,tys) \
	BOOST_VMD_DETAIL_EQUAL_TYPE(tyf,tys) \
/**/

#define BOOST_VMD_EQUAL_TYPE_D(d,tyf,tys) \
	BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,tyf,tys) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_TYPES_HPP */
