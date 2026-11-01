
/* ==== FUN_00427b90 @ 00427b90 ==== 
 * signature: undefined __cdecl FUN_00427b90(int param_1, float * param_2)
 * body: 00427b90-00427c08
 */

void __cdecl FUN_00427b90(int param_1,float *param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_2 + 0x19) == '\x01') {
    FUN_00402ea0(param_2,100.0);
  }
  iVar1 = FUN_004c5e40(0x46);
  if ((iVar1 != 0) && (DAT_006fb950 == 1)) {
    FUN_00458440();
  }
  FUN_00428c70((float)param_1,param_2);
  iVar1 = FUN_004c5e40(0x11);
  if (iVar1 != 0) {
    iVar1 = FUN_004c5e40(0x20);
    if (iVar1 != 0) {
      iVar1 = FUN_004c5e40(0x43);
      if ((iVar1 != 0) && (DAT_006fb950 == 1)) {
        FUN_004351f0();
        return;
      }
    }
  }
  return;
}


