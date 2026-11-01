
/* ==== FUN_00408654 @ 00408654 ==== 
 * signature: undefined4 __register FUN_00408654(byte * param_1, undefined4 param_2, int param_3)
 * body: 00408654-00408669
 */

undefined4 FUN_00408654(byte *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_3;
  uVar1 = FUN_00402c68(param_1,&local_8);
  if (local_8 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}


