
/* ==== FUN_00407cdc @ 00407cdc ==== 
 * signature: undefined4 __register FUN_00407cdc(byte * param_1, undefined4 param_2, int param_3)
 * body: 00407cdc-00407cf1
 */

undefined4 FUN_00407cdc(byte *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_3;
  uVar1 = FUN_00402a4c(param_1,&local_8);
  if (local_8 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}


