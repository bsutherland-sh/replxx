#ifndef REPLXX_SETUP_HXX_INCLUDED
#define REPLXX_SETUP_HXX_INCLUDED 1

#include "replxx.h"

namespace replxx {

struct Setup {
	int historyMaxLen;
	char const* breakChars;
	int completionCountCutoff;
	replxx_completion_callback_t* completionCallback;
	Setup( void );
};

extern Setup setup;

}

#endif
