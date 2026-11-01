
/* ==== FUN_004d4510 @ 004d4510 ==== 
 * signature: undefined4 __fastcall FUN_004d4510(int * param_1)
 * body: 004d4510-004d45a0
 */

/* WARNING: Removing unreachable block (ram,0x004d45e2) */
/* WARNING: Removing unreachable block (ram,0x004d45ee) */
/* WARNING: Removing unreachable block (ram,0x004d45f0) */

undefined4 __fastcall FUN_004d4510(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056ff40;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  param_1[1] = 0;
  uVar4 = FUN_004d4770(param_1,'\x01');
  if ((char)uVar4 == '\0') {
    ExceptionList = pvStack_10;
    return 0xffffffff;
  }
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  uVar4 = *(uint *)piVar1[7];
  if (uVar4 != 0) {
    iVar2 = *(int *)piVar1[0xb];
    if (uVar4 < iVar2 + uVar4) {
      *(int *)piVar1[0xb] = iVar2 + -1;
      pbVar3 = *(byte **)piVar1[7];
      *(byte **)piVar1[7] = pbVar3 + 1;
      uVar4 = (uint)*pbVar3;
      goto LAB_004d458e;
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x14))();
LAB_004d458e:
  if (uVar4 != 0xffffffff) {
    param_1[1] = param_1[1] + 1;
    uVar5 = FUN_004d45cd();
    return uVar5;
  }
  uVar5 = FUN_004d45cd();
  return uVar5;
}


