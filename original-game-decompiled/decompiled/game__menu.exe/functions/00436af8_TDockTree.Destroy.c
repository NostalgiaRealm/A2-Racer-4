
/* ==== TDockTree.Destroy @ 00436af8 ==== 
 * signature: undefined TDockTree.Destroy(void)
 * body: 00436af8-00436b43
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDockTree_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar2 = FUN_004032fc(param_1,param_2);
  if (piVar2[0xc] != 0) {
    iVar1 = piVar2[5];
    *(int *)(iVar1 + 0x28) = piVar2[0xc];
    *(int *)(iVar1 + 0x2c) = piVar2[0xd];
  }
  FUN_00437b1c((int)piVar2,(int *)piVar2[0x19],extraout_ECX);
  FUN_00402f9c((int *)piVar2[4]);
  TObject_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar2);
  }
  return;
}


