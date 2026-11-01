
/* ==== FUN_004cfd80 @ 004cfd80 ==== 
 * signature: undefined __fastcall FUN_004cfd80(undefined4 * param_1)
 * body: 004cfd80-004cfdb0
 */

void __fastcall FUN_004cfd80(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_00578f04;
  uVar1 = param_1[0xd];
  if (uVar1 != 0) {
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}


