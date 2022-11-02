QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Circle.cpp \
    Ellipse.cpp \
    Line.cpp \
    Polygon.cpp \
    Polyline.cpp \
    Rectangle.cpp \
    Shape.cpp \
    Square.cpp \
    Text.cpp \
    TextParser.cpp \
    WriteFile.cpp \
    canvas.cpp \
    contact.cpp \
    editpoly.cpp \
    editscreen.cpp \
    editshape.cpp \
    edittext.cpp \
    main.cpp \
    mainmenu.cpp \
    mainwindow.cpp \
    registration.cpp \
    testimonials.cpp

HEADERS += \
    Circle.h \
    Ellipse.h \
    Line.h \
    Polygon.h \
    Polyline.h \
    Rectangle.h \
    Shape.h \
    Square.h \
    Text.h \
    TextParser.h \
    Vector.h \
    WriteFile.h \
    canvas.h \
    contact.h \
    editpoly.h \
    editscreen.h \
    editshape.h \
    edittext.h \
    mainmenu.h \
    mainwindow.h \
    registration.h \
    testimonials.h \
    ui_canvas.h \
    ui_menu.h \
    ui_canvas.h \
    ui_contact.h \
    ui_editpoly.h \
    ui_editscreen.h \
    ui_editshape.h \
    ui_edittext.h \
    ui_mainmenu.h \
    ui_mainwindow.h \
    ui_registration.h \
    ui_testimonials.h

FORMS += \
    contact.ui \
    editpoly.ui \
    editscreen.ui \
    editshape.ui \
    edittext.ui \
    mainmenu.ui \
    mainwindow.ui \
    registration.ui \
    testimonials.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md \
    qt9creatingusefulpro.pro.user \
    qt9creatingusefulpro.pro.user.092b17e \
    shapes.txt

RESOURCES += \
    icon.qrc
