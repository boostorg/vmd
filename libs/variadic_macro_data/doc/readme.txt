You can use the jamfile in the doc directory to 
regenerate the documentation for this library.

You can use the jamfile in the test directory to 
run the tests for this library.

You can execute these jamfiles while keeping this  
library in its own separate directory from a 
Boost distribution by:

1) Having a valid boost-build.jam in a directory 
   somewhere above the separate directory. This 
   is always the case if you have checked out 
   this library from the sandbox into a local 
   directory beneath the main sandbox directory 
   and have checked out the files from the          
   top-level sandbox directory.

       or

   Setting the BOOST_BUILD_PATH environment 
   variable to point to a Boost build directory.

2) Using the --boost=/path/to/boost/installation 
   bjam command-line parameter to point to a 
   Boost installation and placing the library 
   below the sandbox top-level directory with 
   its top-level sandbox files.

If you move this library under a Boost installation 
you need only execute 'bjam' in the jamfile directories 
to regenerate the docs or run the test.

Version information and history information are 
now part of the generated HTML documentation.

If you want to contact me directly, my name is 
Edward Diener and you can reach me at 
eld@tropicsoft.com. You can also of course 
use the Boost newsgroups to ask questions 
and make comments or suggestions about the 
library.
