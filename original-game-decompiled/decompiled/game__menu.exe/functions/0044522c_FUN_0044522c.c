
/* ==== FUN_0044522c @ 0044522c ==== 
 * signature: undefined __register FUN_0044522c(int param_1, int param_2)
 * body: 0044522c-00445242
 */

void FUN_0044522c(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_00445748(*(int *)(param_1 + 4));
  return;
}


