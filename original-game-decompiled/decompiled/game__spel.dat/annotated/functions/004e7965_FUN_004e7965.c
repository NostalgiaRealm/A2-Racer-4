
/* ==== FUN_004e7965 @ 004e7965 ==== 
 * signature: undefined1 * __thiscall FUN_004e7965(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, void * param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined1 * param_10)
 * body: 004e7965-004e79e7
 */

undefined1 * __thiscall
FUN_004e7965(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,void *param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined1 *param_10)

{
  char cVar1;
  undefined1 *puVar2;
  
  FUN_004e7a60((undefined1 *)&param_2,*(int *)((int)this + 0x10));
  puVar2 = param_10;
  param_8 = 0;
  FUN_004d7610(param_10);
  if (param_3 == 0) {
    ExceptionList = param_6;
    return puVar2;
  }
  cVar1 = *(char *)(param_3 + -1);
  if ((cVar1 != '\0') && (cVar1 != -1)) {
    *(char *)(param_3 + -1) = cVar1 + -1;
    ExceptionList = param_6;
    return puVar2;
  }
  FUN_0054b339((char *)(param_3 + -1));
  ExceptionList = param_6;
  return puVar2;
}


