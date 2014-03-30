#if !defined(BOOST_VMD_IDENTIFIER_HPP)
#define BOOST_VMD_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bool.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/detail/after_identifier.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the index of a beginning identifier found and the preprocessor tokens after the beginning identifier.

    parameter = a macro parameter.
    ...       = variadic parameters, maximum of 3
    
    The first variadic parameter is:
    
    key(s)    = The data may take one of two forms:
    			it is either a single C++ identifier as a unique 'key'
    			or a Boost PP tuple of the unique 'key's.

                The idea of a unique 'key' is not to duplicate any key that another library may use.
             
			    A unique key should not begin with an underscore. It may end
			    with an underscore only if the value to be tested does not begin
			    with an underscore. It may contain underscores.
			 
			    Two different suggested ways to generate a unique key are:
			    1) Use a specific mnemonic for a particular module and concatenate an increasing
				   numeric value, perhaps separated by an underscore, to it each time you use it, 
				   ie. TTI_0, TTI_1, TTI_2 etc.
			    2) use a GUID ( 128 bit unique number ) generated by the OS or software, prefixed by some alphabetic.
			    
				The 'identifier' to be tested against is specified by having the end-user 
				defining an object-like macro, which does not expand to anything, whose form is:
				
				#define BOOST_VMD_MAP_'key''identifier'
				
				where 'key' is the key, or one of the keys, passed in this parameter,
					  'identifier' is a value to be tested against.
					  
	The second variadic parameter (optional) is:
	
				1) a Boost PP sequence where each element in the sequence contains the key(s) of subsequent identifiers,
				   where a 'key' is explained in the first variadic parameter. In other words each sequence element 
				   contains either a single key or a tuple of keys, ie '(key)' or '((key,key,key))'. The maximum number
				   of sequence elements allowed is 4.
				
					OR
					
				2) a number represented a maximum amount of subsequent Boost PP numbers following the identifier. The
				   maximum number for this amount is 5.
				   
				If the second optional parameter is not specified a beginning identifier will also always be found 
				if followed by a single Boost PP number, a Boost PP tuple, or the end of the parameter.
				
				If the second optional parameter is a Boost PP sequence a beginning identifier will also be found
				if, subsequent to matching 0 or more further keys, a Boost PP tuple or the end of the parameter
				is found.
				
				If the second optional parameter is a number a beginning identifier will also be found
				if, subsequent to matching 0 or more Boost PP numbers, a Boost PP tuple or the
				end of the parameter is found.
				
	The third variadic parameter (optional) is a number represented a maximum amount of Boost PP numbers 
	following the subsequent identifiers specified by the second variadic parameter. The maximum number 
	for this amount is 5.
	
	If the second and third variadic parameters are specified, a beginning identifier will also be found if, 
	subsequent to matching further keys followed by further numbers, a Boost PP tuple or the end of
	the parameter is found.
				
    returns   = the result is a tuple of two elements.
    			If a beginning identifier is not found, the first element 
    			is 0 and the second element of the tuple is empty.
   				If a beginning identifier is found, the first element 
   				is the index, starting with 1, of the identifier 
   				and the second element is the preprocessor tokens after the identifier.
    
*/
# define BOOST_VMD_IDENTIFIER(parameter,...) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER_NOT_FOUND, \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER \
      ) \
    (parameter,__VA_ARGS__) \
/**/

