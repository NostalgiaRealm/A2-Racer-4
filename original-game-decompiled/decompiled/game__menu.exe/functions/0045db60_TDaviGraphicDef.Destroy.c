
/* ==== TDaviGraphicDef.Destroy @ 0045db60 ==== 
 * signature: undefined TDaviGraphicDef.Destroy(void)
 * body: 0045db60-0045dbda
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviGraphicDef_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  uint uVar2;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0045debc((int)piVar1,0x4403);
  FUN_0040c968(piVar1 + 0x14);
  uVar2 = 0;
  do {
    FUN_00402f9c((int *)piVar1[(uVar2 & 0x7f) + 9]);
    piVar1[(uVar2 & 0x7f) + 9] = 0;
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\a');
  if ((HGDIOBJ)piVar1[0x10] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)piVar1[0x10]);
    piVar1[0x10] = 0;
  }
  FUN_00402f9c((int *)piVar1[0x13]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


