
/* ==== FUN_0043d6c8 @ 0043d6c8 ==== 
 * signature: undefined4 __register FUN_0043d6c8(int param_1)
 * body: 0043d6c8-0043d710
 */

undefined4 FUN_0043d6c8(int param_1)

{
  undefined4 uVar1;
  HMENU pHVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_00403114(*(int **)(param_1 + 4),(int)&PTR_TPersistent_vmt_000_0043c4d0);
    if ((char)uVar1 == '\0') {
      pHVar2 = CreateMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    else {
      pHVar2 = CreatePopupMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_0043c860((undefined4 *)PTR_PTR_004ab670);
    }
    FUN_0043d4bc(param_1);
  }
  return *(undefined4 *)(param_1 + 0x28);
}


