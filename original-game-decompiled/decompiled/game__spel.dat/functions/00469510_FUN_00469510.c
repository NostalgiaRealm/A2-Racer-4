
/* ==== FUN_00469510 @ 00469510 ==== 
 * signature: undefined4 * __fastcall FUN_00469510(undefined4 * param_1)
 * body: 00469510-00469544
 */

undefined4 * __fastcall FUN_00469510(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = &PTR_FUN_005769a4;
  *(undefined1 *)(param_1 + 1) = local_1;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[2] = pvVar1;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00576994;
  return param_1;
}


