
/* ==== TGDICustomButtonDefinition.vmt_03c @ 00467e24 ==== 
 * signature: undefined __register TGDICustomButtonDefinition.vmt_03c(int param_1, char param_2)
 * body: 00467e24-00467e3e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDICustomButtonDefinition_vmt_03c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x6e)) {
    *(char *)(param_1 + 0x6e) = param_2;
    FUN_00467e60(param_1,0x5402,0,0);
  }
  return;
}


