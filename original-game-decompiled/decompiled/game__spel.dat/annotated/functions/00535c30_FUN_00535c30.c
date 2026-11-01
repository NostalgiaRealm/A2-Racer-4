
/* ==== FUN_00535c30 @ 00535c30 ==== 
 * signature: int * __cdecl FUN_00535c30(int param_1, uint param_2, int * param_3, uint param_4, int param_5, uint * param_6)
 * body: 00535c30-00535ce0
 */

int * __cdecl
FUN_00535c30(int param_1,uint param_2,int *param_3,uint param_4,int param_5,uint *param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  *param_6 = 0;
  DAT_0074ca68 = DAT_0074ca68 + 1;
  uVar2 = FUN_00515690(param_2,*param_3,DAT_0074c03c + -1,0,param_4);
  piVar1 = *(int **)(param_1 + 4 + uVar2 * 4);
  do {
    if (piVar1 == (int *)0x0) {
      if (*param_6 == 0) {
        *param_6 = uVar2;
      }
      return (int *)0x0;
    }
    if (piVar1 == param_3) {
      *param_6 = 0xffffffff;
    }
    else {
      DAT_0074ca70 = DAT_0074ca70 + 1;
      iVar3 = FUN_00514520((int *)*param_3,param_4,(int *)*piVar1,param_5);
      if (iVar3 != 0) {
        return piVar1;
      }
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == param_2) {
      uVar2 = 0;
    }
    piVar1 = *(int **)(param_1 + 4 + uVar2 * 4);
  } while( true );
}


