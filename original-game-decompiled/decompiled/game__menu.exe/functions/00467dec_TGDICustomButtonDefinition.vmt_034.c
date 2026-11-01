
/* ==== TGDICustomButtonDefinition.vmt_034 @ 00467dec ==== 
 * signature: undefined __register TGDICustomButtonDefinition.vmt_034(int param_1, char param_2)
 * body: 00467dec-00467e06
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDICustomButtonDefinition_vmt_034(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x6c)) {
    *(char *)(param_1 + 0x6c) = param_2;
    FUN_00467e60(param_1,0x5402,0,0);
  }
  return;
}


