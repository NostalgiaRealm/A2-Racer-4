
/* ==== FUN_00428e9c @ 00428e9c ==== 
 * signature: undefined __register FUN_00428e9c(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00428e9c-00428f7a
 */

void FUN_00428e9c(int *param_1,undefined4 param_2,undefined4 param_3)

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
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (PTR_DAT_00446da0[8] != '\0') {
    pcVar1 = (code *)&stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_004405c8(*(int *)PTR_DAT_00446d84,(int *)&local_8,param_3);
      iVar2 = FUN_00407b28((undefined *)param_1[0x56],local_8);
      pcVar1 = pcStack_18;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_004403c8(*(int *)PTR_DAT_00446d84,extraout_EDX,extraout_ECX);
        iVar2 = (**(code **)(*piVar3 + 0x14))();
        pcVar1 = pcStack_18;
        if (iVar2 != 0) {
          hkl = *(HKL *)(*(int *)PTR_DAT_00446d84 + 0x30);
          if ((char)param_1[0x55] != '\0') {
            piVar3 = (int *)FUN_004403c8(*(int *)PTR_DAT_00446d84,extraout_EDX_00,extraout_ECX_00);
            iVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,param_1[0x56]);
            if (-1 < iVar2) {
              piVar3 = (int *)FUN_004403c8(*(int *)PTR_DAT_00446d84,extraout_EDX_01,extraout_ECX_01)
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
    iVar2 = FUN_0042a8b4(param_1);
    FUN_0042ed1c(iVar2,(char)param_1[0x55]);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00428f82;
  pcStack_1c = (code *)0x428f7a;
  FUN_004039b8((int *)&local_8);
  return;
}


