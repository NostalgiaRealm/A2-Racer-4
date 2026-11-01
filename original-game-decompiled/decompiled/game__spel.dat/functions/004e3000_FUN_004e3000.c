
/* ==== FUN_004e3000 @ 004e3000 ==== 
 * signature: undefined4 * __fastcall FUN_004e3000(int param_1)
 * body: 004e3000-004e302e
 */

undefined4 * __fastcall FUN_004e3000(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar2 = &PTR_FUN_00577ad0;
    puVar2[1] = uVar1;
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    *puVar2 = &PTR_FUN_005780d8;
    return puVar2;
  }
  return (undefined4 *)0x0;
}


