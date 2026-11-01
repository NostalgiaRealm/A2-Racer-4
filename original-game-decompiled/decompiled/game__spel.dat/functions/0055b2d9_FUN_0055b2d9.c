
/* ==== FUN_0055b2d9 @ 0055b2d9 ==== 
 * signature: int __cdecl FUN_0055b2d9(char * param_1, int * param_2)
 * body: 0055b2d9-0055b31b
 */

int __cdecl FUN_0055b2d9(char *param_1,int *param_2)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  
  sVar1 = _strlen(param_1);
  iVar2 = FUN_0055f00e(param_2);
  uVar3 = FUN_00558c1d(param_1,1,sVar1,param_2);
  FUN_0055f09b(iVar2,param_2);
  return (uVar3 == sVar1) - 1;
}


