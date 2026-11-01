
/* ==== FUN_00424840 @ 00424840 ==== 
 * signature: undefined4 * __fastcall FUN_00424840(undefined4 * param_1)
 * body: 00424840-0042487a
 */

undefined4 * __fastcall FUN_00424840(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_1;
  
  *param_1 = &PTR_FUN_0057654c;
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)param_1 >> 0x18);
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = local_1;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    param_1[1] = puVar1;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


