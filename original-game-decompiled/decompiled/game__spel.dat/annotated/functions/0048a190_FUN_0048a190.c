
/* ==== FUN_0048a190 @ 0048a190 ==== 
 * signature: undefined __fastcall FUN_0048a190(int param_1)
 * body: 0048a190-0048a220
 */

void __fastcall FUN_0048a190(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_4;
  
  iVar2 = -1;
  iVar5 = 0;
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x360)) {
    puVar4 = (undefined4 *)(param_1 + 0x2d0);
    do {
      if (*(int *)(param_1 + 0x260) < (int)puVar4[1]) {
        if (iVar2 != -1) {
          iVar5 = iVar2 * 3;
          iVar2 = iVar2 + 1;
          puVar1 = (undefined4 *)(param_1 + (iVar5 + 0xb4) * 4);
          *puVar1 = *puVar4;
          puVar1[1] = puVar4[1];
          puVar1[2] = puVar4[2];
          iVar5 = local_4;
        }
      }
      else {
        if (iVar2 == -1) {
          iVar2 = iVar3;
        }
        local_4 = iVar5 + 1;
        iVar5 = local_4;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar3 < *(int *)(param_1 + 0x360));
    *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) - iVar5;
    return;
  }
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x360);
  return;
}


