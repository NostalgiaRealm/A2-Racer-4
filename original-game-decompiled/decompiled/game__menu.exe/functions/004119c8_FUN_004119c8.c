
/* ==== FUN_004119c8 @ 004119c8 ==== 
 * signature: undefined __register FUN_004119c8(int * param_1, undefined * param_2)
 * body: 004119c8-00411a6e
 */

void FUN_004119c8(int *param_1,undefined *param_2)

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
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar1 + -1) {
    local_10 = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_10,&local_14);
      pCVar2 = FUN_0040c0d8(&DAT_00411a88,local_14);
      if (pCVar2 != (PCNZCH)0x0) {
        FUN_004040e4((int)local_14,1,(uint)(pCVar2 + -1),(int *)&local_18);
        iVar3 = FUN_00408364(local_18,local_c);
        if (iVar3 == 0) goto LAB_00411a54;
      }
      local_10 = local_10 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_10 = -1;
LAB_00411a54:
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00411a76;
  pcStack_28 = (code *)0x411a6e;
  FUN_00403c80((int *)&local_18,2);
  return;
}


