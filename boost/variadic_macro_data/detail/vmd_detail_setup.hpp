#if !defined(VMD_DETAIL_SETUP_HPP)
#define VMD_DETAIL_SETUP_HPP

#if !defined(BOOST_VMD_PPLIB)
#define BOOST_VMD_PPLIB 0
#endif /* BOOST_VMD_PPLIB */

#if !defined(BOOST_VMD_VARIADICS) && BOOST_VMD_PPLIB
#include <boost/preprocessor/config/config.hpp>
#if defined(BOOST_PP_VARIADICS)
#define BOOST_VMD_VARIADICS BOOST_PP_VARIADICS
#if BOOST_VMD_VARIADICS
#define BOOST_VMD_MSVC BOOST_PP_VARIADICS_MSVC
#endif /* BOOST_VMD_VARIADICS */
#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_PPLIB */

#if !defined(BOOST_VMD_VARIADICS)
#include <boost/config.hpp>
#if !defined(BOOST_NO_VARIADIC_MACROS)
#define BOOST_VMD_VARIADICS 1
#if defined(BOOST_MSVC)
#define BOOST_VMD_MSVC 1
#else
#define BOOST_VMD_MSVC 0
#endif /* BOOST_MSVC */
#if !defined(BOOST_VMD_ASSERT_DATA)
#if defined(NDEBUG)
#define BOOST_VMD_ASSERT_DATA 0
#else
#define BOOST_VMD_ASSERT_DATA 1
#endif /* NDEBUG */
#endif /* BOOST_PP_ASSERT_DATA */
#else
#define BOOST_VMD_VARIADICS 0
#endif /* BOOST_NO_VARIADIC_MACROS */
#elif BOOST_VMD_VARIADICS
#if !defined(BOOST_VMD_ASSERT_DATA)
#if defined(NDEBUG)
#define BOOST_VMD_ASSERT_DATA 0
#else
#define BOOST_VMD_ASSERT_DATA 1
#endif /* NDEBUG */
#endif /* BOOST_PP_ASSERT_DATA */
#endif /* BOOST_VMD_VARIADICS */

#endif /* VMD_DETAIL_SETUP_HPP */
