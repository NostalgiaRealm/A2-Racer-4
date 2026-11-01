
/* ==== TMenuItem.Destroy @ 00432a88 ==== 
 * signature: undefined TMenuItem.Destroy(void)
 * body: 00432a88-00432b3a
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMenuItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0043709c(DAT_004477b8,(int)piVar1);
  if ((int *)piVar1[0x16] != (int *)0x0) {
    FUN_00434c88((int *)piVar1[0x16],(int)piVar1);
    piVar1[0x16] = 0;
  }
  while( true ) {
    iVar3 = FUN_00434938((int)piVar1);
    if (iVar3 < 1) break;
    piVar2 = (int *)FUN_00434948((int)piVar1,0);
    FUN_00402d14(piVar2);
  }
  if (piVar1[10] != 0) {
    FUN_00432ea4(piVar1,0);
    DestroyMenu((HMENU)piVar1[10]);
  }
  FUN_00402d14((int *)piVar1[0x14]);
  FUN_0040bc78(piVar1 + 0xe);
  FUN_0040bc78(piVar1 + 0x1b);
  if (*(ushort *)(piVar1 + 0x11) != 0) {
    FUN_0040f4f4(DAT_004477c0,(uint)*(ushort *)(piVar1 + 0x11),'\0');
  }
  if ((int *)piVar1[0x10] != (int *)0x0) {
    FUN_00402d14((int *)piVar1[0x10]);
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


