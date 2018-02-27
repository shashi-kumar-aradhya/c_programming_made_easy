#include <stdio.h>
#include <stdlib.h>

typedef unsigned char U8;
typedef signed short int U16;
typedef signed int U32;
typedef char S8;
typedef short int S16;
typedef int S32;


struct block_write
{
	U16 total_length;

	union 
	{
	  struct ams_dsp_sun_wdata
	  {	
	     U16 comm_length;
	     U16 message_id;
             U16 param_data[32];		
	  }dsp;
	  U16 cmd_data[32];
	}un;	

};

union {
	void *pvoid;

	U8 *u8;
	U16 *u16;
	U32 *u32;
	
	S8 *s8;
	S16 *s16;
	S32 *s32;
}msgptr;
int main()
{
        struct block_write *blk = (struct block_write *)malloc(sizeof(struct block_write));
	msgptr.u16 = blk->un.cmd_data;
	
	printf("size = %lu\n", sizeof(*blk));
	printf("address total_length = %p\n", &blk->total_length);
	printf("address un.dsp.comm_length = %p\n",&blk->un.dsp.comm_length);
	printf("address un.dsp.message_id = %p\n", &blk->un.dsp.message_id);
	printf("address un.dsp.param_data = %p\n", &blk->un.dsp.param_data);
	printf("address un.cmd_data = %p\n", &blk->un.cmd_data);
	printf("address msgptr.u16 = %p\n", msgptr.u16);
	printf("address msgptr.pvoid= %p\n", msgptr.pvoid);
	printf("address msgptr.u8= %p\n", msgptr.u8);
	printf("address msgptr.u32= %p\n", msgptr.u32);
	printf("address msgptr.s8= %p\n", msgptr.s8);
	printf("address msgptr.s16= %p\n", msgptr.s16);
	printf("address msgptr.s32= %p\n", msgptr.s32);
	*msgptr.s8++ = 1;
	printf("address msgptr.s8= %p\n", msgptr.s8);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("value *msgptr.u8= %u\n", *msgptr.u8);
	printf("value *msgptr.u16= %u\n", *msgptr.u16);
	printf("value *msgptr.u32= %u\n", *msgptr.u32);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("value *msgptr.s16= %u\n", *msgptr.s16);
	printf("value *msgptr.s32= %u\n", *msgptr.s32);
	*msgptr.s8++ = 2;
	printf("address msgptr.s8= %p\n", msgptr.s8);
	printf("value *msgptr.u8= %u\n", *msgptr.u8);
	printf("value *msgptr.u16= %u\n", *msgptr.u16);
	printf("value *msgptr.u32= %u\n", *msgptr.u32);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("value *msgptr.s16= %u\n", *msgptr.s16);
	printf("value *msgptr.s32= %u\n", *msgptr.s32);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("****************decrement value****************\n");
	msgptr.s8--;
	printf("address msgptr.s8= %p\n", msgptr.s8);
	printf("value *msgptr.u8= %u\n", *msgptr.u8);
	printf("value *msgptr.u16= %u\n", *msgptr.u16);
	printf("value *msgptr.u32= %u\n", *msgptr.u32);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("value *msgptr.s16= %u\n", *msgptr.s16);
	printf("value *msgptr.s32= %u\n", *msgptr.s32);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("****************decrement value****************\n");
	printf("****************decrement value-2****************\n");
	*msgptr.s16 = (int)0xf0f0;
	printf("address msgptr.s8= %p\n", msgptr.s8);
	printf("value *msgptr.u8= %x\n", *msgptr.u8);
	printf("value *msgptr.u16= %x\n", *msgptr.u16);
	printf("value *msgptr.u32= %x\n", *msgptr.u32);
	printf("value *msgptr.s8= %x\n", *msgptr.s8);
	printf("value *msgptr.s16= %x\n", *msgptr.s16);
	printf("value *msgptr.s32= %x\n", *msgptr.s32);
	printf("value *msgptr.s8= %x\n", *msgptr.s8);
	printf("modification s16 =0xf0\n");
	*msgptr.s16 = (int)0xf012;
	printf("address msgptr.s8= %p\n", msgptr.s8);
	printf("value *msgptr.u8= %x\n", *msgptr.u8);
	printf("value *msgptr.u16= %x\n", *msgptr.u16);
	printf("value *msgptr.u32= %x\n", *msgptr.u32);
	printf("value *msgptr.s8= %x\n", *msgptr.s8);
	printf("value *msgptr.s16= %x\n", *msgptr.s16);
	printf("value *msgptr.s32= %x\n", *msgptr.s32);
	printf("value *msgptr.s8= %x\n", *msgptr.s8);
	printf("****************decrement value****************\n");
	*msgptr.s8++ = 3;
	printf("address msgptr.s8= %p\n", msgptr.s8);
	printf("value *msgptr.u8= %u\n", *msgptr.u8);
	printf("value *msgptr.u16= %u\n", *msgptr.u16);
	printf("value *msgptr.u32= %u\n", *msgptr.u32);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("value *msgptr.s16= %u\n", *msgptr.s16);
	printf("value *msgptr.s32= %u\n", *msgptr.s32);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	*msgptr.u8++ = 4;
	printf("address msgptr.s8= %p\n", msgptr.s8);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("value *msgptr.u8= %u\n", *msgptr.u8);
	printf("value *msgptr.u16= %u\n", *msgptr.u16);
	printf("value *msgptr.u32= %u\n", *msgptr.u32);
	printf("value *msgptr.s8= %u\n", *msgptr.s8);
	printf("value *msgptr.s16= %u\n", *msgptr.s16);
	printf("value *msgptr.s32= %u\n", *msgptr.s32);
	
	*msgptr.u8 = 4;
	printf("value *msgptr.u8= %u\n", *msgptr.u8);
	return 0;

}
