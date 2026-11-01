
/* ==== FUN_0042eae4 @ 0042eae4 ==== 
 * signature: undefined1 __register FUN_0042eae4(void)
 * body: 0042eae4-0042eb6e
 */

undefined1 FUN_0042eae4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int in_stack_00000004;
  RECT local_28;
  tagRECT local_18;
  undefined1 local_5;
  
  local_5 = 1;
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x24) + 0x134);
  iVar2 = FUN_0041030c((int)puVar1,*(int *)(in_stack_00000004 + -4));
  do {
    do {
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = iVar2 + -1;
      iVar3 = FUN_004102b0(puVar1,iVar2);
    } while ((*(char *)(iVar3 + 0x47) == '\0') || ((*(byte *)(iVar3 + 0x40) & 0x40) == 0));
    FUN_0042e13c(iVar3,&local_28.left);
    IntersectRect(&local_18,(RECT *)(in_stack_00000004 + -0x14),&local_28);
    BVar4 = EqualRect(&local_18,(RECT *)(in_stack_00000004 + -0x14));
  } while (BVar4 == 0);
  return local_5;
}


