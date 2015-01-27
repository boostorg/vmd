#if !defined(BOOST_VMD_NOT_EQUAL_HPP)
#define BOOST_VMD_NOT_EQUAL_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/equal.hpp>

#define BOOST_VMD_NOT_EQUAL(vseq1,...) \
	BOOST_PP_COMPL(BOOST_VMD_EQUAL(vseq1,__VA_ARGS__)) \
/**/

#define BOOST_VMD_NOT_EQUAL_D(d,vseq1,...) \
	BOOST_PP_COMPL(BOOST_VMD_EQUAL_D(d,vseq1,__VA_ARGS__)) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_NOT_EQUAL_HPP */
