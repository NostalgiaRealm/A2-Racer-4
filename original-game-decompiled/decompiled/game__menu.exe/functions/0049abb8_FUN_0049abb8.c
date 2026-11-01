
/* ==== FUN_0049abb8 @ 0049abb8 ==== 
 * signature: undefined FUN_0049abb8(void)
 * body: 0049abb8-0049ac03
 */

void FUN_0049abb8(undefined4 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)param_2;
  uVar1 = in(param_2);
  iVar2 = FUN_0049ac54();
  if (iVar2 == 0) {
    iVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
  }
  else {
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
  }
  FUN_0049ac68((int *)CONCAT31((int3)((uint)param_1 >> 8),uVar1),uVar3);
  return;
}


