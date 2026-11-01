
/* ==== TMetafile.Destroy @ 0041bd98 ==== 
 * signature: undefined TMetafile.Destroy(void)
 * body: 0041bd98-0041bdc4
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMetafile_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0041cf14((int *)piVar1[8]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


