
/* ==== FUN_00432fe8 @ 00432fe8 ==== 
 * signature: undefined4 __register FUN_00432fe8(int param_1)
 * body: 00432fe8-00433030
 */

undefined4 FUN_00432fe8(int param_1)

{
  undefined4 uVar1;
  HMENU pHVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_00402e8c(*(int **)(param_1 + 4),(int)&PTR_TPersistent_vmt_000_00431df0);
    if ((char)uVar1 == '\0') {
      pHVar2 = CreateMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    else {
      pHVar2 = CreatePopupMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_00432180((undefined4 *)PTR_PTR_00446ac0);
    }
    FUN_00432ddc(param_1);
  }
  return *(undefined4 *)(param_1 + 0x28);
}


