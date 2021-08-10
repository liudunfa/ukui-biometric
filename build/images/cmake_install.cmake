# Install script for directory: /home/liudun/ukui-biometric-auth/ukui-biometric-auth/images

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/ukui-biometric/images/FingerPrint.gif;/usr/share/ukui-biometric/images/FingerPrint.png;/usr/share/ukui-biometric/images/FingerVein.gif;/usr/share/ukui-biometric/images/FingerVein.png;/usr/share/ukui-biometric/images/Iris.gif;/usr/share/ukui-biometric/images/Iris.png;/usr/share/ukui-biometric/images/VoicePrint.gif;/usr/share/ukui-biometric/images/VoicePrint.png;/usr/share/ukui-biometric/images/icon.png")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/ukui-biometric/images" TYPE FILE FILES
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/FingerPrint.gif"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/FingerPrint.png"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/FingerVein.gif"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/FingerVein.png"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/Iris.gif"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/Iris.png"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/VoicePrint.gif"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/VoicePrint.png"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/icon.png"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/ukui-biometric/images/Face;/usr/share/ukui-biometric/images/FingerPrint;/usr/share/ukui-biometric/images/FingerVein;/usr/share/ukui-biometric/images/Iris;/usr/share/ukui-biometric/images/Other;/usr/share/ukui-biometric/images/VoicePrint;/usr/share/ukui-biometric/images/huawei;/usr/share/ukui-biometric/images/icon")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/ukui-biometric/images" TYPE DIRECTORY FILES
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/Face"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/FingerPrint"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/FingerVein"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/Iris"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/Other"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/VoicePrint"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/huawei"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/images/icon"
    )
endif()

