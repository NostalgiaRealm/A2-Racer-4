
/* ==== FUN_004edcf0 @ 004edcf0 ==== 
 * signature: undefined __fastcall FUN_004edcf0(undefined1 * param_1)
 * body: 004edcf0-004edd27
 */

void __fastcall FUN_004edcf0(undefined1 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x20) = 0x3dcccccd;
  param_1[0x24] = 0;
  return;
}


