
/* ==== FUN_0055a94d @ 0055a94d ==== 
 * signature: undefined4 __cdecl FUN_0055a94d(char * param_1)
 * body: 0055a94d-0055a9b3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0055a94d(char *param_1)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  iVar1 = FUN_0055f00e(&DAT_005c7bf8);
  sVar2 = _strlen(param_1);
  uVar3 = FUN_00558c1d(param_1,1,sVar2,(int *)&DAT_005c7bf8);
  if (uVar3 == sVar2) {
    _DAT_005c7bfc = _DAT_005c7bfc + -1;
    if (_DAT_005c7bfc < 0) {
      FUN_0055e48c(10,(int *)&DAT_005c7bf8);
    }
    else {
      *DAT_005c7bf8 = 10;
      DAT_005c7bf8 = DAT_005c7bf8 + 1;
    }
    uVar4 = 0;
  }
  FUN_0055f09b(iVar1,(int *)&DAT_005c7bf8);
  return uVar4;
}


