#if !defined(BOOST_VMD_DETAIL_ONLY_AFTER_HPP)
#define BOOST_VMD_DETAIL_ONLY_AFTER_HPP

#include <boost/vmd/detail/mods.hpp>
#include <boost/vmd/detail/modifiers.hpp>

/*

	Determines whether or not the BOOST_VMD_RETURN_ONLY_AFTER modifiers has been passed
	as a variadic parameter.
	
	Returns 1 = BOOST_VMD_RETURN_ONLY_AFTER has been passed
	        0 = BOOST_VMD_RETURN_ONLY_AFTER has not been passed

*/

#define BOOST_VMD_DETAIL_ONLY_AFTER(...) \
	BOOST_VMD_DETAIL_MODS_IS_RESULT_ONLY_AFTER \
		( \
		BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
		) \
/**/

#define BOOST_VMD_DETAIL_ONLY_AFTER_D(d,...) \
	BOOST_VMD_DETAIL_MODS_IS_RESULT_ONLY_AFTER \
		( \
		BOOST_VMD_DETAIL_NEW_MODS_D(d,BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_ONLY_AFTER_HPP */
