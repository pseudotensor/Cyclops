/*
 * Timer.cpp
 *
 *  Created on: Apr 25, 2014
 *      Author: msuchard
 */

// #ifndef _MSC_VER
#include <sys/time.h> // was just 'time.h'
// #endif

#include <cstddef>
#include "Timer.h"

namespace bsccs {

// //Sushil:Implementing gettimeofday functionality for windows.
// #ifdef _MSC_VER
// //	#if defined(_MSC_VER) || defined(_MSC_EXTENSIONS)
// //		#define DELTA_EPOCH_IN_MICROSECS  11644473600000000Ui64
// //	#else
// //		#define DELTA_EPOCH_IN_MICROSECS  11644473600000000ULL
// //	#endif
// 	struct timezone
// 	{
// 		int  tz_minuteswest; /* minutes W of Greenwich */
// 		int  tz_dsttime;     /* type of dst correction */
// 	};
// 
// 	// Definition of a gettimeofday function
// 	int gettimeofday(struct timeval *tv, struct timezone *tz)
// 	{
// //		// Define a structure to receive the current Windows filetime
// //		FILETIME ft;
// //
// //		// Initialize the present time to 0 and the timezone to UTC
// //		unsigned __int64 tmpres = 0;
// //		static int tzflag = 0;
// //
// 		if (NULL != tv)
// 		{
// //			GetSystemTimeAsFileTime(&ft);
// //
// //			// The GetSystemTimeAsFileTime returns the number of 100 nanosecond
// //			// intervals since Jan 1, 1601 in a structure. Copy the high bits to
// //			// the 64 bit tmpres, shift it left by 32 then or in the low 32 bits.
// //			tmpres |= ft.dwHighDateTime;
// //			tmpres <<= 32;
// //			tmpres |= ft.dwLowDateTime;
// //
// //			// Convert to microseconds by dividing by 10
// //			tmpres /= 10;
// //
// //			// The Unix epoch starts on Jan 1 1970.  Need to subtract the difference
// //			// in seconds from Jan 1 1601.
// //			tmpres -= DELTA_EPOCH_IN_MICROSECS;
// //
// //			// Finally change microseconds to seconds and place in the seconds value.
// //			// The modulus picks up the microseconds.
// //			tv->tv_sec = (long)(tmpres / 1000000UL);
// //			tv->tv_usec = (long)(tmpres % 1000000UL);
// 			tv->tv_sec = 0;
// 			tv->tv_usec = 0;
// 		}
// 
// 		if (NULL != tz)
// 		{
// //			if (!tzflag)
// //			{
// //				_tzset();
// //				tzflag++;
// //			}
// //
// //			// Adjust for the timezone west of Greenwich
// //			tz->tz_minuteswest = _timezone / 60;
// //			tz->tz_dsttime = _daylight;
// 				tz->tz_minutesweet = 0;
// 				tz->tz_dsttime = 0;
// 		}
// 
// 		return 0;
// 	}
// #endif

Timer::Timer() {
	gettimeofday(&time1, NULL);
}

double Timer::operator()() {
	struct timeval time2;
	gettimeofday(&time2, NULL);
	return calculateSeconds(time1, time2);
}

Timer::~Timer() { }

double Timer::calculateSeconds(const timeval &time1, const timeval &time2) {
	return time2.tv_sec - time1.tv_sec +
			(double)(time2.tv_usec - time1.tv_usec) / 1000000.0;
}

} /* namespace bsccs */
