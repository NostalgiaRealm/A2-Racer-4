
/* ==== TStringList.vmt_034 @ 00412108 ==== 
 * signature: undefined TStringList.vmt_034(void)
 * body: 00412108-0041215c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int TStringList_vmt_034(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iStack_10;
  
  if ((char)param_1[6] == '\0') {
    iStack_10 = param_1[4];
  }
  else {
    iStack_10 = param_3;
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,&iStack_10);
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        return iStack_10;
      }
      if (*(char *)((int)param_1 + 0x19) == '\x02') {
        FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab6f8,0);
      }
    }
  }
  FUN_00412430(param_1,iStack_10,param_2);
  return iStack_10;
}


