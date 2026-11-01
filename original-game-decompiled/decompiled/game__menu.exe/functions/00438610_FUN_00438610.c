
/* ==== FUN_00438610 @ 00438610 ==== 
 * signature: undefined __register FUN_00438610(void)
 * body: 00438610-004386a0
 */

void FUN_00438610(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar3;
  int in_stack_00000004;
  
  piVar3 = (int *)(in_stack_00000004 + -4);
  iVar1 = *(int *)(*piVar3 + 0x18);
  if (*(char *)(*(int *)(*(int *)(*piVar3 + 0x60) + 0x14) + 0x10) == '\x01') {
    iVar2 = FUN_004365ac(*(int *)(*piVar3 + 0x60),'\x01');
    if (*(int *)(*piVar3 + 0x54) <= iVar2 + iVar1) {
      *(int *)(*piVar3 + 0x54) = iVar2 + iVar1;
    }
    iVar2 = FUN_004384e4(*piVar3,*(int *)(*piVar3 + 0x60),extraout_ECX);
    if (iVar2 - iVar1 <= *(int *)(*piVar3 + 0x54)) {
      *(int *)(*piVar3 + 0x54) = iVar2 - iVar1;
    }
  }
  else {
    iVar2 = FUN_004365ac(*(int *)(*piVar3 + 0x60),'\x02');
    if (*(int *)(*piVar3 + 0x50) <= iVar2 + iVar1) {
      *(int *)(*piVar3 + 0x50) = iVar2 + iVar1;
    }
    iVar2 = FUN_004384e4(*piVar3,*(int *)(*piVar3 + 0x60),extraout_ECX_00);
    if (iVar2 - iVar1 <= *(int *)(*piVar3 + 0x50)) {
      *(int *)(*piVar3 + 0x50) = iVar2 - iVar1;
    }
  }
  return;
}


