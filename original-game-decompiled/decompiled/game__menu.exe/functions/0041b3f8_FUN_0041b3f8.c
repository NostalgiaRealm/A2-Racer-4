
/* ==== FUN_0041b3f8 @ 0041b3f8 ==== 
 * signature: undefined __register FUN_0041b3f8(int * param_1, int param_2)
 * body: 0041b3f8-0041b459
 */

void FUN_0041b3f8(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  piVar1 = (int *)param_1[1];
  uVar2 = FUN_00403114(piVar1,param_2);
  if ((char)uVar2 == '\0') {
    FUN_00402f9c(piVar1);
    param_1[1] = 0;
    iVar3 = (**(code **)(param_2 + 0xc))(param_2,1);
    param_1[1] = iVar3;
    *(int **)(iVar3 + 0xc) = param_1;
    uVar2 = FUN_00403190(param_1,CONCAT22(extraout_var,0xfffd));
    *(undefined4 *)(iVar3 + 8) = uVar2;
    *(int **)(iVar3 + 0x14) = param_1;
    uVar2 = FUN_00403190(param_1,CONCAT22(extraout_var_00,0xfffc));
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
    FUN_00403178(param_1,param_1,extraout_ECX);
  }
  return;
}


