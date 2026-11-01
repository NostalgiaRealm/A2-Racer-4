
/* ==== FUN_10005850 @ 10005850 ==== 
 * signature: int __cdecl FUN_10005850(undefined * * param_1)
 * body: 10005850-10005893
 */

int __cdecl FUN_10005850(undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_100059c0(0);
  }
  else {
    FUN_10002e60(param_1);
    iVar1 = FUN_100058a0((int *)param_1);
    FUN_10002ed0(param_1);
  }
  return iVar1;
}


