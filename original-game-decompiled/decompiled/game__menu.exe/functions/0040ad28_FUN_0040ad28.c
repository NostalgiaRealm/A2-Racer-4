
/* ==== FUN_0040ad28 @ 0040ad28 ==== 
 * signature: undefined __register FUN_0040ad28(int param_1)
 * body: 0040ad28-0040ade4
 */

void FUN_0040ad28(int param_1)

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
  cVar1 = FUN_0040a758(param_1,local_24,&local_1c);
  if ((cVar1 == '\0') ||
     ((iVar2 = FUN_00403edc(param_1), local_24[0] <= iVar2 &&
      (cVar1 = FUN_0040aa94(param_1,local_24,(double *)&local_14), cVar1 == '\0')))) {
    local_24[0] = 1;
    cVar1 = FUN_0040aa94(param_1,local_24,&local_2c);
    if ((cVar1 == '\0') || (iVar2 = FUN_00403edc(param_1), local_24[0] <= iVar2)) {
      local_8 = 0xb;
      local_c = param_1;
      FUN_0040810c((undefined4 *)PTR_PTR_004ab624,&local_c,0);
    }
  }
  return;
}


