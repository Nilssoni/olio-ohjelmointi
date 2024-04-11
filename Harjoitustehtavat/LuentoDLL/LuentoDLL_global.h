#ifndef LUENTODLL_GLOBAL_H
#define LUENTODLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LUENTODLL_LIBRARY)
#define LUENTODLL_EXPORT Q_DECL_EXPORT
#else
#define LUENTODLL_EXPORT Q_DECL_IMPORT
#endif

#endif // LUENTODLL_GLOBAL_H
