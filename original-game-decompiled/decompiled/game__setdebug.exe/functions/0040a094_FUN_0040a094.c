
/* ==== FUN_0040a094 @ 0040a094 ==== 
 * signature: undefined __register FUN_0040a094(int param_1)
 * body: 0040a094-0040a150
 */

void FUN_0040a094(int param_1)

{
  char cVar1;
  int iVar2;
  double local_2c;
  int local_24 [2];
  double local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 local_8;
  
  local_24[0] = 1;
  local_14 = 0;
  uStack_10 = 0;
  cVar1 = FUN_00409ac4(param_1,local_24,&local_1c);
  if ((cVar1 == '\0') ||
     ((iVar2 = FUN_00403c38(param_1), local_24[0] <= iVar2 &&
      (cVar1 = FUN_00409e00(param_1,local_24,(double *)&local_14), cVar1 == '\0')))) {
    local_24[0] = 1;
    cVar1 = FUN_00409e00(param_1,local_24,&local_2c);
    if ((cVar1 == '\0') || (iVar2 = FUN_00403c38(param_1), local_24[0] <= iVar2)) {
      local_8 = 0xb;
      local_c = param_1;
      FUN_004079a0((undefined4 *)PTR_PTR_00446a90,&local_c,0);
    }
  }
  return;
}


