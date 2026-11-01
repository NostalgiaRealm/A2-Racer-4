
/* ==== FUN_004d43a0 @ 004d43a0 ==== 
 * signature: int * __thiscall FUN_004d43a0(void * this, byte param_1)
 * body: 004d43a0-004d4441
 */

int * __thiscall FUN_004d43a0(void *this,byte param_1)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056ff28;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  bVar2 = FUN_004d4c50(this);
  if (!bVar2) {
    bVar2 = true;
    goto LAB_004d4475;
  }
  local_8 = 1;
  piVar5 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
  uVar4 = *(uint *)piVar5[8];
  if (uVar4 == 0) {
LAB_004d4428:
    uVar4 = (**(code **)(*piVar5 + 4))(param_1);
  }
  else {
    iVar6 = *(int *)piVar5[0xc];
    if (iVar6 + uVar4 <= uVar4) goto LAB_004d4428;
    *(int *)piVar5[0xc] = iVar6 + -1;
    pbVar1 = *(byte **)piVar5[8];
    *(byte **)piVar5[8] = pbVar1 + 1;
    *pbVar1 = param_1;
    uVar4 = (uint)param_1;
  }
  bVar2 = false;
  if (uVar4 == 0xffffffff) {
    piVar5 = (int *)FUN_004d446e();
    return piVar5;
  }
LAB_004d4475:
  local_8 = 0;
  if (bVar2) {
    FUN_0054c6db();
  }
  local_8 = 0xffffffff;
  cVar3 = FUN_0054eb4d();
  if ((cVar3 == '\0') &&
     (iVar6 = *(int *)(*(int *)this + 4), (*(byte *)(iVar6 + 0xc + (int)this) & 2) != 0)) {
    bVar2 = false;
    if (((*(byte *)((int)this + iVar6 + 4) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)((int)this + iVar6 + 0x28) + 0x2c))(), iVar6 == -1)) {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_0054c6db();
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


