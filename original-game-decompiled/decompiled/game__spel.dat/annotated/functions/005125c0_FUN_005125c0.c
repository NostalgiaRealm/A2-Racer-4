
/* ==== FUN_005125c0 @ 005125c0 ==== 
 * signature: undefined __fastcall FUN_005125c0(void * param_1)
 * body: 005125c0-0051268a
 */

void __fastcall FUN_005125c0(void *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  void **ppvVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort local_14;
  ushort local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573eb8;
  local_14 = 0;
  local_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  iVar2 = *(int *)((int)param_1 + 0x1c);
  local_4 = 0;
  uVar1 = *(ushort *)(iVar2 + 2);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (uVar5 = (uint)uVar1, uVar5 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 4 + uVar5 * 8);
    if (local_14 <= local_12) {
      FUN_004f6060(&local_14);
    }
    *(undefined4 *)(CONCAT22(uStack_e,uStack_10) + (uint)local_12 * 4) = uVar3;
    iVar2 = *(int *)((int)param_1 + 0x1c);
    local_12 = local_12 + 1;
    uVar1 = *(ushort *)(iVar2 + 2 + uVar5 * 8);
  }
  iVar2 = *(int *)((int)param_1 + 0x1c);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)((int)param_1 + 4);
  puVar6 = FUN_005127e0(param_1,(int)&local_14);
  *(undefined4 **)(iVar2 + 4 + (uint)*(ushort *)(iVar2 + 2) * 8) = puVar6;
  ppvVar4 = (void **)CONCAT22(uStack_e,uStack_10);
  if ((ppvVar4 != &local_c) && (ppvVar4 != (void **)0x0)) {
    FUN_00559d4e(ppvVar4);
  }
  ExceptionList = local_c;
  return;
}


