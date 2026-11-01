
/* ==== FUN_004d0010 @ 004d0010 ==== 
 * signature: undefined __fastcall FUN_004d0010(undefined4 * param_1)
 * body: 004d0010-004d012f
 */

void __fastcall FUN_004d0010(undefined4 *param_1)

{
  char cVar1;
  LPVOID pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_0056f9c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00578ecc;
  local_4 = 1;
  if ((*(char *)(param_1 + 0x12) != '\0') && ((FILE *)param_1[0x14] != (FILE *)0x0)) {
    iVar4 = FUN_005588fd((FILE *)param_1[0x14]);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
      FUN_004d0a60((int)param_1);
      param_1[0x14] = 0;
      param_1[0x10] = DAT_00750064;
      param_1[0xf] = DAT_00750064;
      param_1[0xe] = 0;
    }
  }
  pvVar2 = (LPVOID)param_1[0x11];
  if (pvVar2 != (LPVOID)0x0) {
    iVar4 = *(int *)((int)pvVar2 + 4);
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iVar4 + -1));
      }
      else {
        *(char *)(iVar4 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  uVar3 = param_1[0x13];
  local_4 = local_4 & 0xffffff00;
  if (uVar3 != 0) {
    iVar4 = *(int *)(uVar3 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(uVar3 + 4) = iVar4 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(uVar3 + 4) != 0) & uVar3);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  *param_1 = &PTR_FUN_00578f04;
  uVar3 = param_1[0xd];
  local_4 = 0xffffffff;
  if (uVar3 != 0) {
    iVar4 = *(int *)(uVar3 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(uVar3 + 4) = iVar4 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(uVar3 + 4) != 0) & uVar3);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


