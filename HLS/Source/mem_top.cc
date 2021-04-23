#include <iostream>
#include "mem_top.h"

void mem_top(int *inp, int *outp) {

	int d;
	int q;

	static bool rd_fe;
	static int raddr_fe;
	static bool we_fe;
	static int waddr_fe;

	static bool rd_be;
	static int raddr_be;
	static bool we_be;
	static int waddr_be;

//	bool we, int waddr, int inp, bool rd, int raddr, int* outp

	//Write data to mem_fe
	rd_fe = 0;
	we_fe = 1;
	mem_fe(we_fe, waddr_fe, *inp , rd_fe, raddr_fe, &d);
	waddr_fe++;


	//Read data from mem_fe
	rd_fe = 1;
	we_fe = 0;
	mem_fe(we_fe, waddr_fe, *inp , rd_fe, raddr_fe, &d);
	raddr_fe++;

	// null interface
	null_interface(d, &q);

	//Write data to mem_be
	rd_be = 0;
	we_be = 1;
	mem_be(we_be, waddr_be, q, rd_be, raddr_be, outp);
	waddr_be++;

	//Read data from mem_be
	rd_be = 1;
	we_be = 0;
	mem_be(we_be, waddr_be, q, rd_be, raddr_be, outp);
	raddr_be++;
}
