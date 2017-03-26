#ifndef STACKHEADER
#define STACKHEADER


typedef struct frame_s {
	matrix4x4_t delt; //current frame's contribution
	matrix4x4_t current; // for ease of use, all frames below contribution
} frame_t;


typedef struct stack_s {
	matrix4x4_t current; //for ease
	int framesize;
	int top;
	frame_t * frames;
} stack_t;



#endif
