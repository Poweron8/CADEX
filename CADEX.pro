TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    curves.h \
    curves_global.h


DISTFILES += \
    build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug/libcurves.so \
    build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug/libcurves.so.1 \
    build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug/libcurves.so.1.0 \
    build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug/libcurves.so.1.0.0

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug/release/ -lcurves
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug/debug/ -lcurves
else:unix: LIBS += -L$$PWD/build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug/ -lcurves

INCLUDEPATH += $$PWD/build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug
DEPENDPATH += $$PWD/build-curves-Desktop_Qt_6_4_0_GCC_64bit-Debug
