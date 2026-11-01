
/* ==== FUN_00424dec @ 00424dec ==== 
 * signature: undefined4 __register FUN_00424dec(int param_1)
 * body: 00424dec-00424e05
 */

undefined4 FUN_00424dec(int param_1)

{
  int iVar1;
  
  if ((PTR_DAT_00446da0[9] != '\0') &&
     (iVar1 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4f)) + -1,
     (byte)iVar1 < 2)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


