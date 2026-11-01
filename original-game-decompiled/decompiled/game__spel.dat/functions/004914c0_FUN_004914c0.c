
/* ==== FUN_004914c0 @ 004914c0 ==== 
 * signature: undefined4 * __fastcall FUN_004914c0(undefined4 * param_1)
 * body: 004914c0-0049150c
 */

undefined4 * __fastcall FUN_004914c0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_1;
  
  *param_1 = &PTR_FUN_00576bb8;
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)param_1 >> 0x18);
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = local_1;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    param_1[1] = puVar1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    return param_1;
  }
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  return param_1;
}


