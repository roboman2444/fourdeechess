#ifndef OPCODEHEADER
#define OPCODEHEADER



typedef struct opcode_s{
	
} opcode_t;

typedef struct instruction_s {
	opcode_t op;
	vec3_t pos;	//for 3d
	char sticky;
} instruction_t;




#endif
