# Install script for directory: /home/pc/Desktop/71ch/axHostSw/hostLib/a71ch

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libA71CH_.so.1.4.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libA71CH_.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libA71CH_.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/usr/local/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/pc/Desktop/71ch/axHostSw/hostLib/build/a71ch/libA71CH_.so.1.4.0"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/build/a71ch/libA71CH_.so.1"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/build/a71ch/libA71CH_.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libA71CH_.so.1.4.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libA71CH_.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libA71CH_.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "::::::::::::::"
           NEW_RPATH "/usr/local/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/inc/a71ch_api.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/inc/a71ch_const.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/inc/a71ch_util.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../api/inc/ax_api.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../api/inc/ax_common.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../api/inc/ax_scp.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/hostCrypto/axHostCrypto.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/hostCrypto/HostCryptoAPI.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/infra/global_platf.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/hostCrypto/hcAsn.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/infra/sm_apdu.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/infra/sm_types.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/infra/sm_errors.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/scp/scp.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/smCom/smCom.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/smCom/apduComm.h"
    "/home/pc/Desktop/71ch/axHostSw/hostLib/a71ch/../libCommon/infra/a71_debug.h"
    )
endif()

