
/* ==== FUN_0050ce00 @ 0050ce00 ==== 
 * signature: undefined4 * __thiscall FUN_0050ce00(void * this, char * param_1, undefined4 param_2)
 * body: 0050ce00-0050ce97
 */

undefined4 * __thiscall FUN_0050ce00(void *this,char *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573acb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(char **)(*(int *)((int)this + 0x24) + 4) = param_1;
  iVar1 = *(int *)((int)this + 0x24);
  pvVar3 = *(void **)((int)this + 0xc);
  uVar2 = FUN_0050c6d0(iVar1);
  uVar2 = FUN_005013d0(pvVar3,iVar1,uVar2);
  puVar4 = (undefined4 *)0x0;
  *(undefined4 *)(*(int *)((int)this + 0x24) + 4) = 0;
  if (uVar2 == 0) {
    pvVar3 = operator_new(0x28);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      puVar4 = FUN_0050d280(pvVar3,param_1,param_2);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)this + 0x10))(puVar4);
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return puVar4;
}


