
/* ==== TData.CombinedBtnStateChange @ 0047f804 ==== 
 * signature: undefined __register TData.CombinedBtnStateChange(int param_1, undefined4 param_2, int * param_3, char param_4)
 * body: 0047f804-0047f83f
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TData_CombinedBtnStateChange(int param_1,undefined4 param_2,int *param_3,char param_4)

{
  if ((param_4 == '\x02') || (param_4 == '\x01')) {
    FUN_0042e978(param_3,param_2,param_3);
    (**(code **)(*(int *)param_3[9] + 0x74))();
    if (param_4 == '\x01') {
      FUN_00480780(param_1,*(int *)(param_1 + 0x54));
    }
  }
  return;
}


