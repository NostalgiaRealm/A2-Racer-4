
/* ==== TOleGraphic.vmt_014 @ 0046e088 ==== 
 * signature: undefined TOleGraphic.vmt_014(void)
 * body: 0046e088-0046e188;0046e190-0046e196
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleGraphic_vmt_014(int *param_1,int *param_2,RECT *param_3)

{
  HDC hdc;
  HPALETTE hPal;
  HPALETTE hPal_00;
  int iVar1;
  uint uVar2;
  int *in_FS_OFFSET;
  int *piStack_3c;
  int iStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  HENHMETAFILE pHStack_14;
  short sStack_10;
  
  if (param_1[8] != 0) {
    puStack_24 = (undefined1 *)0x46e0ab;
    FUN_0041912c((int)param_2);
    pcStack_28 = thunk_FUN_004036bc;
    iStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_2c;
    puStack_24 = &stack0xfffffffc;
    hdc = (HDC)FUN_004194d8(param_2);
    hPal = (HPALETTE)(**(code **)(*param_1 + 0x24))();
    hPal_00 = (HPALETTE)0x0;
    if (hPal != (HPALETTE)0x0) {
      hPal_00 = SelectPalette(hdc,hPal,-1);
      RealizePalette(hdc);
    }
    (**(code **)(*(int *)param_1[8] + 0x14))();
    if (sStack_10 == 4) {
      piStack_3c = (int *)param_1[8];
      (**(code **)(*piStack_3c + 0xc))();
      PlayEnhMetaFile(hdc,pHStack_14,param_3);
    }
    else {
      iVar1 = FUN_0046e23c((int)param_1);
      piStack_3c = (int *)-iVar1;
      FUN_0046e258((int)param_1);
      FUN_0046e23c((int)param_1);
      uVar2 = (**(code **)(*(int *)param_1[8] + 0x20))();
      FUN_0046c2c0(uVar2);
    }
    if (hPal != (HPALETTE)0x0) {
      SelectPalette(hdc,hPal_00,-1);
    }
    *in_FS_OFFSET = (int)piStack_3c;
    FUN_004193d0((int)param_2);
    return;
  }
  return;
}


