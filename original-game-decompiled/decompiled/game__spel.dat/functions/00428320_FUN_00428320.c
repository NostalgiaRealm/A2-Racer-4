
/* ==== FUN_00428320 @ 00428320 ==== 
 * signature: undefined __cdecl FUN_00428320(int param_1, float param_2, char param_3)
 * body: 00428320-00428458
 */

void __cdecl FUN_00428320(int param_1,float param_2,char param_3)

{
  float *pfVar1;
  float10 fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14 [4];
  
  fVar2 = FUN_00428040(param_1,0,param_2);
  FUN_00428170(&local_20,param_1,(float)fVar2,0,param_2,param_3);
  fVar2 = FUN_00428040(param_1,2,param_2);
  pfVar1 = (float *)FUN_00428170(local_14,param_1,(float)fVar2,2,param_2,param_3);
  local_20 = *pfVar1 * 0.01;
  local_1c = pfVar1[1];
  local_18 = pfVar1[2];
  FUN_00428250(param_1);
  FUN_004c5930(0,0,0x78,(byte *)s_frontSteer___f__f__f__0059652c);
  FUN_004c5930(0,0,0xa0,(byte *)s_rearSteer___f__f__f__00596544);
  return;
}


