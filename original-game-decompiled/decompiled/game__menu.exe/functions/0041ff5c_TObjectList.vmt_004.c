
/* ==== TObjectList.vmt_004 @ 0041ff5c ==== 
 * signature: undefined __register TObjectList.vmt_004(int param_1, int * param_2, char param_3)
 * body: 0041ff5c-0041ff85
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TObjectList_vmt_004(int param_1,int *param_2,char param_3)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (param_3 == '\x02')) {
    FUN_00402f9c(param_2);
  }
  TList_vmt_004();
  return;
}


