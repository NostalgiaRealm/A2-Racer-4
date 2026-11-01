
/* ==== FUN_0042ed8c @ 0042ed8c ==== 
 * signature: undefined4 __register FUN_0042ed8c(int param_1)
 * body: 0042ed8c-0042eda5
 */

undefined4 FUN_0042ed8c(int param_1)

{
  int iVar1;
  
  if ((PTR_DAT_004aba14[9] != '\0') &&
     (iVar1 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4f)) + -1,
     (byte)iVar1 < 2)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


