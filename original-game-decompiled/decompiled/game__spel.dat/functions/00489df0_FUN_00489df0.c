
/* ==== FUN_00489df0 @ 00489df0 ==== 
 * signature: undefined __stdcall FUN_00489df0(undefined4 * param_1, char param_2)
 * body: 00489df0-00489e4a
 */

void FUN_00489df0(undefined4 *param_1,char param_2)

{
  if (*(char *)(param_1 + 3) != param_2) {
    if (param_2 != '\0') {
      (**(code **)(*(int *)*param_1 + 0x20))(1);
      (**(code **)(*(int *)param_1[1] + 0x20))(1);
      (**(code **)(*(int *)param_1[2] + 0x20))(0);
      *(char *)(param_1 + 3) = param_2;
      return;
    }
    (**(code **)(*(int *)*param_1 + 0x20))(0);
    (**(code **)(*(int *)param_1[1] + 0x20))(0);
    (**(code **)(*(int *)param_1[2] + 0x20))(1);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


