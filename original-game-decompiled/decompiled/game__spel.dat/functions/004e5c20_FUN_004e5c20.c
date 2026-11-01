
/* ==== FUN_004e5c20 @ 004e5c20 ==== 
 * signature: int * __cdecl FUN_004e5c20(int * param_1, int param_2)
 * body: 004e5c20-004e5c92
 */

int * __cdecl FUN_004e5c20(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *unaff_retaddr;
  char *pcVar3;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == *(int *)(param_2 + 0xc)) {
    return param_1;
  }
  do {
    FUN_004d4cd0(param_1,&DAT_005b75a4);
    if (*(char *)(iVar2 + 0xc) == '\0') {
      pcVar3 = &DAT_005b759c;
      piVar1 = FUN_004d4130(param_1,*(char **)(iVar2 + 4));
      piVar1 = FUN_004d4cd0(piVar1,pcVar3);
      FUN_004d4130(piVar1,unaff_retaddr);
    }
    unaff_retaddr = &DAT_005b7598;
    FUN_004d4cd0(param_1,&DAT_005b7598);
    iVar2 = iVar2 + 0x10;
  } while (iVar2 != *(int *)(param_2 + 0xc));
  return param_1;
}


