/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com
 * URL      : http://qtlha.sourceforge.net/
 *
 * QtLHA acts as an interface between Qt and LHA library.
 * Please keep QtLHA as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef QT_LHA_H
#define QT_LHA_H

#include <QtCore>
#ifndef QT_STATIC
#include <QtScript>
#endif

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTLHA_LIB)
#    define Q_LHA_EXPORT Q_DECL_EXPORT
#  else
#    define Q_LHA_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_LHA_EXPORT
#endif

#define QT_LHA_LIB 1

class Q_LHA_EXPORT QtLHA ;

class Q_LHA_EXPORT QtLHA
{
  public:

    explicit QtLHA (void) ;
    virtual ~QtLHA (void) ;

  protected:

  private:

} ;

QT_END_NAMESPACE

#endif
