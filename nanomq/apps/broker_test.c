#include <stdio.h>
#include <assert.h>

#include "include/broker.h"

int main()
{
	int rv = 0;

	rv = broker_start(0, NULL);
	assert(rv == 0);

	// broker_reload() is not supported since internal ipc is disabled
	// default.

	//  rv = broker_reload(0, NULL);
	//  assert(rv == 0);

	rv = broker_dflt(0, NULL);
	assert(rv == 0);

	return 0;
}