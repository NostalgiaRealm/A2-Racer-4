
/* ==== FUN_004dd3f0 @ 004dd3f0 ==== 
 * signature: undefined4 * __fastcall FUN_004dd3f0(int param_1)
 * body: 004dd3f0-004dd420
 */

undefined4 * __fastcall FUN_004dd3f0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar2 = &PTR_FUN_00577ad0;
    puVar2[1] = uVar1;
    *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(param_1 + 8);
    *puVar2 = &PTR_FUN_00577a80;
    return puVar2;
  }
  return (undefined4 *)0x0;
}


