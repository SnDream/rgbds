/*
 * This file is part of RGBDS.
 *
 * Copyright (c) 2014-2018, RGBDS contributors.
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef HELPERS_H
#define HELPERS_H

#if defined(__GNUC__)
	#if __GNUC__ > 2 || (__GNUC__ == 2 && (__GNUC_MINOR__ >= 5))
		/* GCC 2.5 or newer */
		#define noreturn __attribute__ ((noreturn))
	#endif
#endif

#if defined(_MSC_VER) && !defined(noreturn)
	#if _MSC_VER >= 1310
		/* MS Visual Studio 2003/.NET Framework 1.1 or newer */
		#define noreturn _declspec(noreturn)
	#endif
#endif

#if !defined(noreturn)
	/* Unsupported, but no need to throw a fit */
	#define noreturn
#endif

#endif /* HELPERS_H */
