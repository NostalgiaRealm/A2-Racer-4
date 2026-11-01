
/* ==== FUN_004a0210 @ 004a0210 ==== 
 * signature: undefined4 * __fastcall FUN_004a0210(undefined4 * param_1)
 * body: 004a0210-004a0297
 */

undefined4 * __fastcall FUN_004a0210(undefined4 *param_1)

{
  undefined1 local_d;
  
  FUN_004f54b0(param_1);
  *(undefined1 *)(param_1 + 0x1c) = local_d;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x29] = 0;
  return param_1;
}


