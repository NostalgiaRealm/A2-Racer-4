
/* ==== FUN_0042a890 @ 0042a890 ==== 
 * signature: undefined __register FUN_0042a890(int * param_1)
 * body: 0042a890-0042a8b3
 */

void FUN_0042a890(int *param_1)

{
  if (param_1[0x53] == 0) {
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_0042a890((int *)param_1[9]);
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  return;
}


