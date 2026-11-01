
/* ==== FUN_004d1f30 @ 004d1f30 ==== 
 * signature: undefined4 * __thiscall FUN_004d1f30(void * this, undefined4 param_1, undefined1 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, int param_7)
 * body: 004d1f30-004d2026
 */

undefined4 * __thiscall
FUN_004d1f30(void *this,undefined4 param_1,undefined1 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,int param_7)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar2 = param_6;
  pcStack_8 = FUN_0056fbb8;
  local_c = ExceptionList;
  local_4 = 1;
  puVar3 = (undefined4 *)0x0;
  uVar4 = 0;
  uVar5 = 0;
  ExceptionList = &local_c;
  FUN_004093c0(&stack0xffffffd4,&param_6,0,0xffffffff);
  FUN_004d1560(this,param_1,uVar2,puVar3,uVar4,uVar5);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  FUN_004093c0((undefined1 *)((int)this + 0x18),&param_2,0,0xffffffff);
  *(undefined ***)this = &PTR_FUN_00577808;
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(param_3 + -1));
    }
    else {
      *(char *)(param_3 + -1) = cVar1 + -1;
    }
  }
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  if (param_7 != 0) {
    cVar1 = *(char *)(param_7 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(param_7 + -1));
    }
    else {
      *(char *)(param_7 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


