
/* ==== FUN_0044a2e0 @ 0044a2e0 ==== 
 * signature: undefined4 __register FUN_0044a2e0(void)
 * body: 0044a2e0-0044a332
 */

undefined4 FUN_0044a2e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x2c8);
  if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      iVar1 = FUN_004102b0(*(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x2c8),iVar4);
      uVar2 = FUN_00439a14(iVar1,*(int *)(in_stack_00000004 + -8));
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


