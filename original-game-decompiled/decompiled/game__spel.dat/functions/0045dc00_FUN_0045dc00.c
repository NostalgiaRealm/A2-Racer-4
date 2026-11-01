
/* ==== FUN_0045dc00 @ 0045dc00 ==== 
 * signature: undefined __cdecl FUN_0045dc00(undefined4 param_1)
 * body: 0045dc00-0045dc6b;0045dcce-0045dcde
 */

void __cdecl FUN_0045dc00(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *this;
  undefined4 in_stack_0000003c;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056a995;
  local_10 = ExceptionList;
  local_8 = 0;
  this = DAT_00709980;
  ExceptionList = &local_10;
  while (this != (undefined4 *)0x0) {
    cVar1 = FUN_0045ebf0(this,param_1,in_stack_0000003c);
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)FUN_0045e8b0((int)this);
      DAT_00709980 = FUN_0045e780(this);
      this = puVar2;
    }
    else {
      this = (undefined4 *)FUN_0045e8b0((int)this);
    }
  }
  ExceptionList = local_10;
  return;
}


