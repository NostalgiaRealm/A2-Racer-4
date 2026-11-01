
/* ==== FUN_0040a5e8 @ 0040a5e8 ==== 
 * signature: undefined4 __register FUN_0040a5e8(int param_1, int * param_2, char param_3)
 * body: 0040a5e8-0040a61e
 */

undefined4 FUN_0040a5e8(int param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_0040a4a4(param_1,param_2);
  iVar1 = FUN_00403edc(param_1);
  if ((*param_2 <= iVar1) && (*(char *)(param_1 + -1 + *param_2) == param_3)) {
    *param_2 = *param_2 + 1;
    uVar2 = 1;
  }
  return uVar2;
}


