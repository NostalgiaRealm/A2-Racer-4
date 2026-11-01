
/* ==== FUN_00454c7c @ 00454c7c ==== 
 * signature: uint __register FUN_00454c7c(undefined4 param_1)
 * body: 00454c7c-00454ca4
 */

uint FUN_00454c7c(undefined4 param_1)

{
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined4 local_4;
  
  uStack_7 = (undefined1)((uint)param_1 >> 8);
  uStack_6 = (undefined1)((uint)param_1 >> 0x10);
  local_4 = CONCAT31(CONCAT21((short)param_1,uStack_7),uStack_6) & 0xffffff;
  return local_4;
}


