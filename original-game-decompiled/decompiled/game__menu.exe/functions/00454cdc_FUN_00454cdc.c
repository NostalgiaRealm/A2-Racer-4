
/* ==== FUN_00454cdc @ 00454cdc ==== 
 * signature: uint __register FUN_00454cdc(undefined4 param_1)
 * body: 00454cdc-00454d04
 */

uint FUN_00454cdc(undefined4 param_1)

{
  undefined1 local_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined4 local_4;
  
  uStack_6 = (undefined1)((uint)param_1 >> 0x10);
  uStack_7 = (undefined1)((uint)param_1 >> 8);
  local_8 = (undefined1)param_1;
  local_4 = (uint)CONCAT12(local_8,CONCAT11(uStack_7,uStack_6));
  return local_4;
}


