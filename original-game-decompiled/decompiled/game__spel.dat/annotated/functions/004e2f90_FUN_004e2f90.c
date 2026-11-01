
/* ==== FUN_004e2f90 @ 004e2f90 ==== 
 * signature: undefined4 * __fastcall FUN_004e2f90(int param_1)
 * body: 004e2f90-004e2fc4
 */

undefined4 * __fastcall FUN_004e2f90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar2 = &PTR_FUN_00577ad0;
    puVar2[1] = uVar1;
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0xc);
    *puVar2 = &PTR_FUN_00578088;
    return puVar2;
  }
  return (undefined4 *)0x0;
}


