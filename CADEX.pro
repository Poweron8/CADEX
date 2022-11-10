TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        circle.cpp \
        curve.cpp \
        ellipse.cpp \
        helix.cpp \
        main.cpp \
        point.cpp

HEADERS += \
    circle.h \
    curve.h \
    ellipse.h \
    helix.h \
    point.h
