
/* ==== FUN_00433020 @ 00433020 ==== 
 * signature: undefined __cdecl FUN_00433020(float * param_1, float param_2, int param_3)
 * body: 00433020-004330f1
 */

void __cdecl FUN_00433020(float *param_1,float param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004c5e40(0x6b);
  if (iVar1 != 0) {
    *param_1 = param_2 + *param_1;
    FUN_00431ad0(0x6b);
  }
  iVar1 = FUN_004c5e40(0x6d);
  if (iVar1 != 0) {
    *param_1 = *param_1 - param_2;
    FUN_00431ad0(0x6d);
  }
  iVar1 = FUN_004c5e40(0x25);
  if (iVar1 != 0) {
    *param_1 = *param_1 - param_2 * 10.0;
    FUN_00431ad0(0x25);
  }
  iVar1 = FUN_004c5e40(0x27);
  if (iVar1 != 0) {
    *param_1 = param_2 * 10.0 + *param_1;
    FUN_00431ad0(0x27);
  }
  iVar1 = FUN_004c5e40(0x52);
  if (iVar1 != 0) {
    *param_1 = 0.0;
    FUN_00431ad0(0x52);
  }
  FUN_004c5930(0,0xfa,param_3,(byte *)s__f_005989dc);
  return;
}


