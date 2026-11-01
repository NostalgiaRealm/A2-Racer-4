
/* ==== FUN_004105b8 @ 004105b8 ==== 
 * signature: int __register FUN_004105b8(int * param_1, int param_2)
 * body: 004105b8-004105f1
 */

int FUN_004105b8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0041030c((int)param_1,param_2);
  iVar2 = 0;
  if (-1 < iVar1) {
    *(undefined4 *)(param_1[1] + iVar1 * 4) = 0;
    FUN_00410150(param_1,iVar1);
    (**(code **)(*param_1 + 4))(param_1,param_2,1);
    iVar2 = param_2;
  }
  return iVar2;
}


