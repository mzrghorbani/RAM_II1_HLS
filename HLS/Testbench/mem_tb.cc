#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "mem_top.h"
#include "mem_fe.h"
#include "mem_be.h"

int main() {

	int inp;
	int outp;

	for(int l = 0; l < 16; l++) {
		int temp = l * 10;
		mem_top(&temp, &outp);
	}

	// errors += outp != (10 + j);

	return 0;
}
