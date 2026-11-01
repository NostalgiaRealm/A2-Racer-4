
/* ==== TStringList.vmt_054 @ 004123e8 ==== 
 * signature: undefined __register TStringList.vmt_054(int * param_1, int param_2, undefined4 * param_3)
 * body: 004123e8-0041242c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_054(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab7bc,0);
  }
  if ((param_2 < 0) || (param_1[4] < param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  FUN_00412430(param_1,param_2,param_3);
  return;
}


