
/* ==== FUN_00514d90 @ 00514d90 ==== 
 * signature: undefined4 __cdecl FUN_00514d90(int * param_1, int param_2)
 * body: 00514d90-00514dc0
 */

undefined4 __cdecl FUN_00514d90(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00514680(*param_1,param_2);
  if (iVar1 == 0) {
    FUN_00514020(param_1,param_2);
    return 1;
  }
  return 0;
}


