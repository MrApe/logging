#include "macrologger.h"
//#include <syslog.h>


int main(int argc, char* argv[]) 
{
	int max = 10;
	int times_run = 0;
	LOG_INFO("Running Loop");
	LOG_DEBUG("Times to run is set to %i", max);
	for (int i = 0; i < max-1; ++i)
	{
		times_run++;
		LOG_TRACE("Run %i", i);
	}

	if (times_run < max)
	{
		LOG_ERROR("We ran %i times, but expected %i times.", times_run, max);
	}
	else
	{
		LOG_INFO("Loop done %i times. Cake!", times_run);
	}
	
}
