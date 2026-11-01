
/* ==== FUN_004e2fd0 @ 004e2fd0 ==== 
 * signature: undefined4 * __fastcall FUN_004e2fd0(int param_1)
 * body: 004e2fd0-004e2ff2
 */

undefined4 * __fastcall FUN_004e2fd0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(8);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar2 = &PTR_FUN_005780b0;
    puVar2[1] = uVar1;
    return puVar2;
  }
  return (undefined4 *)0x0;
}


