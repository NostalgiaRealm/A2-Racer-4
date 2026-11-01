
/* ==== FUN_00424398 @ 00424398 ==== 
 * signature: undefined __register FUN_00424398(int * param_1, int * param_2, int * param_3)
 * body: 00424398-004243c3
 */

void FUN_00424398(int *param_1,int *param_2,int *param_3)

{
  int iStack_14;
  int iStack_10;
  
  (**(code **)(*param_1 + 0x3c))(param_1,&iStack_14);
  *param_3 = *param_2 - iStack_14;
  param_3[1] = param_2[1] - iStack_10;
  return;
}


