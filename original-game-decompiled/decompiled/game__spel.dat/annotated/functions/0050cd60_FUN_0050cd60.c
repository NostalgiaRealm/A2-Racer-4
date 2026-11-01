
/* ==== FUN_0050cd60 @ 0050cd60 ==== 
 * signature: undefined4 * __thiscall FUN_0050cd60(void * this, char * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0050cd60-0050cdfc
 */

undefined4 * __thiscall FUN_0050cd60(void *this,char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573aab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(char **)(*(int *)((int)this + 0x24) + 4) = param_1;
  iVar1 = *(int *)((int)this + 0x24);
  this_00 = *(void **)((int)this + 8);
  uVar2 = FUN_0050c6d0(iVar1);
  uVar2 = FUN_005013d0(this_00,iVar1,uVar2);
  puVar4 = (undefined4 *)0x0;
  *(undefined4 *)(*(int *)((int)this + 0x24) + 4) = 0;
  if (uVar2 == 0) {
    puVar3 = operator_new(0x38);
    local_4 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = FUN_0050d210(puVar3,param_1,CONCAT44(param_3,param_2));
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)this + 8))(puVar4);
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return puVar4;
}


