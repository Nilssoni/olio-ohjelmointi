TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        mybaseclass.cpp \
        myparentclass.cpp \
        mysubclass.cpp

HEADERS += \
    mybaseclass.h \
    myparentclass.h \
    mysubclass.h
