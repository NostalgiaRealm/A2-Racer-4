
/* ==== FUN_004d7640 @ 004d7640 ==== 
 * signature: int * __thiscall FUN_004d7640(void * this, undefined4 param_1, int param_2)
 * body: 004d7640-004d76ca
 */

int * __thiscall FUN_004d7640(void *this,undefined4 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_00570268;
  pvStack_10 = ExceptionList;
  bVar1 = false;
  ExceptionList = &pvStack_10;
  if ((*(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this) == 0) &&
     (piVar3 = *(int **)((int)this + *(int *)(*(int *)this + 4) + 0x2c), ExceptionList = &pvStack_10
     , piVar3 != (int *)0x0)) {
    ExceptionList = &pvStack_10;
    FUN_004d77a0(piVar3);
  }
  if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 4) == 0) {
    local_8 = 1;
    iVar4 = (**(code **)(**(int **)((int)this + *(int *)(*(int *)this + 4) + 0x28) + 0x1c))
                      (param_1,param_2);
    if (iVar4 != param_2) {
      piVar3 = (int *)FUN_004d76f8();
      return piVar3;
    }
  }
  else {
    bVar1 = true;
  }
  local_8 = 0;
  if (bVar1) {
    FUN_0054c6db();
  }
  local_8 = 0xffffffff;
  cVar2 = FUN_0054eb4d();
  if ((cVar2 == '\0') &&
     (iVar4 = *(int *)(*(int *)this + 4), (*(byte *)(iVar4 + 0xc + (int)this) & 2) != 0)) {
    bVar1 = false;
    if (((*(byte *)((int)this + iVar4 + 4) & 6) == 0) &&
       (iVar4 = (**(code **)(**(int **)((int)this + iVar4 + 0x28) + 0x2c))(), iVar4 == -1)) {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_0054c6db();
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


