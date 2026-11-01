
/* ==== FUN_00535be0 @ 00535be0 ==== 
 * signature: undefined __cdecl FUN_00535be0(int param_1, uint param_2, int * param_3, uint param_4)
 * body: 00535be0-00535c24
 */

void __cdecl FUN_00535be0(int param_1,uint param_2,int *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = FUN_00515690(param_2,*param_3,DAT_0074c03c + -1,0,param_4);
  while( true ) {
    piVar1 = *(int **)(param_1 + 4 + uVar2 * 4);
    if (piVar1 == (int *)0x0) {
      *(int **)(param_1 + 4 + uVar2 * 4) = param_3;
      return;
    }
    if (piVar1 == param_3) break;
    uVar2 = uVar2 + 1;
    if (uVar2 == param_2) {
      uVar2 = 0;
    }
  }
  return;
}


