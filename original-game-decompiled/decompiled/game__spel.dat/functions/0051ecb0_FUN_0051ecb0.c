
/* ==== FUN_0051ecb0 @ 0051ecb0 ==== 
 * signature: undefined __cdecl FUN_0051ecb0(int * param_1, int param_2, int param_3)
 * body: 0051ecb0-0051ed3e
 */

void __cdecl FUN_0051ecb0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_0052ea40(DAT_0074c5ec,5,(int)param_1,param_2,param_3);
  for (piVar1 = param_1; (piVar1 != (int *)0x0 && (piVar1[0xc] != 0)); piVar1 = (int *)piVar1[0xc])
  {
    FUN_0052e290(DAT_0074c5ec,5,piVar1,param_3);
  }
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + 4);
    piVar1 = *(int **)(param_2 + 4);
    while (piVar1 != (int *)0x0) {
      puVar2 = puVar2 + 1;
      FUN_0052e290(DAT_0074c5ec,5,piVar1,param_3);
      piVar1 = (int *)*puVar2;
    }
  }
  FUN_0052fb30(DAT_0074c5ec,5,(int)param_1,param_2,param_3);
  return;
}


