
/* ==== FUN_0050cea0 @ 0050cea0 ==== 
 * signature: undefined4 * __thiscall FUN_0050cea0(void * this, char * param_1, undefined4 param_2)
 * body: 0050cea0-0050cf33
 */

undefined4 * __thiscall FUN_0050cea0(void *this,char *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573aeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(char **)(*(int *)((int)this + 0x24) + 4) = param_1;
  iVar1 = *(int *)((int)this + 0x24);
  pvVar4 = *(void **)((int)this + 0xc);
  uVar2 = FUN_0050c6d0(iVar1);
  puVar3 = (undefined4 *)FUN_005013d0(pvVar4,iVar1,uVar2);
  *(undefined4 *)(*(int *)((int)this + 0x24) + 4) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    pvVar4 = operator_new(0x28);
    local_4 = 0;
    puVar3 = (undefined4 *)0x0;
    if (pvVar4 != (void *)0x0) {
      puVar3 = FUN_0050d280(pvVar4,param_1,param_2);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)this + 0x10))(puVar3);
  }
  ExceptionList = local_c;
  return puVar3;
}


