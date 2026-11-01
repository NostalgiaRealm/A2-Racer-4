
/* ==== FUN_004eb170 @ 004eb170 ==== 
 * signature: undefined __thiscall FUN_004eb170(void * this, int param_1)
 * body: 004eb170-004eb21c
 */

void __thiscall FUN_004eb170(void *this,int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572328;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  do {
    puVar2 = FUN_0049df90(local_1c,&DAT_005b79dc);
    local_4 = 0;
    uVar3 = FUN_004ea5b0(this,param_1,iVar4,puVar2);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    iVar4 = iVar4 + 1;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  } while ((char)uVar3 != '\0');
  ExceptionList = local_c;
  return;
}


