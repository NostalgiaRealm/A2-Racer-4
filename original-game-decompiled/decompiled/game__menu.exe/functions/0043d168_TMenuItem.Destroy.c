
/* ==== TMenuItem.Destroy @ 0043d168 ==== 
 * signature: undefined TMenuItem.Destroy(void)
 * body: 0043d168-0043d21a
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMenuItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00441838(DAT_004ac7c8,(int)piVar1);
  if ((int *)piVar1[0x16] != (int *)0x0) {
    FUN_0043f368((int *)piVar1[0x16],(int)piVar1);
    piVar1[0x16] = 0;
  }
  while( true ) {
    iVar3 = FUN_0043f018((int)piVar1);
    if (iVar3 < 1) break;
    piVar2 = (int *)FUN_0043f028((int)piVar1,0);
    FUN_00402f9c(piVar2);
  }
  if (piVar1[10] != 0) {
    FUN_0043d584(piVar1,0);
    DestroyMenu((HMENU)piVar1[10]);
  }
  FUN_00402f9c((int *)piVar1[0x14]);
  FUN_0040c968(piVar1 + 0xe);
  FUN_0040c968(piVar1 + 0x1b);
  if (*(ushort *)(piVar1 + 0x11) != 0) {
    FUN_004108b8(DAT_004ac7d0,(uint)*(ushort *)(piVar1 + 0x11),'\0');
  }
  if ((int *)piVar1[0x10] != (int *)0x0) {
    FUN_00402f9c((int *)piVar1[0x10]);
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


