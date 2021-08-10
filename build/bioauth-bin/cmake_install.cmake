# Install script for directory: /home/liudun/ukui-biometric-auth/ukui-biometric-auth/bioauth-bin

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bioauth" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bioauth")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bioauth"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/bioauth")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bioauth" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bioauth")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bioauth")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/ukui-biometric/i18n_qm/bioauth-bin/bo.qm;/usr/share/ukui-biometric/i18n_qm/bioauth-bin/es.qm;/usr/share/ukui-biometric/i18n_qm/bioauth-bin/fr.qm;/usr/share/ukui-biometric/i18n_qm/bioauth-bin/pt.qm;/usr/share/ukui-biometric/i18n_qm/bioauth-bin/ru.qm;/usr/share/ukui-biometric/i18n_qm/bioauth-bin/tr.qm;/usr/share/ukui-biometric/i18n_qm/bioauth-bin/zh_CN.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/ukui-biometric/i18n_qm/bioauth-bin" TYPE FILE FILES
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/bo.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/es.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/fr.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/pt.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/ru.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/tr.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/zh_CN.qm"
    )
endif()

