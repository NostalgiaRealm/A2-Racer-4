
/* ==== TStringList.vmt_050 @ 004123b0 ==== 
 * signature: undefined TStringList.vmt_050(void)
 * body: 004123b0-004123e7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStringList_vmt_050(int *param_1,undefined *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uStack_c;
  
  uStack_c = param_3;
  if ((char)param_1[6] == '\0') {
    uStack_c = TStrings_vmt_050(param_1,param_2);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,&uStack_c);
    if (cVar1 == '\0') {
      uStack_c = 0xffffffff;
    }
  }
  return uStack_c;
}


