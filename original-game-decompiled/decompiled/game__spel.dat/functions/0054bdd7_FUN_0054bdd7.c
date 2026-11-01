
/* ==== FUN_0054bdd7 @ 0054bdd7 ==== 
 * signature: int __thiscall FUN_0054bdd7(void * this, short * param_1, int param_2)
 * body: 0054bdd7-0054be5d
 */

int __thiscall FUN_0054bdd7(void *this,short *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    while( true ) {
      if (param_2 < 1) {
        return local_8;
      }
      psVar5 = (short *)**(undefined4 **)((int)this + 0x1c);
      if ((psVar5 == (short *)0x0) || (iVar3 = (**(int **)((int)this + 0x2c) << 1) >> 1, iVar3 < 1))
      break;
      psVar1 = param_1;
      iVar4 = iVar3;
      if (param_2 < iVar3) {
        iVar3 = param_2;
        iVar4 = param_2;
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *psVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        psVar1 = psVar1 + 1;
      }
      local_8 = local_8 + iVar4;
      param_2 = param_2 - iVar4;
      param_1 = param_1 + iVar4;
      FUN_0054c581(this,iVar4);
    }
    sVar2 = (**(code **)(*(int *)this + 0x14))();
    if (sVar2 == -1) break;
    *param_1 = sVar2;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
    param_2 = param_2 + -1;
  }
  return local_8;
}


