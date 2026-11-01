
/* ==== FUN_00409954 @ 00409954 ==== 
 * signature: undefined4 __register FUN_00409954(int param_1, int * param_2, char param_3)
 * body: 00409954-0040998a
 */

undefined4 FUN_00409954(int param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_00409810(param_1,param_2);
  iVar1 = FUN_00403c38(param_1);
  if ((*param_2 <= iVar1) && (*(char *)(param_1 + -1 + *param_2) == param_3)) {
    *param_2 = *param_2 + 1;
    uVar2 = 1;
  }
  return uVar2;
}


