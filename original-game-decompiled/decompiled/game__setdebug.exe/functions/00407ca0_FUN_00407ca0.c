
/* ==== FUN_00407ca0 @ 00407ca0 ==== 
 * signature: undefined4 __register FUN_00407ca0(byte * param_1)
 * body: 00407ca0-00407cd8
 */

undefined4 FUN_00407ca0(byte *param_1)

{
  undefined4 uVar1;
  int local_14;
  byte *local_10;
  undefined1 local_c;
  
  uVar1 = FUN_00402a4c(param_1,&local_14);
  if (local_14 != 0) {
    local_c = 0xb;
    local_10 = param_1;
    FUN_004079a0((undefined4 *)PTR_PTR_00446b8c,&local_10,0);
  }
  return uVar1;
}


