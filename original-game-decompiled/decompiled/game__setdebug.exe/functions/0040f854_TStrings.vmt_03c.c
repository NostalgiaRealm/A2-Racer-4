
/* ==== TStrings.vmt_03c @ 0040f854 ==== 
 * signature: undefined TStrings.vmt_03c(void)
 * body: 0040f854-0040f8dd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_03c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_10;
  int *piStack_c;
  int *piStack_8;
  
  puStack_20 = &stack0xfffffffc;
  uStack_10 = 0;
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_2c = (code *)0x40f87e;
  piStack_c = param_2;
  piStack_8 = param_1;
  FUN_0040f97c(param_1);
  pcStack_30 = thunk_FUN_00403434;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  pcStack_2c = (code *)&stack0xfffffffc;
  iVar2 = (**(code **)(*piStack_c + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      (**(code **)(*piStack_c + 0xc))(piStack_c,iVar4,&uStack_10);
      uVar1 = uStack_10;
      uVar3 = (**(code **)(*piStack_c + 0x18))(piStack_c,iVar4);
      (**(code **)(*piStack_8 + 0x38))(piStack_8,uVar1,uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_0040f8e5;
  pcStack_30 = (code *)0x40f8dd;
  FUN_0040fa38(piStack_8);
  return;
}


