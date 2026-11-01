
/* ==== TStringList.vmt_030 @ 00410a68 ==== 
 * signature: undefined TStringList.vmt_030(void)
 * body: 00410a68-00410a77
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_030(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x74))();
    return;
  }
  (**(code **)(*param_1 + 0x70))();
  return;
}


