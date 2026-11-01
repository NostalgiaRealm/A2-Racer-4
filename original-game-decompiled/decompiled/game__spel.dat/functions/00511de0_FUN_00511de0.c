
/* ==== FUN_00511de0 @ 00511de0 ==== 
 * signature: undefined4 * __fastcall FUN_00511de0(undefined4 * param_1)
 * body: 00511de0-00511e8a
 */

undefined4 * __fastcall FUN_00511de0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((int)param_1 + 0x66) = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((int)param_1 + 0x96) = 0;
  param_1[0x26] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[0xe] = 0x49742400;
  param_1[0xf] = 0x49742400;
  param_1[0x10] = 0x49742400;
  param_1[0x12] = 0xc9742400;
  param_1[0x13] = 0xc9742400;
  param_1[0x14] = 0xc9742400;
  param_1[0x18] = 0;
  return param_1;
}


