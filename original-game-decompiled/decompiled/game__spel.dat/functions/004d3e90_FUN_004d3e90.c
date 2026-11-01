
/* ==== FUN_004d3e90 @ 004d3e90 ==== 
 * signature: undefined __thiscall FUN_004d3e90(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004d3e90-004d3f74
 */

void __thiscall
FUN_004d3e90(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  int iStack_10;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_0056feb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_004d4510(param_1);
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = param_3;
  FUN_004d71d0(param_1,(undefined1 *)((int)this + 0xc));
  FUN_004dbee0((void *)((int)this + 0x1c),param_1,param_2);
  *(undefined2 *)((int)this + 0x24) = param_4;
  FUN_004dbc40(&uStack_1c,*(int *)((int)this + 0x20));
  FUN_004d6730();
  if (iStack_10 != 0) {
    cVar1 = *(char *)(iStack_10 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_10 + -1) = cVar1 + -1;
      ExceptionList = pvStack_4;
      return;
    }
    uStack_1c = 0x4d3f61;
    FUN_0054b339((char *)(iStack_10 + -1));
  }
  ExceptionList = pvStack_4;
  return;
}


