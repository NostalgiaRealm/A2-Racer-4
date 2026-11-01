
/* ==== FUN_00498a90 @ 00498a90 ==== 
 * signature: undefined __fastcall FUN_00498a90(undefined4 * param_1)
 * body: 00498a90-00498acf
 */

void __fastcall FUN_00498a90(undefined4 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 1) = local_1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = local_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = local_1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_00577134;
  param_1[0xe] = 0;
  return;
}


