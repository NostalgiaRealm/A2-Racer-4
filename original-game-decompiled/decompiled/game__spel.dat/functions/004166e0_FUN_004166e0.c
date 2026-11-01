
/* ==== FUN_004166e0 @ 004166e0 ==== 
 * signature: undefined1 * __fastcall FUN_004166e0(undefined1 * param_1)
 * body: 004166e0-00416741
 */

undefined1 * __fastcall FUN_004166e0(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_1;
  
  iVar1 = 3;
  puVar2 = param_1;
  do {
    FUN_004166d0(puVar2);
    puVar2 = puVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_00576460;
  puVar2 = operator_new(0x10);
  if (puVar2 != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)param_1 >> 0x18);
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = local_1;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined1 **)(param_1 + 0x1c) = puVar2;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}


