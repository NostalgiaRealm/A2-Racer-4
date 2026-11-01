
/* ==== FUN_00431110 @ 00431110 ==== 
 * signature: undefined FUN_00431110(void)
 * body: 00431110-00431196
 */

void FUN_00431110(int *param_1,int *param_2)

{
  char cVar1;
  int iStack_1c;
  int iStack_18;
  char cStack_14;
  undefined4 uStack_10;
  
  FUN_004302c8(param_1);
  uStack_10 = FUN_00410ad4(param_2);
  (**(code **)(*param_2 + 4))(param_2,&iStack_1c,4);
  (**(code **)(*param_2 + 4))(param_2,&iStack_18,4);
  cVar1 = (char)iStack_1c;
  cStack_14 = (char)((uint)iStack_1c >> 8);
  FUN_00410ae4(param_2,uStack_10);
  if (((iStack_1c == iStack_18) || (cVar1 != 'I')) || (cStack_14 != 'L')) {
    FUN_00430dfc(param_1,param_2);
  }
  else {
    FUN_0043108c(param_1,(int)param_2);
  }
  return;
}


