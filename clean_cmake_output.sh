#! /bin/sh
FILES="CMakeFiles Makefile CTestTestfile.cmake cmake_install.cmake CMakeCache.txt DartConfiguration.tcl "

echo `pwd`
rm -rf ${FILES};
cd main; rm -rf ${FILES};
cd ../external; rm -rf ${FILES};
cd ../module_a; rm -rf ${FILES};
cd ../module_b; rm -rf ${FILES};
cd ../test; rm -rf ${FILES};
cd suite_module_a; rm -rf ${FILES};
cd ../suite_module_b; rm -rf ${FILES};

echo "Clean completed all files ${FILES}"
