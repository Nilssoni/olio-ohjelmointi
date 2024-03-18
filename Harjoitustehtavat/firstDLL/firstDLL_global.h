#ifndef FIRSTDLL_GLOBAL_H
#define FIRSTDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FIRSTDLL_LIBRARY)
#define FIRSTDLL_EXPORT Q_DECL_EXPORT
#else
#define FIRSTDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // FIRSTDLL_GLOBAL_H
