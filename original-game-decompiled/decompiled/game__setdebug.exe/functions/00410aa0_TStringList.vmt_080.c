
/* ==== TStringList.vmt_080 @ 00410aa0 ==== 
 * signature: undefined TStringList.vmt_080(void)
 * body: 00410aa0-00410ad0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_080(int *param_1,undefined *param_2)

{
  if (((char)param_1[6] == '\0') && (1 < param_1[4])) {
    (**(code **)(*param_1 + 0x74))();
    FUN_0041099c((int)param_1,0,param_1[4] - 1,param_2);
    (**(code **)(*param_1 + 0x70))();
  }
  return;
}


