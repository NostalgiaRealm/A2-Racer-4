
/* ==== FUN_0044c4ec @ 0044c4ec ==== 
 * signature: undefined4 __register FUN_0044c4ec(int param_1)
 * body: 0044c4ec-0044c503
 */

undefined4 FUN_0044c4ec(int param_1)

{
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


