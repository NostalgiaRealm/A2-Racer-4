
/* ==== FUN_00454684 @ 00454684 ==== 
 * signature: undefined __register FUN_00454684(int param_1, undefined2 * param_2, undefined2 * param_3)
 * body: 00454684-004546be
 */

void FUN_00454684(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < iVar1) {
    do {
      *param_3 = *param_2;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 1);
      *(undefined1 *)((int)param_3 + 3) = 0xff;
      param_2 = (undefined2 *)((int)param_2 + 3);
      param_3 = param_3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}


