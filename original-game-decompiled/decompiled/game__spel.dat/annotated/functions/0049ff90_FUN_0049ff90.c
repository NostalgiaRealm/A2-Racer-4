
/* ==== FUN_0049ff90 @ 0049ff90 ==== 
 * signature: undefined __thiscall FUN_0049ff90(void * this, uint param_1, int param_2)
 * body: 0049ff90-0049fff7
 */

void __thiscall FUN_0049ff90(void *this,uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 8);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_0049eb50((void *)((int)this + 4),iVar3);
      if ((*(uint *)(iVar2 + 8) & param_1) != 0) {
        FUN_004a00b0(param_2,0,100);
        *(int *)(iVar2 + 0x54) = param_2;
        FUN_0049e3c0(iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


