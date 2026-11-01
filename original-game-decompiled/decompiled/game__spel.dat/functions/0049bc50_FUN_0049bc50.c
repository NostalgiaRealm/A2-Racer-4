
/* ==== FUN_0049bc50 @ 0049bc50 ==== 
 * signature: undefined __fastcall FUN_0049bc50(undefined4 * param_1)
 * body: 0049bc50-0049bd0a
 */

void __fastcall FUN_0049bc50(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  *param_1 = &PTR_FUN_00577170;
  if (0 < (int)param_1[5]) {
    do {
      iVar2 = param_1[7];
      puVar3 = *(undefined4 **)(iVar2 + 8);
      puVar5 = (undefined4 *)(*(int *)(iVar2 + 4) + 4);
      if (puVar5 != puVar3) {
        iVar7 = *(int *)(iVar2 + 4) - (int)puVar5;
        do {
          *(undefined4 *)(iVar7 + (int)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar3);
      }
      iVar6 = iVar6 + 1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -4;
    } while (iVar6 < (int)param_1[5]);
  }
  pvVar4 = (LPVOID)param_1[7];
  param_1[6] = &PTR_FUN_00577174;
  if (pvVar4 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar4 + 4));
    *(undefined4 *)((int)pvVar4 + 4) = 0;
    *(undefined4 *)((int)pvVar4 + 8) = 0;
    *(undefined4 *)((int)pvVar4 + 0xc) = 0;
    FUN_0054b339(pvVar4);
  }
  param_1[7] = 0;
  iVar6 = param_1[2];
  if (iVar6 != 0) {
    cVar1 = *(char *)(iVar6 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar6 + -1) = cVar1 + -1;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    FUN_0054b339((char *)(iVar6 + -1));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


