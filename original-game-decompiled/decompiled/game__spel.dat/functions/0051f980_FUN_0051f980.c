
/* ==== FUN_0051f980 @ 0051f980 ==== 
 * signature: undefined __thiscall FUN_0051f980(void * this, int * param_1)
 * body: 0051f980-0051f9b0
 */

void __thiscall FUN_0051f980(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < (short)param_1[3]) {
    do {
      piVar1 = piVar1 + 4;
      FUN_0051f7b0(this,param_1,(int)piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (short)param_1[3]);
  }
  return;
}


