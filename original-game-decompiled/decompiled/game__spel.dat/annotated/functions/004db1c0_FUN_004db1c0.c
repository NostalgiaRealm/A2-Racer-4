
/* ==== FUN_004db1c0 @ 004db1c0 ==== 
 * signature: undefined __thiscall FUN_004db1c0(void * this, void * param_1)
 * body: 004db1c0-004db28f
 */

void __thiscall FUN_004db1c0(void *this,void *param_1)

{
  char cVar1;
  code cVar2;
  uint uVar3;
  char *pcVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005707f8;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0x30) == 0) ||
     ((*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) & 0xfffffffcU) != 4)) {
    uVar3 = 0xffffffff;
    pcVar4 = s_incorrect_number_of_arguments_to_005b7358;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_c;
    FUN_00402940(&stack0xffffffe4,(undefined4 *)s_incorrect_number_of_arguments_to_005b7358,
                 ~uVar3 - 1);
    local_4 = 0;
    FUN_004d6900(0xbbc,&stack0xffffffe4,(undefined1 *)((int)this + 0xc),
                 (undefined1 *)(*(int *)((int)this + 8) + 0xc));
    if (pcStack_8 != (code *)0x0) {
      cVar2 = pcStack_8[-1];
      if ((cVar2 != (code)0x0) && (cVar2 != (code)0xff)) {
        pcStack_8[-1] = (code)((char)cVar2 + -1);
        ExceptionList = param_1;
        return;
      }
      FUN_0054b339(pcStack_8 + -1);
    }
  }
  ExceptionList = param_1;
  return;
}


