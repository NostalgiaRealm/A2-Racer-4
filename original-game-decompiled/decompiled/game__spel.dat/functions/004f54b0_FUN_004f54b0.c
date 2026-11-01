
/* ==== FUN_004f54b0 @ 004f54b0 ==== 
 * signature: undefined4 * __fastcall FUN_004f54b0(undefined4 * param_1)
 * body: 004f54b0-004f550d
 */

undefined4 * __fastcall FUN_004f54b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004f5450(param_1);
  puVar2 = param_1;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[6] = 0;
  param_1[7] = 0x3ff00000;
  param_1[8] = 1;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xd] = 1;
  param_1[0xe] = 0x40000000;
  param_1[0xf] = 0x3f847ae1;
  param_1[0x10] = 0x40000000;
  param_1[0x12] = 0x40000000;
  param_1[0x14] = 0x40000000;
  param_1[0x11] = 0x3f847ae1;
  param_1[0x13] = 0x3f847ae1;
  param_1[0x15] = 0x3f847ae1;
  return param_1;
}


