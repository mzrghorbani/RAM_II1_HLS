#include "mem_be.h"

void mem_be(bool we, int waddr, int inp, bool rd, int raddr, int* outp) {

   static const int BufferSize_be = 16;

   static int buffer_be[BufferSize_be];

   if (we) {
	   buffer_be[waddr % BufferSize_be] = inp;
   }

   if (rd) {
	  *outp = buffer_be[raddr % BufferSize_be];
   }
}
