QT       += core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    addfiz.cpp \
    addinform.cpp \
    addprise.cpp \
    addur.cpp \
    adinfdeb.cpp \
    deldeb.cpp \
    deletee.cpp \
    delfizik.cpp \
    delprise.cpp \
    delur.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    pun2a.cpp \
    pun2b.cpp \
    pun2c.cpp \
    pun2d.cpp \
    pun2e.cpp \
    punkt2.cpp

HEADERS += \
    addfiz.h \
    addinform.h \
    addprise.h \
    addur.h \
    adinfdeb.h \
    deldeb.h \
    deletee.h \
    delfizik.h \
    delprise.h \
    delur.h \
    login.h \
    mainwindow.h \
    pun2a.h \
    pun2b.h \
    pun2c.h \
    pun2d.h \
    pun2e.h \
    punkt2.h

FORMS += \
    addfiz.ui \
    addinform.ui \
    addprise.ui \
    addur.ui \
    adinfdeb.ui \
    deldeb.ui \
    deletee.ui \
    delfizik.ui \
    delprise.ui \
    delur.ui \
    login.ui \
    mainwindow.ui \
    pun2a.ui \
    pun2b.ui \
    pun2c.ui \
    pun2d.ui \
    pun2e.ui \
    punkt2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
