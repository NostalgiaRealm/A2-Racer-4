
/* ==== FUN_0040fe38 @ 0040fe38 ==== 
 * signature: undefined __register FUN_0040fe38(int * param_1, undefined * param_2)
 * body: 0040fe38-0040fede
 */

void FUN_0040fe38(int *param_1,undefined *param_2)

{
  int iVar1;
  PCNZCH pCVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  undefined *local_18;
  undefined *local_14;
  int local_10;
  undefined *local_c;
  int *local_8;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  local_18 = (undefined *)0x0;
  local_14 = (undefined *)0x0;
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar1 + -1) {
    local_10 = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_10,&local_14);
      pCVar2 = FUN_0040b3e8(&DAT_0040fef8,local_14);
      if (pCVar2 != (PCNZCH)0x0) {
        FUN_00403e40((int)local_14,1,(uint)(pCVar2 + -1),(int *)&local_18);
        iVar3 = FUN_00407b28(local_18,local_c);
        if (iVar3 == 0) goto LAB_0040fec4;
      }
      local_10 = local_10 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_10 = -1;
LAB_0040fec4:
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0040fee6;
  pcStack_28 = (code *)0x40fede;
  FUN_004039dc((int *)&local_18,2);
  return;
}


