
/* ==== FUN_004debc0 @ 004debc0 ==== 
 * signature: int * __thiscall FUN_004debc0(void * this, int param_1, undefined4 param_2, undefined4 param_3, void * param_4)
 * body: 004debc0-004dec82
 */

int * __thiscall
FUN_004debc0(void *this,int param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *unaff_retaddr;
  int in_stack_ffffffe4;
  char *in_stack_ffffffe8;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00570f48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*(int *)this + 0x30))(&stack0xffffffe4);
  pcStack_8 = (code *)0x0;
  piVar3 = FUN_004d4cd0(unaff_retaddr,s_Method_005b73dc);
  pcVar4 = *(char **)(iVar2 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004d4cd0(piVar3,pcVar4);
  piVar3 = FUN_004d4cd0(piVar3,&DAT_005b725c);
  piVar3 = FUN_004da280(piVar3,in_stack_ffffffe4);
  piVar3 = FUN_004d4cd0(piVar3,in_stack_ffffffe8);
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(param_1 + -1));
    }
    else {
      *(char *)(param_1 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = param_4;
  return piVar3;
}


