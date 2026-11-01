
/* ==== FUN_004f3560 @ 004f3560 ==== 
 * signature: undefined __cdecl FUN_004f3560(byte * param_1, byte * param_2, float * param_3, float * param_4, float * param_5)
 * body: 004f3560-004f35f2
 */

void __cdecl FUN_004f3560(byte *param_1,byte *param_2,float *param_3,float *param_4,float *param_5)

{
  float local_10;
  float local_c;
  float local_8;
  
  if ((param_1 == (byte *)0x0) || ((*param_1 & 0xc) != 0)) {
    *param_5 = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
  }
  else {
    FUN_004f3390(param_1,param_3,(float *)(param_1 + 0xa4),(float *)(param_1 + 0x94),param_5);
  }
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0xc) == 0)) {
    FUN_004f3390(param_2,param_4,(float *)(param_2 + 0xa4),(float *)(param_2 + 0x94),&local_10);
    *param_5 = *param_5 - local_10;
    param_5[1] = param_5[1] - local_c;
    param_5[2] = param_5[2] - local_8;
  }
  return;
}


