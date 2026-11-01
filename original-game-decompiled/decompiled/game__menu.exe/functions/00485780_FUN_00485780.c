
/* ==== FUN_00485780 @ 00485780 ==== 
 * signature: undefined __register FUN_00485780(int param_1, char param_2)
 * body: 00485780-004857c3
 */

void FUN_00485780(int param_1,char param_2)

{
  WPARAM WVar1;
  
  if (param_2 != *(char *)(param_1 + 0x1f9)) {
    if (param_2 == '\0') {
      WVar1 = FUN_004855fc(param_1);
      *(undefined1 *)(param_1 + 0x1f9) = 0;
      FUN_00485b5c(*(int **)(param_1 + 500),param_1,WVar1);
    }
    else {
      *(undefined1 *)(param_1 + 0x1f9) = 1;
      FUN_00485e74(*(int **)(param_1 + 500),param_1);
    }
  }
  return;
}


