
/* ==== TObjectList.vmt_010 @ 00451ae0 ==== 
 * signature: undefined TObjectList.vmt_010(void)
 * body: 00451ae0-00451b16
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TObjectList_vmt_010(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((char)param_1[2] == '\0') {
    piVar1 = (int *)(**(code **)*param_1)(param_1,param_2);
    FUN_00402f9c(piVar1);
    (**(code **)(*param_1 + 4))(param_1,param_2,0);
  }
  FUN_00410150((int *)param_1[1],param_2);
  return;
}


