#if !defined(BOOST_VMD_IDENTITY_HPP)
#define BOOST_VMD_IDENTITY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#if BOOST_VMD_MSVC
#include <boost/preprocessor/cat.hpp>
#endif
#include <boost/vmd/empty.hpp>

#define BOOST_VMD_IDENTITY(item) item BOOST_VMD_EMPTY

#if BOOST_VMD_MSVC
#define BOOST_VMD_IDENTITY_RESULT(item) BOOST_PP_CAT(item,)
#else
#define BOOST_VMD_IDENTITY_RESULT(item) item
#endif

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IDENTITY_HPP */
