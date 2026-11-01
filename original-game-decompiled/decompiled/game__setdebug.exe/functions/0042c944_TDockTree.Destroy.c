
/* ==== TDockTree.Destroy @ 0042c944 ==== 
 * signature: undefined TDockTree.Destroy(void)
 * body: 0042c944-0042c98f
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDockTree_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar2 = FUN_00403074(param_1,param_2);
  if (piVar2[0xc] != 0) {
    iVar1 = piVar2[5];
    *(int *)(iVar1 + 0x28) = piVar2[0xc];
    *(int *)(iVar1 + 0x2c) = piVar2[0xd];
  }
  FUN_0042d968((int)piVar2,(int *)piVar2[0x19],extraout_ECX);
  FUN_00402d14((int *)piVar2[4]);
  TObject_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar2);
  }
  return;
}


