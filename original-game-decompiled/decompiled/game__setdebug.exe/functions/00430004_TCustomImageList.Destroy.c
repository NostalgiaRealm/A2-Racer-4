
/* ==== TCustomImageList.Destroy @ 00430004 ==== 
 * signature: undefined TCustomImageList.Destroy(void)
 * body: 00430004-0043006d
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomImageList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_0040f10c((undefined4 *)piVar1[0x10]);
    FUN_00430bc0((int)piVar1,iVar2);
  }
  FUN_00402d14((int *)piVar1[0x11]);
  FUN_004302c8(piVar1);
  FUN_00402d14((int *)piVar1[0x10]);
  piVar1[0x10] = 0;
  if ((int *)piVar1[0x12] != (int *)0x0) {
    FUN_00402d14((int *)piVar1[0x12]);
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


