
/* ==== FUN_0051e340 @ 0051e340 ==== 
 * signature: undefined __cdecl FUN_0051e340(int * param_1, undefined4 * param_2)
 * body: 0051e340-0051e3c3
 */

void __cdecl FUN_0051e340(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = DAT_0074c794 - DAT_0074c7a0;
  *param_2 = DAT_0074c7a8;
  puVar3 = DAT_0074c774;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    FUN_00559d4e(puVar3);
    puVar3 = puVar1;
  }
  DAT_0074c774 = (undefined4 *)0x0;
  if (DAT_0074c760 != 0) {
    FUN_00559d4e(DAT_0074c770);
    FUN_00559d4e(DAT_0074c768);
    FUN_00559d4e(DAT_0074c76c);
  }
  puVar3 = &DAT_0074c750;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}


