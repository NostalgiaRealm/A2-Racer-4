
/* ==== FUN_00433100 @ 00433100 ==== 
 * signature: undefined __cdecl FUN_00433100(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 00433100-004331e6
 */

void __cdecl FUN_00433100(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_004c5e40(0x6b);
  if (iVar1 != 0) {
    *param_1 = *param_1 + param_2;
    FUN_00431ad0(0x6b);
  }
  iVar1 = FUN_004c5e40(0x6d);
  if (iVar1 != 0) {
    *param_1 = *param_1 - param_2;
    FUN_00431ad0(0x6d);
  }
  iVar1 = FUN_004c5e40(0x25);
  if (iVar1 != 0) {
    *param_1 = *param_1 + param_2 * -10;
    FUN_00431ad0(0x25);
  }
  iVar1 = FUN_004c5e40(0x27);
  if (iVar1 != 0) {
    *param_1 = *param_1 + param_2 * 10;
    FUN_00431ad0(0x27);
  }
  iVar1 = FUN_004c5e40(0x52);
  if (iVar1 != 0) {
    *param_1 = 0;
    FUN_00431ad0(0x52);
  }
  if (*param_1 < param_4) {
    *param_1 = param_4;
  }
  if (param_5 < *param_1) {
    *param_1 = param_5;
  }
  FUN_004c5930(0,0xfa,param_3,(byte *)s__d_005989e8);
  return;
}


