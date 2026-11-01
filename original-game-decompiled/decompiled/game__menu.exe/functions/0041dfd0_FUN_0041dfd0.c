
/* ==== FUN_0041dfd0 @ 0041dfd0 ==== 
 * signature: undefined4 __register FUN_0041dfd0(int param_1)
 * body: 0041dfd0-0041dfe9
 */

undefined4 FUN_0041dfd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(short *)(iVar1 + 0x28) == 1) && (*(short *)(iVar1 + 0x2a) == 1)) {
    return CONCAT31((int3)((uint)(iVar1 + 0x18) >> 8),1);
  }
  return 0;
}