/** \brief Expands to the index of a beginning identifier of a macro parameter.

    parameter = a macro parameter.
    ...       = variadic parameters, maximum of 3
    
    The first variadic parameter is:
    
    key(s)    = The data may take one of two forms:
    			it is either a single C++ identifier as a unique 'key'
    			or a Boost PP tuple of the unique 'key's.

                The idea of a unique 'key' is not to duplicate any key that another library may use.
             
			    A unique key should not begin with an underscore. It may end
			    with an underscore only if the value to be tested does not begin
			    with an underscore. It may contain underscores.
			 
			    Two different suggested ways to generate a unique key are:
			    1) Use a specific mnemonic for a particular module and concatenate an increasing
				   numeric value, perhaps separated by an underscore, to it each time you use it, 
				   ie. TTI_0, TTI_1, TTI_2 etc.
			    2) use a GUID ( 128 bit unique number ) generated by the OS or software, prefixed by some alphabetic.
			    
				The 'identifier' to be tested against is specified by having the end-user 
				defining an object-like macro, which does not expand to anything, whose form is:
				
				#define BOOST_VMD_MAP_'key''identifier'
				
				where 'key' is the key, or one of the keys, passed in this parameter,
					  'identifier' is a value to be tested against.
					  
	The second variadic parameter (optional) is:
	
				1) a Boost PP sequence where each element in the sequence contains the key(s) of subsequent identifiers,
				   where a 'key' is explained in the first variadic parameter. In other words each sequence element 
				   contains either a single key or a tuple of keys, ie '(key)' or '((key,key,key))'. The maximum number
				   of sequence elements allowed is 4.
				
					OR
					
				2) a number represented a maximum amount of subsequent Boost PP numbers following the identifier. The
				   maximum number for this amount is 5.
				   
				If the second optional parameter is not specified a beginning identifier will also always be found 
				if followed by a single Boost PP number, a Boost PP tuple, or the end of the parameter.
				
				If the second optional parameter is a Boost PP sequence a beginning identifier will also be found
				if, subsequent to matching 0 or more further keys, a Boost PP tuple or the end of the parameter
				is found.
				
				If the second optional parameter is a number a beginning identifier will also be found
				if, subsequent to matching 0 or more Boost PP numbers, a Boost PP tuple or the
				end of the parameter is found.
				
	The third variadic parameter (optional) is a number represented a maximum amount of Boost PP numbers 
	following the subsequent identifiers specified by the second variadic parameter. The maximum number 
	for this amount is 5.
	
	If the second and third variadic parameters are specified, a beginning identifier will also be found if, 
	subsequent to matching further keys followed by further numbers, a Boost PP tuple or the end of
	the parameter is found.
				
    returns   = expands to the index, starting with 1, of the particular identifier it matches, otherwise expands to 0.
    
*/
#define BOOST_VMD_BEGIN_IDENTIFIER(parameter,...) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_IDENTIFIER(parameter,__VA_ARGS__) \
		) \
/**/

/** \brief Expands to the preprocessor tokens after the identifier of a macro parameter.

    parameter = a macro parameter.
    ...       = variadic parameters, maximum of 3
    
    The first variadic parameter is:
    
    key(s)    = The data may take one of two forms:
    			it is either a single C++ identifier as a unique 'key'
    			or a Boost PP tuple of the unique 'key's.

                The idea of a unique 'key' is not to duplicate any key that another library may use.
             
			    A unique key should not begin with an underscore. It may end
			    with an underscore only if the value to be tested does not begin
			    with an underscore. It may contain underscores.
			 
			    Two different suggested ways to generate a unique key are:
			    1) Use a specific mnemonic for a particular module and concatenate an increasing
				   numeric value, perhaps separated by an underscore, to it each time you use it, 
				   ie. TTI_0, TTI_1, TTI_2 etc.
			    2) use a GUID ( 128 bit unique number ) generated by the OS or software, prefixed by some alphabetic.
			    
				The 'identifier' to be tested against is specified by having the end-user 
				defining an object-like macro, which does not expand to anything, whose form is:
				
				#define BOOST_VMD_MAP_'key''identifier'
				
				where 'key' is the key, or one of the keys, passed in this parameter,
					  'identifier' is a value to be tested against.
					  
	The second variadic parameter (optional) is:
	
				1) a Boost PP sequence where each element in the sequence contains the key(s) of subsequent identifiers,
				   where a 'key' is explained in the first variadic parameter. In other words each sequence element 
				   contains either a single key or a tuple of keys, ie '(key)' or '((key,key,key))'. The maximum number
				   of sequence elements allowed is 4.
				
					OR
					
				2) a number represented a maximum amount of subsequent Boost PP numbers following the identifier. The
				   maximum number for this amount is 5.
				   
				If the second optional parameter is not specified a beginning identifier will also always be found 
				if followed by a single Boost PP number, a Boost PP tuple, or the end of the parameter.
				
				If the second optional parameter is a Boost PP sequence a beginning identifier will also be found
				if, subsequent to matching 0 or more further keys, a Boost PP tuple or the end of the parameter
				is found.
				
				If the second optional parameter is a number a beginning identifier will also be found
				if, subsequent to matching 0 or more Boost PP numbers, a Boost PP tuple or the
				end of the parameter is found.
				
	The third variadic parameter (optional) is a number represented a maximum amount of Boost PP numbers 
	following the subsequent identifiers specified by the second variadic parameter. The maximum number 
	for this amount is 5.
	
	If the second and third variadic parameters are specified, a beginning identifier will also be found if, 
	subsequent to matching further keys followed by further numbers, a Boost PP tuple or the end of
	the parameter is found.
				
    returns   = expands to the preprocessor tokens after the identifier.
    			If the identifier is not found, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_IDENTIFIER(parameter,...) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_IDENTIFIER(parameter,__VA_ARGS__) \
		) \
/**/

