TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        pipeauteur.cpp
QMAKE_CXXFLAGS += -std=c++17

HEADERS += \
    pipeauteur.h
