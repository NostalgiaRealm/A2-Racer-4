
/* ==== FUN_00421d68 @ 00421d68 ==== 
 * signature: undefined1 __register FUN_00421d68(undefined4 * param_1, int param_2, int * param_3)
 * body: 00421d68-00421d98
 */

undefined1 FUN_00421d68(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  while( true ) {
    if ((int)param_1[2] <= *param_3) {
      return 0;
    }
    iVar1 = FUN_0040f024(param_1,*param_3);
    if (param_2 == *(int *)(iVar1 + 4)) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}


