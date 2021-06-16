NAME         = QtLHA
TARGET       = $${NAME}
QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/QtLHA

include ($${PWD}/LHA/LHA.pri)

HEADERS     += $${PWD}/../../include/QtLHA/QtLHA
HEADERS     += $${PWD}/../../include/QtLHA/qtlha.h

SOURCES     += $${PWD}/qtlha.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)
