
/* ==== FUN_00521560 @ 00521560 ==== 
 * signature: undefined __cdecl FUN_00521560(int param_1)
 * body: 00521560-00521588
 */

void __cdecl FUN_00521560(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x20);
  iVar3 = 3;
  do {
    piVar2[1] = param_1;
    piVar2[4] = (int)piVar2;
    iVar1 = FUN_0051fe80(piVar2);
    piVar2[5] = iVar1;
    piVar2 = piVar2 + 10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


