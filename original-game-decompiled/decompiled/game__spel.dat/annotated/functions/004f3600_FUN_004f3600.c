
/* ==== FUN_004f3600 @ 004f3600 ==== 
 * signature: undefined __cdecl FUN_004f3600(byte * param_1, byte * param_2, float * param_3, float * param_4, float * param_5, float * param_6, float * param_7, float * param_8, float * param_9)
 * body: 004f3600-004f36a4
 */

void __cdecl
FUN_004f3600(byte *param_1,byte *param_2,float *param_3,float *param_4,float *param_5,float *param_6
            ,float *param_7,float *param_8,float *param_9)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  if ((*param_1 & 0xc) == 0) {
    FUN_004f3390(param_1,param_3,param_5,param_6,&local_20);
  }
  else {
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
  }
  if ((*param_2 & 0xc) == 0) {
    FUN_004f3390(param_2,param_4,param_7,param_8,&local_10);
  }
  else {
    local_10 = 0.0;
    local_c = 0.0;
    local_8 = 0.0;
  }
  *param_9 = local_20 - local_10;
  param_9[1] = local_1c - local_c;
  param_9[2] = local_18 - local_8;
  return;
}


