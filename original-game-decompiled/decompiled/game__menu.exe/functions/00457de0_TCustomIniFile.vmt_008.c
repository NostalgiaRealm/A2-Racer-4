
/* ==== TCustomIniFile.vmt_008 @ 00457de0 ==== 
 * signature: undefined __register TCustomIniFile.vmt_008(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00457de0-00457e83
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
  undefined4 *local_10;
  byte *local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (byte *)0x0;
  local_10 = (undefined4 *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  pcStack_24 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_24;
  ppbVar3 = &local_c;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3,ppbVar3,0);
  iVar1 = FUN_00403edc((int)local_c);
  iVar2 = extraout_ECX;
  if (((2 < iVar1) && (*local_c == 0x30)) && ((local_c[1] == 0x58 || (local_c[1] == 0x78)))) {
    FUN_004040e4((int)local_c,3,0x7fffffff,(int *)&local_10);
    FUN_00403f28((int *)&local_c,(undefined4 *)&DAT_00457ea0,local_10);
    iVar2 = extraout_ECX_00;
  }
  FUN_00408654(local_c,param_4,iVar2);
  *in_FS_OFFSET = (int)ppbVar3;
  pcStack_24 = FUN_00457e8b;
  FUN_00403c80((int *)&local_10,2);
  return;
}


