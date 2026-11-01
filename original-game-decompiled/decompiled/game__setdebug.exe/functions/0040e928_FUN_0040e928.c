
/* ==== FUN_0040e928 @ 0040e928 ==== 
 * signature: undefined __register FUN_0040e928(PVOID param_1)
 * body: 0040e928-0040e9df
 */

void FUN_0040e928(PVOID param_1)

{
  code *pcVar1;
  int *piVar2;
  LPCVOID pvVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  _MEMORY_BASIC_INFORMATION *p_Var5;
  SIZE_T SVar6;
  undefined4 uStack_38;
  code *pcStack_34;
  code *pcStack_30;
  _MEMORY_BASIC_INFORMATION local_20;
  
  pcStack_30 = (code *)0x40e93d;
  piVar2 = (int *)FUN_0040f38c(DAT_0044761c);
  pcStack_34 = thunk_FUN_00403434;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  iVar4 = piVar2[2] + -1;
  pcStack_30 = (code *)&stack0xfffffffc;
  pcVar1 = (code *)&stack0xfffffffc;
  if (-1 < iVar4) {
    do {
      SVar6 = 0x1c;
      p_Var5 = &local_20;
      pvVar3 = (LPCVOID)FUN_0040f024(piVar2,iVar4);
      VirtualQuery(pvVar3,p_Var5,SVar6);
      if ((param_1 == (PVOID)0x0) || (param_1 == local_20.AllocationBase)) {
        FUN_0040ef14(piVar2,iVar4);
      }
      iVar4 = iVar4 + -1;
      pcVar1 = pcStack_30;
    } while (iVar4 != -1);
  }
  pcStack_30 = pcVar1;
  iVar4 = (**(code **)(*DAT_00447620 + 0x14))();
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    do {
      SVar6 = 0x1c;
      p_Var5 = &local_20;
      pvVar3 = (LPCVOID)(**(code **)(*DAT_00447620 + 0x18))(DAT_00447620,iVar4);
      VirtualQuery(pvVar3,p_Var5,SVar6);
      if ((param_1 == (PVOID)0x0) || (param_1 == local_20.AllocationBase)) {
        (**(code **)(*DAT_00447620 + 0x44))(DAT_00447620,iVar4);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_0040e9e7;
  pcStack_34 = (code *)0x40e9df;
  FUN_0040f3f0(DAT_0044761c);
  return;
}


