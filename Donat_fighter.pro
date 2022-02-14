TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
LIBS = -lSDL2 -lSDL2_image

SOURCES += \
        src/Hero.cpp \
        src/main.cpp \
        src/onEvent.cpp \
        src/onExexute.cpp \
        src/onInit.cpp \
        src/onLoop.cpp \
        src/onQuit.cpp \
        src/onRender.cpp

HEADERS += \
    includes/Game.h \
    includes/Hero.h \
    includes/config.h
