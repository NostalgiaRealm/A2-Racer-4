
/* ==== FUN_004a1430 @ 004a1430 ==== 
 * signature: undefined __fastcall FUN_004a1430(int param_1)
 * body: 004a1430-004a148d
 */

void __fastcall FUN_004a1430(int param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    puVar3 = FUN_00512000(*(void **)(param_1 + 0x14),(int *)0x0);
    *(undefined4 **)(param_1 + 0x1c) = puVar3;
    puVar3 = operator_new(8);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      *puVar3 = &PTR_FUN_005771d0;
      puVar3[1] = uVar1;
    }
    pvVar2 = *(LPVOID *)(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x18) = puVar3;
    if (pvVar2 != (LPVOID)0x0) {
      FUN_00511e90((int)pvVar2);
      FUN_0054b339(pvVar2);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


