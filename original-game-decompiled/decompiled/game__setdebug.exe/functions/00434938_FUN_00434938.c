
/* ==== FUN_00434938 @ 00434938 ==== 
 * signature: undefined4 __register FUN_00434938(int param_1)
 * body: 00434938-00434945
 */

undefined4 FUN_00434938(int param_1)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
}


