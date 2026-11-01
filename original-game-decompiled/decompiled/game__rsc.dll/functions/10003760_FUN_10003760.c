
/* ==== FUN_10003760 @ 10003760 ==== 
 * signature: int * __thiscall FUN_10003760(void * this, uint param_1, int param_2, uint param_3, int param_4, int param_5)
 * body: 10003760-100037bd
 */

int * __thiscall
FUN_10003760(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    FUN_100073f0(9);
    piVar1 = FUN_100037e0(param_1,param_3,param_4,param_5);
    FUN_10007490(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (param_2 == 0) break;
    iVar2 = __callnewh(param_1);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}


