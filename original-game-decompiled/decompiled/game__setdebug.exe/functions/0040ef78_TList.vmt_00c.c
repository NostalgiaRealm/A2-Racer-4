
/* ==== TList.vmt_00c @ 0040ef78 ==== 
 * signature: undefined __register TList.vmt_00c(undefined4 param_1, byte * param_2, undefined4 param_3)
 * body: 0040ef78-0040efa9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TList_vmt_00c(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_0040ef74();
  local_c = 0;
  local_10 = param_3;
  uVar1 = FUN_0040a974((int)&DAT_0040d784,'\x01',param_2,0,&local_10);
  FUN_0040346c(uVar1);
  return;
}


