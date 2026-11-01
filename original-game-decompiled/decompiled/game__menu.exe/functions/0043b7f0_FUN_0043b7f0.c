
/* ==== FUN_0043b7f0 @ 0043b7f0 ==== 
 * signature: undefined FUN_0043b7f0(void)
 * body: 0043b7f0-0043b876
 */

void FUN_0043b7f0(int *param_1,int *param_2)

{
  char cVar1;
  int iStack_1c;
  int iStack_18;
  char cStack_14;
  undefined4 uStack_10;
  
  FUN_0043a61c(param_1);
  uStack_10 = FUN_00412664(param_2);
  (**(code **)(*param_2 + 4))(param_2,&iStack_1c,4);
  (**(code **)(*param_2 + 4))(param_2,&iStack_18,4);
  cVar1 = (char)iStack_1c;
  cStack_14 = (char)((uint)iStack_1c >> 8);
  FUN_00412674(param_2,uStack_10);
  if (((iStack_1c == iStack_18) || (cVar1 != 'I')) || (cStack_14 != 'L')) {
    FUN_0043b4dc(param_1,param_2);
  }
  else {
    FUN_0043b76c(param_1,(int)param_2);
  }
  return;
}


