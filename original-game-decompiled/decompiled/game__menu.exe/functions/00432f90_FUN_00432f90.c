
/* ==== FUN_00432f90 @ 00432f90 ==== 
 * signature: undefined __register FUN_00432f90(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00432f90-0043306e
 */

void FUN_00432f90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  HKL hkl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (PTR_DAT_004aba14[8] != '\0') {
    pcVar1 = (code *)&stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_0044b568(*(int *)PTR_DAT_004ab9f8,(int *)&local_8,param_3);
      iVar2 = FUN_00408364((undefined *)param_1[0x56],local_8);
      pcVar1 = pcStack_18;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_0044b368(*(int *)PTR_DAT_004ab9f8,extraout_EDX,extraout_ECX);
        iVar2 = (**(code **)(*piVar3 + 0x14))();
        pcVar1 = pcStack_18;
        if (iVar2 != 0) {
          hkl = *(HKL *)(*(int *)PTR_DAT_004ab9f8 + 0x30);
          if ((char)param_1[0x55] != '\0') {
            piVar3 = (int *)FUN_0044b368(*(int *)PTR_DAT_004ab9f8,extraout_EDX_00,extraout_ECX_00);
            iVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,param_1[0x56]);
            if (-1 < iVar2) {
              piVar3 = (int *)FUN_0044b368(*(int *)PTR_DAT_004ab9f8,extraout_EDX_01,extraout_ECX_01)
              ;
              hkl = (HKL)(**(code **)(*piVar3 + 0x18))(piVar3,iVar2);
            }
          }
          ActivateKeyboardLayout(hkl,1);
          pcVar1 = pcStack_18;
        }
      }
    }
    pcStack_18 = pcVar1;
    iVar2 = FUN_004349e0(param_1);
    FUN_00438ed0(iVar2,(char)param_1[0x55]);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00433076;
  pcStack_1c = (code *)0x43306e;
  FUN_00403c5c((int *)&local_8);
  return;
}


