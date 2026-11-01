
/* ==== FUN_00545050 @ 00545050 ==== 
 * signature: undefined __fastcall FUN_00545050(int param_1)
 * body: 00545050-00545104
 */

void __fastcall FUN_00545050(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x40);
  FUN_00543f70(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x30);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar1 = iVar4 * 8;
      iVar2 = iVar4 * 8;
      iVar3 = iVar4 * 8;
      iVar4 = iVar4 + 1;
      *(double *)(*(int *)(param_1 + 0x40) + iVar3) =
           *(double *)(*(int *)(param_1 + 0x40) + iVar1) -
           *(double *)(*(int *)(param_1 + 0x24) + iVar2);
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    do {
      iVar1 = *(int *)(param_1 + 0x40);
      iVar2 = *(int *)(*(int *)(param_1 + 0x44) + iVar4 * 4);
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
    } while (iVar4 < *(int *)(param_1 + 0x54));
  }
  iVar4 = *(int *)(param_1 + 0x4c);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar1 = iVar4 * 8;
    puVar5 = (undefined4 *)(iVar1 + *(int *)(param_1 + 0x40));
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + iVar1) = *puVar5;
    *(undefined4 *)(iVar2 + 4 + iVar1) = puVar5[1];
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar3 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar2 + iVar1);
    *(undefined4 *)(iVar3 + 4 + iVar1) = *(undefined4 *)(iVar2 + 4 + iVar1);
  }
  return;
}


