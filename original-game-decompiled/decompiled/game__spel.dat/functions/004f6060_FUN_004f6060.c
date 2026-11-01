
/* ==== FUN_004f6060 @ 004f6060 ==== 
 * signature: undefined __fastcall FUN_004f6060(ushort * param_1)
 * body: 004f6060-004f60c6
 */

void __fastcall FUN_004f6060(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004f5a90((uint)*param_1 * 8 + 8);
  iVar3 = 0;
  *param_1 = *param_1 * 2 + 1;
  if (param_1[1] != 0) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + -4 + iVar3 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 2) + -4 + iVar3 * 4);
    } while (iVar3 < (int)(uint)param_1[1]);
  }
  puVar1 = *(ushort **)(param_1 + 2);
  if ((puVar1 != param_1 + 4) && (puVar1 != (ushort *)0x0)) {
    FUN_00559d4e(puVar1);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *(int *)(param_1 + 2) = iVar2;
  return;
}


