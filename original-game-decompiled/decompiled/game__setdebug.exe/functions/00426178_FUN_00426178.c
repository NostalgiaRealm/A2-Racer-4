
/* ==== FUN_00426178 @ 00426178 ==== 
 * signature: int * __register FUN_00426178(int * param_1, undefined4 * param_2)
 * body: 00426178-004261fd
 */

int * FUN_00426178(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_1c [4];
  
  piVar3 = local_1c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  piVar3 = (int *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x54))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x54))();
    iVar1 = FUN_00402c5c(param_1);
    if (iVar2 != iVar1) {
      iVar2 = (**(code **)(*param_1 + 0x54))();
      piVar3 = (int *)(**(code **)(iVar2 + 0x2c))(iVar2,1,*(undefined4 *)PTR_DAT_00446c80);
      TControl_set_Top(piVar3,local_1c[1]);
      TControl_set_Left(piVar3,local_1c[0]);
      FUN_00424270(piVar3,local_1c[2] - local_1c[0]);
      FUN_004242b4(piVar3,local_1c[3] - local_1c[1]);
    }
  }
  return piVar3;
}


