QT += core gui widgets

TEMPLATE = lib
TARGET = ViewportNode

CONFIG += plugin

unix {
DESTDIR = ../build/plugins

INCLUDEPATH += ../core/src
INCLUDEPATH += /usr/local/include/opencv4

LIBS += -L/usr/local/lib
LIBS += -lopencv_core
LIBS += -lopencv_imgproc
LIBS += -lopencv_imgcodecs
LIBS += -lopencv_videoio
}

HEADERS += \
    CvvINode.h \
    src/CvvINodePort.h \
    src/ViewportNode.h \
    src/ViewportDisplay.h

SOURCES += \
    src/CvvINodePort.cpp \
    src/ViewportNode.cpp \
    src/ViewportDisplay.cpp

FORMS += \
    ui/ViewportDisplay.ui

