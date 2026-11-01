
/* ==== TCustomEdit.vmt_0d0 @ 00426798 ==== 
 * signature: undefined __register TCustomEdit.vmt_0d0(int * param_1, char * param_2, int param_3)
 * body: 00426798-00426821
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomEdit_vmt_0d0(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  int local_c;
  
  pcStack_20 = (code *)0x4267b2;
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  pcStack_20 = (code *)0x4267be;
  local_c = (**(code **)(*param_1 + 0xb8))();
  pcStack_20 = (code *)0x4267c8;
  iVar2 = FUN_0042e6a8((int)param_1);
  pcStack_20 = (code *)0x4267ce;
  piVar3 = FUN_00408d20(iVar2 + 1);
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  iVar2 = FUN_00408d34((int)piVar3);
  FUN_0042e6b8((int)param_1,piVar3,iVar2);
  if (param_3 <= local_c) {
    local_c = param_3 + -1;
  }
  FUN_00408bb4(param_2,(char *)((int)piVar3 + iVar1),local_c);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00426829;
  pcStack_24 = (code *)0x426821;
  FUN_00408d6c((int)piVar3);
  return;
}


