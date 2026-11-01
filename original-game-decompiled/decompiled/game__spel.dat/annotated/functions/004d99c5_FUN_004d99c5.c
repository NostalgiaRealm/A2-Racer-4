
/* ==== FUN_004d99c5 @ 004d99c5 ==== 
 * signature: undefined4 * __thiscall FUN_004d99c5(void * this, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, void * param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 * param_9, int param_10)
 * body: 004d99c5-004d9a39
 */

undefined4 * __thiscall
FUN_004d99c5(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            void *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 *param_9,int param_10)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = FUN_004d93e0(this,(undefined1 *)&param_1,param_10);
  puVar2 = param_9;
  param_7 = 0;
  FUN_004cf330(param_9,puVar3);
  *puVar2 = &PTR_FUN_005778c0;
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_2 + -1) = cVar1 + -1;
      ExceptionList = param_5;
      return puVar2;
    }
    FUN_0054b339((char *)(param_2 + -1));
  }
  ExceptionList = param_5;
  return puVar2;
}


