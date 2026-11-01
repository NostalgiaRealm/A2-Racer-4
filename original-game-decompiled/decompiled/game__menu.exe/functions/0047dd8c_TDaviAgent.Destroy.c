
/* ==== TDaviAgent.Destroy @ 0047dd8c ==== 
 * signature: undefined TDaviAgent.Destroy(void)
 * body: 0047dd8c-0047ddf4
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviAgent_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = FUN_004032fc(param_1,param_2);
  iVar1 = piVar2[2];
  *(undefined4 *)(iVar1 + 0x2e8) = 0;
  *(undefined4 *)(iVar1 + 0x2ec) = 0;
  FUN_0040c968(piVar2 + 2);
  iVar1 = piVar2[1];
  *(undefined4 *)(iVar1 + 0x2d8) = 0;
  *(undefined4 *)(iVar1 + 0x2dc) = 0;
  *(undefined4 *)(iVar1 + 0x290) = 0;
  *(undefined4 *)(iVar1 + 0x294) = 0;
  FUN_0040c968(piVar2 + 1);
  TObject_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar2);
  }
  return;
}


