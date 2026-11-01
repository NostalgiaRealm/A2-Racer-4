
/* ==== FUN_00495c90 @ 00495c90 ==== 
 * signature: undefined4 * __thiscall FUN_00495c90(void * this, undefined4 param_1)
 * body: 00495c90-00495d35
 */

undefined4 * __thiscall FUN_00495c90(void *this,undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e2c8;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  uVar2 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pcVar3 = s_OVL_START_005ada60;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(local_1c,(undefined4 *)s_OVL_START_005ada60,~uVar2 - 1);
  local_4 = 0;
  FUN_004924a0(this,param_1,(undefined4 *)local_1c);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  *(undefined ***)this = &PTR_FUN_005770e0;
  ExceptionList = local_c;
  return this;
}


