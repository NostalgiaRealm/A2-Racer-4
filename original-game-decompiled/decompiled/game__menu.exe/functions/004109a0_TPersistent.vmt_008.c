
/* ==== TPersistent.vmt_008 @ 004109a0 ==== 
 * signature: undefined __register TPersistent.vmt_008(int * param_1, undefined4 * param_2)
 * body: 004109a0-004109b1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPersistent_vmt_008(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,param_1);
    return;
  }
  FUN_004109b4(param_1,(int *)0x0);
  return;
}


