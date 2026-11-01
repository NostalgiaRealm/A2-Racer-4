
/* ==== FUN_0045dce0 @ 0045dce0 ==== 
 * signature: undefined __stdcall FUN_0045dce0(void)
 * body: 0045dce0-0045ddad
 */

void FUN_0045dce0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_64 [6];
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056a99f;
  local_10 = ExceptionList;
  local_8 = 0;
  piVar1 = DAT_00709980;
  ExceptionList = &local_10;
  if ((DAT_006fb8d0 != 0) && (ExceptionList = &local_10, DAT_006fb940 != 0)) {
    uStack_28 = 1;
    uStack_2c = 0x1b;
    piStack_30 = DAT_0073b4b4;
    uStack_34 = 0x45dd29;
    ExceptionList = &local_10;
    (**(code **)(*DAT_0073b4b4 + 0x5c))();
    uStack_34 = DAT_005afa58;
    uStack_38 = 0x13;
    piStack_3c = DAT_0073b4b4;
    uStack_40 = 0x45dd3d;
    (**(code **)(*DAT_0073b4b4 + 0x5c))();
    uStack_40 = DAT_005afa5c;
    uStack_44 = 0x14;
    piStack_48 = DAT_0073b4b4;
    uStack_4c = 0x45dd51;
    (**(code **)(*DAT_0073b4b4 + 0x5c))();
    piVar1 = DAT_00709980;
  }
  for (; piVar1 != (int *)0x0; piVar1 = (int *)FUN_0045e8b0((int)piVar1)) {
    puVar4 = auStack_64;
    puVar3 = (undefined4 *)register0x00000010;
    for (iVar2 = 0x10; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    FUN_0045ec10(piVar1);
    uStack_28 = 0x45dd78;
  }
  if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
    uStack_28 = 0;
    uStack_2c = 0x1b;
    piStack_30 = DAT_0073b4b4;
    uStack_34 = 0x45dd9d;
    (**(code **)(*DAT_0073b4b4 + 0x5c))();
  }
  ExceptionList = local_10;
  return;
}


