
/* ==== FUN_004d7800 @ 004d7800 ==== 
 * signature: int * __thiscall FUN_004d7800(void * this, undefined4 param_1, int param_2)
 * body: 004d7800-004d7864
 */

/* WARNING: Removing unreachable block (ram,0x004d78a3) */
/* WARNING: Removing unreachable block (ram,0x004d78af) */
/* WARNING: Removing unreachable block (ram,0x004d78b1) */

int * __thiscall FUN_004d7800(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_00570280;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = FUN_004d4770(this,'\x01');
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this) + 0x18))
                      (param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar2;
    if (iVar2 != param_2) {
      piVar3 = (int *)FUN_004d7891();
      return piVar3;
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


