
/* ==== FUN_004dcfc0 @ 004dcfc0 ==== 
 * signature: undefined4 __thiscall FUN_004dcfc0(void * this, undefined4 param_1, void * param_2)
 * body: 004dcfc0-004dd0a7
 */

undefined4 __thiscall FUN_004dcfc0(void *this,undefined4 param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_retaddr;
  int in_stack_ffffffe4;
  int in_stack_ffffffe8;
  void *in_stack_ffffffec;
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  pcStack_8 = FUN_00570bc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*(int *)this + 0x30))(&stack0xffffffe4);
  pcVar3 = *(char **)(iVar2 + 4);
  pcStack_8 = (code *)0x0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(unaff_retaddr,pcVar3);
  pcVar3 = (char *)((int)this + 0x40);
  iVar2 = (int)this + 0x54;
  piVar4 = FUN_004d4cd0(unaff_retaddr,&DAT_005b725c);
  piVar4 = FUN_004da280(piVar4,iVar2);
  piVar4 = FUN_004d4cd0(piVar4,pcVar3);
  piVar4 = FUN_004da280(piVar4,in_stack_ffffffe4);
  piVar4 = FUN_004da280(piVar4,in_stack_ffffffe8);
  uVar5 = FUN_004ddee0(piVar4,in_stack_ffffffec);
  if (iStack_4 != 0) {
    cVar1 = *(char *)(iStack_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_4 + -1) = cVar1 + -1;
      ExceptionList = param_2;
      return uVar5;
    }
    FUN_0054b339((char *)(iStack_4 + -1));
  }
  ExceptionList = param_2;
  return uVar5;
}


