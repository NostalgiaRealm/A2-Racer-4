
/* ==== FUN_004d3180 @ 004d3180 ==== 
 * signature: undefined __fastcall FUN_004d3180(undefined1 * param_1)
 * body: 004d3180-004d3195
 */

void __fastcall FUN_004d3180(undefined1 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


