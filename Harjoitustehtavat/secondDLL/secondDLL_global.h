#ifndef SECONDDLL_GLOBAL_H
#define SECONDDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SECONDDLL_LIBRARY)
#define SECONDDLL_EXPORT Q_DECL_EXPORT
#else
#define SECONDDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // SECONDDLL_GLOBAL_H