/** \brief Tests whether a parameter begins with an identifier.

    parameter = a macro parameter.
    ...       = variadic parameters, maximum of 3
    
    The first variadic parameter is:
    
    key(s)    = The data may take one of two forms:
    			it is either a single C++ identifier as a unique 'key'
    			or a Boost PP tuple of the unique 'key's.

                The idea of a unique 'key' is not to duplicate any key that another library may use.
             
			    A unique key should not begin with an underscore. It may end
			    with an underscore only if the value to be tested does not begin
			    with an underscore. It may contain underscores.
			 
			    Two different suggested ways to generate a unique key are:
			    1) Use a specific mnemonic for a particular module and concatenate an increasing
				   numeric value, perhaps separated by an underscore, to it each time you use it, 
				   ie. TTI_0, TTI_1, TTI_2 etc.
			    2) use a GUID ( 128 bit unique number ) generated by the OS or software, prefixed by some alphabetic.
			    
				The 'identifier' to be tested against is specified by having the end-user 
				defining an object-like macro, which does not expand to anything, whose form is:
				
				#define BOOST_VMD_MAP_'key''identifier'
				
				where 'key' is the key, or one of the keys, passed in this parameter,
					  'identifier' is a value to be tested against.
					  
	The second variadic parameter (optional) is:
	
				1) a Boost PP sequence where each element in the sequence contains the key(s) of subsequent identifiers,
				   where a 'key' is explained in the first variadic parameter. In other words each sequence element 
				   contains either a single key or a tuple of keys, ie '(key)' or '((key,key,key))'. The maximum number
				   of sequence elements allowed is 4.
				
					OR
					
				2) a number represented a maximum amount of subsequent Boost PP numbers following the identifier. The
				   maximum number for this amount is 5.
				   
				If the second optional parameter is not specified a beginning identifier will also always be found 
				if followed by a single Boost PP number, a Boost PP tuple, or the end of the parameter.
				
				If the second optional parameter is a Boost PP sequence a beginning identifier will also be found
				if, subsequent to matching 0 or more further keys, a Boost PP tuple or the end of the parameter
				is found.
				
				If the second optional parameter is a number a beginning identifier will also be found
				if, subsequent to matching 0 or more Boost PP numbers, a Boost PP tuple or the
				end of the parameter is found.
				
	The third variadic parameter (optional) is a number represented a maximum amount of Boost PP numbers 
	following the subsequent identifiers specified by the second variadic parameter. The maximum number 
	for this amount is 5.
	
	If the second and third variadic parameters are specified, a beginning identifier will also be found if, 
	subsequent to matching further keys followed by further numbers, a Boost PP tuple or the end of
	the parameter is found.
				
    returns = 1 if the param begins with an identifier,
              0 if it does not.
              
*/
# define BOOST_VMD_IS_BEGIN_IDENTIFIER(parameter,...) \
	BOOST_PP_BOOL \
		( \
		BOOST_VMD_BEGIN_IDENTIFIER(parameter,__VA_ARGS__) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IDENTIFIER_HPP */
