
/* ==== FUN_004d24b0 @ 004d24b0 ==== 
 * signature: undefined4 * __thiscall FUN_004d24b0(void * this, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5, int param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * body: 004d24b0-004d259b
 */

undefined4 * __thiscall
FUN_004d24b0(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056fc28;
  local_c = ExceptionList;
  local_4 = 1;
  iVar7 = 0;
  puVar3 = &param_5;
  uVar5 = 0xffffffff;
  uVar4 = 0;
  uVar2 = 0;
  ExceptionList = &local_c;
  uVar6 = param_5;
  FUN_004093c0(&stack0xffffffd4,puVar3,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_0041c870(&stack0xffffffc4,(undefined1 *)&param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004d1f30(this,5,uVar2,(int)puVar3,uVar4,uVar5,uVar6,iVar7);
  *(undefined4 *)((int)this + 0x28) = param_9;
  *(undefined ***)this = &PTR_FUN_0057781c;
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(param_2 + -1));
    }
    else {
      *(char *)(param_2 + -1) = cVar1 + -1;
    }
  }
  param_2 = 0;
  param_3 = 0;
  param_4 = 0;
  if (param_6 != 0) {
    cVar1 = *(char *)(param_6 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(param_6 + -1));
    }
    else {
      *(char *)(param_6 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


