TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
LIBS = -lSDL2 -lSDL2_image

SOURCES += \
        Hero.cpp \
        main.cpp \
        onEvent.cpp \
        onExexute.cpp \
        onInit.cpp \
        onQuit.cpp

HEADERS += \
    Game.h \
    Hero.h \
    config.h
