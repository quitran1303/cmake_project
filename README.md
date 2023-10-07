# CMake, With Unity Framework Challenge Project
Authors: **Qui Tran**

## NOTES: for checkout the code with submodule
    $git clone --recurse-submodules git@github.com:quitran1303/cmake_project.git 

## To run test
### By command
    #Run configuration to generate Makefile and other neccessary files
    $ cmake -DTARGET_GROUP=test -S .
    
    #Build code with TARGET_GROUP=test
    $ make

    #Run test with ctest
    $ ctest --verbose

### By built-in scripts
    #Run configuration to generate Makefile and other neccessary files
    $./configure_test.sh
    
    #Build code with TARGET_GROUP=test
    $./build_test.sh
    
    #Run test with ctest
    $./run_test.sh

## To run production 
### By command
    #Run configuration to generate Makefile and other neccessary files
    $ cmake -DTARGET_GROUP=production -S .
    
    #Build code with TARGET_GROUP=test
    $ make

    #Run test with ctest
    $ ctest --verbose

### By built-in scripts
    #Run configuration to generate Makefile and other neccessary files
    $./configure_production.sh
    
    #Build code with TARGET_GROUP=test
    $./build_production.sh
    
    #Run test with ctest
    $./run_production.sh

