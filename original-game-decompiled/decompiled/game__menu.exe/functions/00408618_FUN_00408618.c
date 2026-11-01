
/* ==== FUN_00408618 @ 00408618 ==== 
 * signature: undefined4 __register FUN_00408618(byte * param_1)
 * body: 00408618-00408650
 */

undefined4 FUN_00408618(byte *param_1)

{
  undefined4 uVar1;
  int local_14;
  byte *local_10;
  undefined1 local_c;
  
  uVar1 = FUN_00402c68(param_1,&local_14);
  if (local_14 != 0) {
    local_c = 0xb;
    local_10 = param_1;
    FUN_0040810c((undefined4 *)PTR_PTR_004ab774,&local_10,0);
  }
  return uVar1;
}


