
/* ==== FUN_0055bfce @ 0055bfce ==== 
 * signature: undefined __cdecl FUN_0055bfce(uint * param_1, int param_2)
 * body: 0055bfce-0055bff2
 */

void __cdecl FUN_0055bfce(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < param_2) {
    piVar2 = &param_2;
    iVar3 = param_2;
    do {
      piVar1 = piVar2 + 1;
      piVar2 = piVar2 + 1;
      FUN_0055ee50(param_1,(uint *)*piVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


