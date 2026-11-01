
/* ==== FUN_10009480 @ 10009480 ==== 
 * signature: int * __thiscall FUN_10009480(void * this, uint param_1)
 * body: 10009480-100094ec
 */

int * __thiscall FUN_10009480(void *this,uint param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10030004) {
    FUN_100073f0(9);
    piVar1 = FUN_10009fc0(param_1);
    FUN_10007490(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = HeapAlloc(DAT_10031a8c,0,param_1 + 0xf & 0xfffffff0);
  return piVar1;
}


