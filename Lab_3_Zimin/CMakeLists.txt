cmake_minimum_required(VERSION 3.16)

project(Lab_3_Zimin VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        Zimin_Lab.cpp
        Zimin_Lab.h
        Zimin_Lab.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Lab_3_Zimin
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        Product.h
        Product.cpp

        Electronics.h
        Electronics.cpp
        pch.h
        Manager.h
        Manager.cpp
        Zimin_Widget.h Zimin_Widget.cpp
        EditDialog.h EditDialog.cpp EditDialog.ui

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Lab_3_Zimin APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Lab_3_Zimin SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Lab_3_Zimin
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Lab_3_Zimin PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Lab_3_Zimin)
endif()
set_target_properties(Lab_3_Zimin PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Lab_3_Zimin
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Lab_3_Zimin)
endif()

set(BOOST_ROOT "C:/C++ Libraries/boost_1_86_0")
find_package(Boost 1.86 REQUIRED COMPONENTS serialization)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    link_directories(${Boost_LIBRARY_DIRS})
    target_link_libraries(Lab_3_Zimin PRIVATE ${Boost_LIBRARIES})
endif()

set(CMAKE_SOURCE_FILE_ENCODING "UTF-8")
