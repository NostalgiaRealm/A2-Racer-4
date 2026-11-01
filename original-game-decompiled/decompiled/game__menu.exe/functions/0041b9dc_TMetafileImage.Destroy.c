
/* ==== TMetafileImage.Destroy @ 0041b9dc ==== 
 * signature: undefined TMetafileImage.Destroy(void)
 * body: 0041b9dc-0041ba15
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMetafileImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if ((HENHMETAFILE)piVar1[2] != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile((HENHMETAFILE)piVar1[2]);
  }
  FUN_0041756c((HGDIOBJ)piVar1[5]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


