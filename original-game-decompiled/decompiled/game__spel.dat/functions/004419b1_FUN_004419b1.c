
/* ==== FUN_004419b1 @ 004419b1 ==== 
 * signature: int __fastcall FUN_004419b1(int param_1)
 * body: 004419b1-004419bf
 */

int __fastcall FUN_004419b1(int param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_1;
  
  FUN_00441930(param_1 + 0x88);
  FUN_00441930(param_1 + 0x9c);
  *(undefined ***)(param_1 + 200) = &PTR_FUN_00576748;
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined1 *)0x0) {
    uStack_1 = (undefined1)((uint)param_1 >> 0x18);
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = uStack_1;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined1 **)(param_1 + 0xcc) = puVar1;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    return param_1;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return param_1;
}


