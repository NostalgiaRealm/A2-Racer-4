
/* ==== FUN_004865c4 @ 004865c4 ==== 
 * signature: undefined4 __register FUN_004865c4(int param_1)
 * body: 004865c4-004865e2
 */

undefined4 FUN_004865c4(int param_1)

{
  if (param_1 == 1) {
    return *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0x50) + 0x24);
  }
  return *(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xdc);
}


