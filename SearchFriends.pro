######################################################################
# Author : Weipeng He
# Email  : heweipeng@gmail.com
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += src

DESTDIR = bin
OBJECTS_DIR = bin/.obj
MOC_DIR = bin/.moc
RCC_DIR = bin/.rcc
UI_DIR = bin/.ui

# Input
HEADERS += src/puff.h
SOURCES += src/main.cpp src/puff.cpp
