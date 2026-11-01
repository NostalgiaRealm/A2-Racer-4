
/* ==== FUN_10006b70 @ 10006b70 ==== 
 * signature: int __cdecl FUN_10006b70(undefined * * param_1)
 * body: 10006b70-10006bd1
 */

int __cdecl FUN_10006b70(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cb5c,0x32,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_10002e60(param_1);
  iVar2 = FUN_10006be0((uint *)param_1);
  FUN_10002ed0(param_1);
  return iVar2;
}


