
/* ==== FUN_00440b08 @ 00440b08 ==== 
 * signature: undefined4 __register FUN_00440b08(void)
 * body: 00440b08-00440b5d
 */

undefined4 FUN_00440b08(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int in_stack_00000004;
  
  iVar1 = FUN_00440214(*(int *)(in_stack_00000004 + -0x10));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_00440200(*(int *)(in_stack_00000004 + -0x10),iVar1);
      if ((((*(int *)(iVar2 + 0x24) == 0) && ((*(byte *)(iVar2 + 0x20) & 0x10) == 0)) &&
          (*(char *)(iVar2 + 0x4b) != '\0')) &&
         ((*(char *)(iVar2 + 0x47) != '\0' && (*(char *)(iVar2 + 0x213) != '\x01')))) {
        return CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}


