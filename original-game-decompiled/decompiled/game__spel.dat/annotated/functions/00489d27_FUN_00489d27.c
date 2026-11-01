
/* ==== FUN_00489d27 @ 00489d27 ==== 
 * signature: undefined __thiscall FUN_00489d27(void * this, undefined4 * param_1)
 * body: 00489d27-00489d2f
 */

void __thiscall FUN_00489d27(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  void *this_00;
  
  if ((param_1[4] != 0) || (*(char *)(param_1 + 3) != '\0')) {
    if ((int)param_1[4] < 1) {
      FUN_00489df0(param_1,'\0');
      param_1[4] = 0;
      if (param_1[6] != -1) {
        iVar1 = FUN_0049eb50(&DAT_006fbb5c,param_1[6]);
        FUN_0049e570(iVar1);
        return;
      }
    }
    else {
      if (param_1[6] != -1) {
        iVar1 = FUN_0049eb50(&DAT_006fbb5c,param_1[6]);
        uVar2 = FUN_0049e630(iVar1);
        if (uVar2 == 0) {
          iVar1 = 1;
          this_00 = (void *)FUN_0049eb50(&DAT_006fbb5c,param_1[6]);
          FUN_0049e550(this_00,iVar1);
        }
      }
      if ((int)param_1[5] <= *(int *)((int)this + 0x260)) {
        param_1[5] = *(int *)((int)this + 0x260) + 500;
        FUN_00489df0(param_1,*(char *)(param_1 + 3) == '\0');
      }
      param_1[4] = param_1[4] + -7;
    }
  }
  return;
}


