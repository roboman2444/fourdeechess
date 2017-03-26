#include <stdio.h>
#include <stdlib.h>

#include "matrixlib.h"
#include "stack.h"



//insert stack code here (push, pop, mostly)
int	 data_numstacks = 0;
int	 data_stackspace =0;
stack_t *data_stacklist = 0;

int	 inst_numstacks = 0;
int	 inst_stackspace =0;
stack_t *inst_stacklist = 0;




stack_t * data_addstack(matrix4x4_t start){
	if(data_numstacks >= data_stackspace){
		data_stackspace = data_numstacks + 8; //todo put in some shit here for nice even numbahs
		data_stacklist = realloc(data_stacklist, data_stackspace * sizeof(stack_t));
	}
	stack_t * st = data_stacklist + data_numstacks;
//	st->start = st->current = start;
	st->framesize = st->top = st->frame = 0;


	data_numstacks++;
	return st;
}
