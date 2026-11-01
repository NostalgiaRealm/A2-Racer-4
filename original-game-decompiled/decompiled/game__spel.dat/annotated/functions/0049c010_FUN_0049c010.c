
/* ==== FUN_0049c010 @ 0049c010 ==== 
 * signature: undefined4 * __fastcall FUN_0049c010(undefined4 * param_1)
 * body: 0049c010-0049c035
 */

undefined4 * __fastcall FUN_0049c010(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_00498a90(param_1);
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 0xf) = local_1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_00577184;
  return param_1;
}


