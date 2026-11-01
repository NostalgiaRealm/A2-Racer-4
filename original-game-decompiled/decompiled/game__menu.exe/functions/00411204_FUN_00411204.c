
/* ==== FUN_00411204 @ 00411204 ==== 
 * signature: undefined __register FUN_00411204(int * param_1, int * param_2)
 * body: 00411204-0041125d
 */

void FUN_00411204(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,param_1[1]);
  if ((char)uVar1 == '\0') {
    FUN_004101ec(&PTR_TList_vmt_000_0040ea6c,(undefined4 *)PTR_PTR_004ab884,0);
  }
  FUN_00410104((int *)param_1[2],(int)param_2);
  param_2[1] = (int)param_1;
  param_2[2] = param_1[4];
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0xc))(param_1,param_2);
  FUN_00410e54(param_1);
  FUN_004111a0(param_1,param_2,0);
  return;
}


