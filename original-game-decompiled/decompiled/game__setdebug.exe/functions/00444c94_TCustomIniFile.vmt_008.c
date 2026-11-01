
/* ==== TCustomIniFile.vmt_008 @ 00444c94 ==== 
 * signature: undefined TCustomIniFile.vmt_008(void)
 * body: 00444c94-00444d37
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomIniFile_vmt_008
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  int *in_FS_OFFSET;
  byte **ppbVar3;
  code *pcStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  undefined4 *puStack_10;
  byte *pbStack_c;
  undefined4 uStack_8;
  
  puStack_1c = &stack0xfffffffc;
  pbStack_c = (byte *)0x0;
  puStack_10 = (undefined4 *)0x0;
  pcStack_20 = thunk_FUN_00403434;
  pcStack_24 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_24;
  ppbVar3 = &pbStack_c;
  uStack_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3,ppbVar3,0);
  iVar1 = FUN_00403c38((int)pbStack_c);
  iVar2 = extraout_ECX;
  if (((2 < iVar1) && (*pbStack_c == 0x30)) && ((pbStack_c[1] == 0x58 || (pbStack_c[1] == 0x78)))) {
    FUN_00403e40((int)pbStack_c,3,0x7fffffff,(int *)&puStack_10);
    FUN_00403c84((int *)&pbStack_c,(undefined4 *)&DAT_00444d54,puStack_10);
    iVar2 = extraout_ECX_00;
  }
  FUN_00407cdc(pbStack_c,param_4,iVar2);
  *in_FS_OFFSET = (int)ppbVar3;
  pcStack_24 = FUN_00444d3f;
  FUN_004039dc((int *)&puStack_10,2);
  return;
}


