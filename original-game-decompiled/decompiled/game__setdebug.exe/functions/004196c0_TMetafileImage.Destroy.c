
/* ==== TMetafileImage.Destroy @ 004196c0 ==== 
 * signature: undefined TMetafileImage.Destroy(void)
 * body: 004196c0-004196f9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMetafileImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if ((HENHMETAFILE)piVar1[2] != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile((HENHMETAFILE)piVar1[2]);
  }
  FUN_004158e4((HGDIOBJ)piVar1[5]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


