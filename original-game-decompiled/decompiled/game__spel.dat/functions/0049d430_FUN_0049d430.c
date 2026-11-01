
/* ==== FUN_0049d430 @ 0049d430 ==== 
 * signature: undefined4 * __thiscall FUN_0049d430(void * this, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, void * param_8)
 * body: 0049d430-0049d4f8
 */

undefined4 * __thiscall
FUN_0049d430(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,void *param_8)

{
  char cVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056ea6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_5;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = (undefined1)param_5;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 4) = param_5;
  *(undefined ***)this = &PTR_FUN_005771a0;
  *(undefined4 *)((int)this + 8) = param_6;
  *(undefined4 *)((int)this + 0xc) = param_7;
  local_4 = 2;
  FUN_004093c0((undefined1 *)((int)this + 0x2c),param_8,0,0xffffffff);
  FUN_004093c0((undefined1 *)((int)this + 0x1c),&param_1,0,0xffffffff);
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(param_2 + -1));
    }
    else {
      *(char *)(param_2 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


