TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

QT     +=sql
SOURCES += \
        main.cpp

win32: LIBS += "D:/MySql/mysql-8.0.11-winx64/lib/libmysql.lib"

INCLUDEPATH += "D:/MySql/mysql-8.0.11-winx64/include"
DEPENDPATH += "D:/MySql/mysql-8.0.11-winx64/include"

HEADERS += \
    my.h
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
