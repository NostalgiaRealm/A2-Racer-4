
/* ==== FUN_004f6d10 @ 004f6d10 ==== 
 * signature: undefined __thiscall FUN_004f6d10(void * this, int param_1)
 * body: 004f6d10-004f6daa
 */

void __thiscall FUN_004f6d10(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *this_00;
  undefined2 *puVar3;
  void *local_c;
  code *pcStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  pcStack_8 = FUN_00572ffb;
  local_c = ExceptionList;
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0xa4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xa4);
  ExceptionList = &local_c;
  this_00 = (void *)FUN_0053eb70(this,iVar2,iVar1);
  if (this_00 == (void *)0x0) {
    puVar3 = operator_new(0x38);
    if (puVar3 == (undefined2 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      local_4 = this_00;
      this_00 = (void *)FUN_0053f730(puVar3);
    }
    local_4 = (void *)0xffffffff;
    *(int *)((int)this_00 + 0x2c) = iVar2;
    *(int *)((int)this_00 + 0x30) = iVar1;
    FUN_0053eae0(this,this_00);
  }
  FUN_0051edb0(this_00,param_1);
  ExceptionList = local_c;
  return;
}


