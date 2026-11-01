
/* ==== FUN_004f9b50 @ 004f9b50 ==== 
 * signature: undefined __thiscall FUN_004f9b50(void * this, int param_1)
 * body: 004f9b50-004f9b80
 */

void __thiscall FUN_004f9b50(void *this,int param_1)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  
  pdVar2 = (double *)((int)this + 0x10);
  iVar3 = param_1 - (int)this;
  iVar1 = 3;
  do {
    if (*pdVar2 < *(double *)(iVar3 + (int)pdVar2)) {
      *(undefined4 *)pdVar2 = *(undefined4 *)(iVar3 + (int)pdVar2);
      *(undefined4 *)((int)pdVar2 + 4) = *(undefined4 *)(iVar3 + 4 + (int)pdVar2);
    }
    pdVar2 = pdVar2 + -1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


