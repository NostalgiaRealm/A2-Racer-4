
/* ==== FUN_00489cb0 @ 00489cb0 ==== 
 * signature: undefined __thiscall FUN_00489cb0(void * this, undefined4 * param_1)
 * body: 00489cb0-00489d26
 */

void __thiscall FUN_00489cb0(void *this,undefined4 *param_1)

{
  char cVar1;
  
  if ((param_1[4] != 0) || (*(char *)(param_1 + 3) != '\0')) {
    if ((int)param_1[4] < 1) {
      FUN_00489df0(param_1,'\0');
      param_1[4] = 0;
      return;
    }
    if ((int)param_1[5] <= *(int *)((int)this + 0x260)) {
      cVar1 = *(char *)(param_1 + 3);
      if (cVar1 != '\0') {
        FUN_00489800(param_1[6]);
      }
      param_1[5] = *(int *)((int)this + 0x260) + 500;
      FUN_00489df0(param_1,cVar1 == '\0');
    }
    param_1[4] = param_1[4] + -7;
  }
  return;
}


