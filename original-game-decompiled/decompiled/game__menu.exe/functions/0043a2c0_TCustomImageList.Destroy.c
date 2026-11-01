
/* ==== TCustomImageList.Destroy @ 0043a2c0 ==== 
 * signature: undefined __register TCustomImageList.Destroy(int * param_1, char param_2)
 * body: 0043a2c0-0043a329
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomImageList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_00410398((undefined4 *)piVar1[0x10]);
    FUN_0043b2a0((int)piVar1,iVar2);
  }
  FUN_00402f9c((int *)piVar1[0x11]);
  FUN_0043a61c(piVar1);
  FUN_00402f9c((int *)piVar1[0x10]);
  piVar1[0x10] = 0;
  if ((int *)piVar1[0x12] != (int *)0x0) {
    FUN_00402f9c((int *)piVar1[0x12]);
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


