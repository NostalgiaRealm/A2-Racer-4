
/* ==== FUN_0054c39c @ 0054c39c ==== 
 * signature: undefined __thiscall FUN_0054c39c(void * this, undefined4 * param_1, int param_2, undefined4 param_3, LONG param_4, undefined4 param_5, undefined4 param_6)
 * body: 0054c39c-0054c45d
 */

void __thiscall
FUN_0054c39c(void *this,undefined4 *param_1,int param_2,undefined4 param_3,LONG param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_c;
  
  iVar2 = param_2;
  local_c._0_4_ = param_4;
  local_c._4_4_ = param_5;
  if (*(int **)((int)this + 0x50) != (int *)0x0) {
    iVar1 = FUN_0055a4ea(*(int **)((int)this + 0x50),(LONG *)&local_c);
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        iVar2 = FUN_0055a06b(*(int **)((int)this + 0x50),iVar2,1);
        if (iVar2 != 0) goto LAB_0054c42f;
      }
      iVar2 = FUN_0055a4c8(*(char **)((int)this + 0x50),&local_c);
      if (iVar2 == 0) {
        if (*(void **)((int)this + 0x44) != (void *)0x0) {
          *(undefined4 *)((int)this + 0x40) = param_6;
          FUN_0040f800(*(void **)((int)this + 0x44),0,0xffffffff);
        }
        param_2 = 0;
        param_4 = (LONG)local_c;
        param_5 = local_c._4_4_;
        param_6 = *(undefined4 *)((int)this + 0x40);
        goto LAB_0054c451;
      }
    }
  }
LAB_0054c42f:
  param_2 = -1;
  param_4 = 0;
  param_5 = 0;
  param_6 = DAT_00750068;
LAB_0054c451:
  piVar3 = &param_2;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar3;
    piVar3 = piVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


