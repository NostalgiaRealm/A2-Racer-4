
/* ==== FUN_004de6f0 @ 004de6f0 ==== 
 * signature: int * __thiscall FUN_004de6f0(void * this, undefined4 param_1, void * param_2)
 * body: 004de6f0-004de7b0
 */

int * __thiscall FUN_004de6f0(void *this,undefined4 param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int unaff_ESI;
  int *unaff_retaddr;
  char *in_stack_ffffffe4;
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  pcStack_8 = FUN_00570e68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*(int *)this + 0x30))(&stack0xffffffe4);
  pcVar3 = *(char **)(iVar2 + 4);
  pcStack_8 = (code *)0x0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(unaff_retaddr,pcVar3);
  piVar4 = FUN_004d4cd0(unaff_retaddr,&DAT_005b725c);
  piVar4 = FUN_004da280(piVar4,unaff_ESI);
  piVar4 = FUN_004d4cd0(piVar4,in_stack_ffffffe4);
  if (iStack_4 != 0) {
    cVar1 = *(char *)(iStack_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_4 + -1) = cVar1 + -1;
      ExceptionList = param_2;
      return piVar4;
    }
    FUN_0054b339((char *)(iStack_4 + -1));
  }
  ExceptionList = param_2;
  return piVar4;
}


