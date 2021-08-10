# Install script for directory: /home/liudun/ukui-biometric-auth/ukui-biometric-auth/polkit-agent

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/ukui-polkit/polkit-ukui-authentication-agent-1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/ukui-polkit/polkit-ukui-authentication-agent-1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/ukui-polkit/polkit-ukui-authentication-agent-1"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/ukui-polkit" TYPE EXECUTABLE FILES "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/polkit-ukui-authentication-agent-1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/ukui-polkit/polkit-ukui-authentication-agent-1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/ukui-polkit/polkit-ukui-authentication-agent-1")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/ukui-polkit/polkit-ukui-authentication-agent-1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/ukui-biometric/i18n_qm/polkit/bo.qm;/usr/share/ukui-biometric/i18n_qm/polkit/es.qm;/usr/share/ukui-biometric/i18n_qm/polkit/fr.qm;/usr/share/ukui-biometric/i18n_qm/polkit/pt.qm;/usr/share/ukui-biometric/i18n_qm/polkit/ru.qm;/usr/share/ukui-biometric/i18n_qm/polkit/tr.qm;/usr/share/ukui-biometric/i18n_qm/polkit/zh_CN.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/ukui-biometric/i18n_qm/polkit" TYPE FILE FILES
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/bo.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/es.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/fr.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/pt.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/ru.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/tr.qm"
    "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/zh_CN.qm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/etc/xdg/autostart/polkit-ukui-authentication-agent-1.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/etc/xdg/autostart" TYPE FILE FILES "/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/polkit-agent/data/polkit-ukui-authentication-agent-1.desktop")
endif()

