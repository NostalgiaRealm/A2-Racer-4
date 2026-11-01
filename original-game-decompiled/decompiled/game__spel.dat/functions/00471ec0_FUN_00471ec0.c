
/* ==== FUN_00471ec0 @ 00471ec0 ==== 
 * signature: undefined4 * __fastcall FUN_00471ec0(undefined4 * param_1)
 * body: 00471ec0-00471f28
 */

undefined4 * __fastcall FUN_00471ec0(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_004704a0(param_1);
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 0x15) = local_1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = &PTR_FUN_00576a08;
  *(undefined1 *)(param_1 + 0x1a) = local_1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x19] = &PTR_FUN_00576a00;
  *(undefined1 *)(param_1 + 0x1f) = local_1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1e] = &PTR_FUN_005769f8;
  *param_1 = &PTR_FUN_005769f0;
  DAT_00712654 = 0;
  return param_1;
}


