
/* ==== TStringList.vmt_054 @ 00410858 ==== 
 * signature: undefined __register TStringList.vmt_054(int * param_1, int param_2, undefined4 * param_3)
 * body: 00410858-0041089c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_054(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446bcc,0);
  }
  if ((param_2 < 0) || (param_1[4] < param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  FUN_004108a0(param_1,param_2,param_3);
  return;
}


