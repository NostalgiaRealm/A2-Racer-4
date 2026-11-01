
/* ==== TList.vmt_00c @ 004101b4 ==== 
 * signature: undefined __register TList.vmt_00c(undefined4 param_1, byte * param_2, undefined4 param_3)
 * body: 004101b4-004101e5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TList_vmt_00c(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_004101b0();
  local_c = 0;
  local_10 = param_3;
  uVar1 = FUN_0040b614((int)&DAT_0040e844,'\x01',param_2,0,&local_10);
  FUN_004036f4(uVar1);
  return;
}


