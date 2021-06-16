QT             = core
QT            -= gui
QT            += QtLHA

CONFIG        += console

TEMPLATE       = app

SOURCES       += $${PWD}/lhatool.cpp

win32 {
RC_FILE        = $${PWD}/lhatool.rc
OTHER_FILES   += $${PWD}/lhatool.rc
OTHER_FILES   += $${PWD}/*.js
}
