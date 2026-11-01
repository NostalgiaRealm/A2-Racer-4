
/* ==== TPersistent.vmt_008 @ 0040f5c4 ==== 
 * signature: undefined __register TPersistent.vmt_008(int * param_1, undefined4 * param_2)
 * body: 0040f5c4-0040f5d5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPersistent_vmt_008(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,param_1);
    return;
  }
  FUN_0040f5d8(param_1,(int *)0x0);
  return;
}


