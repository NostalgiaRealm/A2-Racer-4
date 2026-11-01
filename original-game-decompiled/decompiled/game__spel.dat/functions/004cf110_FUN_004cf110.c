
/* ==== FUN_004cf110 @ 004cf110 ==== 
 * signature: void * __thiscall FUN_004cf110(void * this, void * param_1)
 * body: 004cf110-004cf18d
 */

void * __thiscall FUN_004cf110(void *this,void *param_1)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  void *pvVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056f87b;
  local_c = ExceptionList;
  if (this == param_1) {
    return this;
  }
  ExceptionList = &local_c;
  if ((*(int *)((int)this + 8) == 3) &&
     (pvVar2 = *(LPVOID *)((int)this + 0x10), ExceptionList = &local_c, pvVar2 != (LPVOID)0x0)) {
    iVar3 = *(int *)((int)pvVar2 + 4);
    ExceptionList = &local_c;
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        ExceptionList = &local_c;
        FUN_0054b339((char *)(iVar3 + -1));
      }
      else {
        ExceptionList = &local_c;
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  iVar3 = *(int *)((int)param_1 + 8);
  *(int *)((int)this + 8) = iVar3;
                    /* WARNING: Could not recover jumptable at 0x004cf187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar4 = (void *)(*(code *)(&PTR_LAB_004cf314)[iVar3])();
  return pvVar4;
}


