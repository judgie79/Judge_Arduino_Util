#ifndef NULLCHECK_H
#define NULLCHECK_H

#define isNull(s) s == NULL
#define isNullPtr(s) s == nullptr
#define isOrNull(s) s == nullptr || s == nullptr
#define norNull(s) s != NULL && s != nullptr
#define notNull(s) s != NULL
#define notNullPtr(s) s != nullptr

#endif