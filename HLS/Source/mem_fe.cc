#include "mem_fe.h"

void mem_fe(bool we, int waddr, int inp, bool rd, int raddr, int* outp) {

   static const int BufferSize_fe = 16;

   static int buffer_fe[BufferSize_fe];

   if (we) {
	   buffer_fe[waddr % BufferSize_fe] = inp;
   }

   if (rd) {
	  *outp = buffer_fe[raddr % BufferSize_fe];
   }
}
