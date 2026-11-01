
/* ==== TPicture.dyn_fffd @ 00419408 ==== 
 * signature: undefined __register TPicture.dyn_fffd(int param_1)
 * body: 00419408-00419429
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPicture_dyn_fffd(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  }
  return;
}


