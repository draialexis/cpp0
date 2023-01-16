TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        commercial.cpp \
        main.cpp \
        pipeauteur.cpp
QMAKE_CXXFLAGS += -std=c++17

HEADERS += \
    commercial.h \
    pipeauteur.h
