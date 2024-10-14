#pragma once

#include <stdio.h>
#include <time.h>


struct TimeTimer {
	clock_t S = clock();
	clock_t E = S;
};

bool Start(TimeTimer& In);
clock_t End(TimeTimer& In);
clock_t Result(TimeTimer& In);
clock_t Elapsed(TimeTimer& In);
