
/* ==== FUN_004f6610 @ 004f6610 ==== 
 * signature: undefined __fastcall FUN_004f6610(int * param_1)
 * body: 004f6610-004f6650
 */

void __fastcall FUN_004f6610(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  *param_1 = 0;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))(1);
  }
  param_1[2] = 0;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))(1);
  }
  param_1[3] = 0;
  return;
}


