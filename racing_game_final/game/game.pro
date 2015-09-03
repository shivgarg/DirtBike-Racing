#-------------------------------------------------
#
# Project created by QtCreator 2013-09-07T17:34:11
#
#-------------------------------------------------

QT       += core gui

TARGET = game
TEMPLATE = app


SOURCES += main.cpp\
    credits.cpp \
    mainwindow.cpp \
    newgame.cpp \
    options.cpp \
    player.cpp \
    menu.cpp \
    trackinfo.cpp \
    global_hiscores.cpp \
    personal_hiscores.cpp \
    help.cpp \
    currentscore.cpp \
    chooselevel.cpp

HEADERS  += \
    credits.h \
    mainwindow.h \
    newgame.h \
    options.h \
    player.h \
    menu.h \
    trackinfo.h \
    global_hiscores.h \
    personal_hiscores.h \
    help.h \
    currentscore.h \
    chooselevel.h

FORMS    += \
    credits.ui \
    mainwindow.ui \
    newgame.ui \
    options.ui \
    player.ui \
    menu.ui \
    trackinfo.ui \
    global_hiscores.ui \
    personal_hiscores.ui \
    help.ui \
    currentscore.ui \
    chooselevel.ui

RESOURCES += \
    ab.qrc \
    ads.qrc \
    back.qrc \
    background.qrc \
    credits.qrc \
    logo.qrc \
    race.qrc \
    racer.qrc \
    res.qrc \
    trackbg.qrc \
    1map.qrc \
    2map.qrc \
    keyboard.qrc \
    3map.qrc \
    4map.qrc \
    5map.qrc \
    6map.qrc \
    7map.qrc \
    8map.qrc \
    9map.qrc \
    10map.qrc

OTHER_FILES += \
    game.pro.user
