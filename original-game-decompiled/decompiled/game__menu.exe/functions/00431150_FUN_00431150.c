
/* ==== FUN_00431150 @ 00431150 ==== 
 * signature: undefined4 __register FUN_00431150(void)
 * body: 00431150-0043119e
 */

undefined4 FUN_00431150(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  int *piVar4;
  int in_stack_00000004;
  
  piVar4 = (int *)(in_stack_00000004 + -0x10);
  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  iVar1 = FUN_004317bc(*piVar4);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_00431780(*piVar4,iVar1);
      if (*(char *)(iVar2 + 0x4b) != '\0') {
        return uVar3;
      }
      iVar2 = FUN_00431780(*piVar4,iVar1);
      if (*(char *)(iVar2 + 0x51) != '\x03') {
        return uVar3;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}


