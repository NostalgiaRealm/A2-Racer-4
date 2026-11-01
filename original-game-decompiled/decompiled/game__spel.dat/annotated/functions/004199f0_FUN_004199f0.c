
/* ==== FUN_004199f0 @ 004199f0 ==== 
 * signature: undefined __cdecl FUN_004199f0(int param_1, int param_2)
 * body: 004199f0-00419a29
 */

void __cdecl FUN_004199f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(&DAT_005cea0c + param_1 * 0x294);
  do {
    iVar1 = FUN_004c3ec0(iVar2 + param_2);
    *piVar3 = iVar1 + -1;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 10);
  return;
}


