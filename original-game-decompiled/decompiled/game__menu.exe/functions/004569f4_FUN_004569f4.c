
/* ==== FUN_004569f4 @ 004569f4 ==== 
 * signature: undefined4 __register FUN_004569f4(int param_1)
 * body: 004569f4-00456a13
 */

undefined4 FUN_004569f4(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x42c) == '\0') {
    GdiFlush();
  }
  return *(undefined4 *)(param_1 + 0x80);
}


