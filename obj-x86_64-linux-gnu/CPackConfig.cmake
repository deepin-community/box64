# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/home/xzl/work/box64/box64;/home/xzl/work/box64/box64/obj-x86_64-linux-gnu")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_FILE_NAME "box64-0.3.1_Linux-x86_64.deb")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "x86_64")
set(CPACK_DEBIAN_PACKAGE_CONTROL_EXTRA "/home/xzl/work/box64/box64/postinst")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "ptitSeb")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.28/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "box64 built using CMake")
set(CPACK_GENERATOR "DEB")
set(CPACK_INNOSETUP_ARCHITECTURE "x64")
set(CPACK_INSTALL_CMAKE_PROJECTS "/home/xzl/work/box64/box64/obj-x86_64-linux-gnu;box64;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr")
set(CPACK_MODULE_PATH "")
set(CPACK_NSIS_DISPLAY_NAME "box64 0.3.1")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "box64 0.3.1")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OBJCOPY_EXECUTABLE "/usr/bin/objcopy")
set(CPACK_OBJDUMP_EXECUTABLE "/usr/bin/objdump")
set(CPACK_OUTPUT_CONFIG_FILE "/home/xzl/work/box64/box64/obj-x86_64-linux-gnu/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "ptitSeb@box86.org")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION "Box64 - Linux Userspace x86_64 Emulator with a twist")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.28/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "box64 built using CMake")
set(CPACK_PACKAGE_FILE_NAME "box64-0.3.1-Linux")
set(CPACK_PACKAGE_HOMEPAGE_URL, "https://box86.org")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "box64 0.3.1")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "box64 0.3.1")
set(CPACK_PACKAGE_NAME "box64")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "0.3.1")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "3")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_READELF_EXECUTABLE "/usr/bin/readelf")
set(CPACK_RESOURCE_FILE_LICENSE "/usr/share/cmake-3.28/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.28/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.28/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/xzl/work/box64/box64/obj-x86_64-linux-gnu/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "ON")
set(CPACK_SOURCE_TGZ "ON")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "ON")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/xzl/work/box64/box64/obj-x86_64-linux-gnu/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
