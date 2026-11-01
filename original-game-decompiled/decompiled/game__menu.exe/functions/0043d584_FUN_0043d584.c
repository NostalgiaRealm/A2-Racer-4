
/* ==== FUN_0043d584 @ 0043d584 ==== 
 * signature: undefined __register FUN_0043d584(int * param_1, int param_2)
 * body: 0043d584-0043d5a7
 */

void FUN_0043d584(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x17];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
    param_1[0x17] = param_2;
    if (param_2 != 0) {
      *(int **)(param_2 + 0x60) = param_1;
    }
    FUN_0043d5e4(param_1);
  }
  return;
}


