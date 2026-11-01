
/* ==== FUN_004d3760 @ 004d3760 ==== 
 * signature: int * __thiscall FUN_004d3760(void * this, int param_1, int param_2)
 * body: 004d3760-004d3798
 */

int * __thiscall FUN_004d3760(void *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_004d8f00(this,param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004da220((void *)(iVar2 + 0x3c),param_2);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x44))();
      if (cVar1 != '\0') {
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}


