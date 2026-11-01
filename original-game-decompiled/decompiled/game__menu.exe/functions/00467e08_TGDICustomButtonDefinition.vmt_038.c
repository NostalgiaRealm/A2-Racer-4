
/* ==== TGDICustomButtonDefinition.vmt_038 @ 00467e08 ==== 
 * signature: undefined __register TGDICustomButtonDefinition.vmt_038(int param_1, char param_2)
 * body: 00467e08-00467e22
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDICustomButtonDefinition_vmt_038(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x6d)) {
    *(char *)(param_1 + 0x6d) = param_2;
    FUN_00467e60(param_1,0x5402,0,0);
  }
  return;
}


