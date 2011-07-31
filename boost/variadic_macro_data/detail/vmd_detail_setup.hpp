#if !defined(VMD_DETAIL_SETUP_HPP)
#define VMD_DETAIL_SETUP_HPP

#if !defined(BOOST_VMD_PPLIB)
#define BOOST_VMD_PPLIB 0
#endif /* BOOST_VMD_PPLIB */

#if !defined(BOOST_VMD_VARIADICS) && BOOST_VMD_PPLIB
#include <boost/preprocessor/config/config.hpp>
#if defined(BOOST_PP_VARIADICS)
#define BOOST_VMD_VARIADICS BOOST_PP_VARIADICS
#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_PPLIB */

#if !defined(BOOST_VMD_VARIADICS)
#include <boost/config.hpp>
#if !defined(BOOST_NO_VARIADIC_MACROS)
#define BOOST_VMD_VARIADICS 1
#else
#define BOOST_VMD_VARIADICS 0
#endif /* BOOST_NO_VARIADIC_MACROS */
#endif /* BOOST_VMD_VARIADICS */

#endif // VMD_DETAIL_SETUP_HPP
