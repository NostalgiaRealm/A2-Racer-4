
/* ==== FUN_004271b0 @ 004271b0 ==== 
 * signature: undefined4 __register FUN_004271b0(void)
 * body: 004271b0-004271fe
 */

undefined4 FUN_004271b0(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  int *piVar4;
  int in_stack_00000004;
  
  piVar4 = (int *)(in_stack_00000004 + -0x10);
  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  iVar1 = FUN_0042781c(*piVar4);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_004277e0(*piVar4,iVar1);
      if (*(char *)(iVar2 + 0x4b) != '\0') {
        return uVar3;
      }
      iVar2 = FUN_004277e0(*piVar4,iVar1);
      if (*(char *)(iVar2 + 0x51) != '\x03') {
        return uVar3;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}


