
/* ==== FUN_00409390 @ 00409390 ==== 
 * signature: undefined __fastcall FUN_00409390(undefined1 * param_1)
 * body: 00409390-004093a3
 */

void __fastcall FUN_00409390(undefined1 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


