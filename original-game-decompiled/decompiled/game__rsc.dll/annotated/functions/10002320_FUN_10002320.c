
/* ==== FUN_10002320 @ 10002320 ==== 
 * signature: int __cdecl FUN_10002320(undefined * * param_1, int param_2, DWORD param_3)
 * body: 10002320-10002389
 */

int __cdecl FUN_10002320(undefined **param_1,int param_2,DWORD param_3)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c1a0,0x65,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_10002e60(param_1);
  iVar2 = FUN_10002390((uint *)param_1,param_2,param_3);
  FUN_10002ed0(param_1);
  return iVar2;
}


